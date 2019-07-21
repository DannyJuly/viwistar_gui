/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2018
 **/
/*****************************************************************************
** Includes
*****************************************************************************/
#include <QtGui>//等于QT5的QWidgets，所有的类都在QtGui里,看文件
#include <QMessageBox>
#include <QWidget>
#include <iostream>
#include "../include/test_gui/main_window.hpp"
#include <QProcess>
#include "rviz/display.h"

/*****************************************************************************
** Namespaces
*****************************************************************************/
namespace test_gui
{

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/
MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
    : QMainWindow(parent) //constructor
    , qnode(argc,argv)
{
    ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
    setWindowIcon(QIcon(":/images/viwistar_logo.png"));//继承于Qmainwindow类
    ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));
    //QObject::connect(&qnode,SIGNAL(ros))
    /*********************
    ** Logging
    **********************/
    ui.view_logging->setModel(qnode.loggingModel());
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));
    ui.view_listen->setModel(qnode.loggingModelLis());
    QObject::connect(&qnode, SIGNAL(loggingListen()), this, SLOT(updateLogListen()));
    QObject::connect(&qnode, SIGNAL(realtimeposition()),this,SLOT(updateposition()));
    // & means pointer
    /*********************
    ** Auto Start
    **********************/
    if(ui.checkbox_remember_settings->isChecked())
    {
        on_button_connect_clicked(true);
    }
}

MainWindow::~MainWindow()
{

}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/
void MainWindow::showNoMasterMessage()
{
    QMessageBox msgBox;
    msgBox.setText("Couldn't find the ros master.");
    msgBox.exec(); //程序进入消息循环，等待可能的输入，并传递给其他消息窗口
    //close(); //close  all windows
}

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 */
void MainWindow::on_button_connect_clicked(bool check)
{

    if(ui.robot_arm_choice->currentIndex()==1 && ui.model_choice->currentIndex()==0)
    {
        //qnode.rviz.start("rosrun rviz rviz");
      system("gnome-terminal -x bash -c 'source ~/viwistar_gui3/devel/setup.bash; nohup roslaunch panda_moveit_config demo.launch'&");
    }
    if(ui.robot_arm_choice->currentIndex()==2 && ui.model_choice->currentIndex()==0)
    {
        //qnode.rviz.start("rosrun rviz rviz");
      system("gnome-terminal -x bash -c 'source ~/viwistar_gui3/devel/setup.bash; nohup roslaunch fanuc_m16ib20_moveit_config demo.launch'&");
    }
    //ui.button_rviz->setEnabled(true);
}

void MainWindow::on_button_roscore_clicked()
{
    QProcess *rosc = new QProcess();
     static bool flag_start_roscore = true;
         if (flag_start_roscore) {
              ui.button_roscore->setStyleSheet("background-color: rgb(255,0,0);");
              ui.button_roscore->setText(QString::fromLocal8Bit("关闭主节点"));
              rosc->start("roscore");
              rosc->waitForStarted();
              QApplication::processEvents();
              ui.button_connect->setEnabled(true);
              ui.button_connect_stop->setEnabled(true);
              //ui.button_rviz->setEnabled(true);
             //system("gnome-terminal -x bash -c 'source /opt/ros/indigo/setup.bash;roscore; limited:=true'&");
             flag_start_roscore = false;
         } else {
             ui.button_roscore->setStyleSheet("background-color: rgb(255,255,0);");
             ui.button_roscore->setText(QString::fromLocal8Bit("开启主节点"));
             //system("killall -g roscore");
             ui.button_connect->setEnabled(false);
             ui.button_connect_stop->setEnabled(false);
             //ui.button_rviz->setEnabled(false);
             on_shutdown_roscore_clicked();
             flag_start_roscore = true;
         }
}

void MainWindow::on_shutdown_roscore_clicked()
{

    QProcess shutdown;
    shutdown.execute("killall -9 rviz");
    shutdown.waitForFinished();
//    shutdown.execute("killall -9 roscore");
//    shutdown.waitForFinished();
//    shutdown.execute("killall -9 rosmaster");
//    shutdown.waitForFinished();
//    shutdown.execute("killall -9 rosout");
//    shutdown.waitForFinished();

}

void MainWindow::on_button_connect_stop_clicked()
{
    //qnode.wait(); //close the thread
    //ui.button_rviz->setEnabled(false);
    QProcess shutdown;
    shutdown.execute("killall -9 rviz");
    qnode.shutdown();
    qnode.wait();
}

//void MainWindow::on_button_rviz_clicked()
//{
//    //qnode.rviz.execute("source ~/fanuc_m16ib/devel/setup.bash");
//    //qnode.rviz.start("nohup roslaunch motion_planning fanuc_m16b.launch &");
//    //system("gnome-terminal -x bash -c 'roslaunch motion_planning fanuc_m16b.launch'");
//    system("gnome-terminal -x bash -c 'source ~/fanuc_m16ib/devel/setup.bash; nohup roslaunch motion_planning fanuc_m16b.launch'&");
//}


void MainWindow::on_checkbox_use_environment_stateChanged(int state)
{
    bool enabled;
    if (state == 0)
        enabled = true;
    else
        enabled = false;

    ui.line_edit_master->setEnabled(enabled);
    ui.line_edit_host->setEnabled(enabled);
    ui.line_edit_topic->setEnabled(enabled);
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/
/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView()
{
    ui.view_logging->scrollToBottom();
}

void MainWindow::updateLogListen()
{
    ui.view_listen->scrollToBottom();
}

void MainWindow::updateposition()
{
  int prec = 4;
  char format='g';
  ui.label_realtime_x->setText(qnode.tempStr.setNum(qnode.transformStamped.transform.translation.x,format,prec));
  ui.label_realtime_y->setText(qnode.tempStr.setNum(qnode.transformStamped.transform.translation.y,format,prec));
  ui.label_realtime_z->setText(qnode.tempStr.setNum(qnode.transformStamped.transform.translation.z,format,prec));
  ui.label_realtime_rotation_x->setText(qnode.tempStr.setNum(qnode.transformStamped.transform.rotation.x,format,prec));
  ui.label_realtime_rotation_y->setText(qnode.tempStr.setNum(qnode.transformStamped.transform.rotation.y,format,prec));
  ui.label_realtime_rotation_z->setText(qnode.tempStr.setNum(qnode.transformStamped.transform.rotation.z,format,prec));
  ui.label_realtime_rotation_w->setText(qnode.tempStr.setNum(qnode.transformStamped.transform.rotation.w,format,prec));
}
//void test_gui::MainWindow::on_button_connect_clicked()
//{
//    if(ui.robot_arm_choice->currentIndex()==2 && ui.model_choice->currentIndex()==0)
//    {
//        qnode.rviz.start("rosrun rviz rviz");
//    }
//}
/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/
void MainWindow::ReadSettings()
{
    QSettings settings("Qt-Ros Package", "test_gui");//name
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();//get the value of "host_url", QString is default
    QString topic_name = settings.value("topic_name", QString("/chatter")).toString();
    ui.line_edit_master->setText(master_url);
    ui.line_edit_host->setText(host_url);
    ui.line_edit_topic->setText(topic_name);
    bool remember = settings.value("remember_settings", false).toBool();
    ui.checkbox_remember_settings->setChecked(remember);
    bool checked = settings.value("use_environment_variables", false).toBool();
    ui.checkbox_use_environment->setChecked(checked);
    if(checked)
    {
        ui.line_edit_master->setEnabled(false);
        ui.line_edit_host->setEnabled(false);
        //ui.line_edit_topic->setEnabled(false);
    }
}

void MainWindow::WriteSettings()
{
    QSettings settings("Qt-Ros Package", "test_gui");
    settings.setValue("master_url",ui.line_edit_master->text());
    settings.setValue("host_url",ui.line_edit_host->text());
    settings.setValue("topic_name",ui.line_edit_topic->text());
    settings.setValue("use_environment_variables",QVariant(ui.checkbox_use_environment->isChecked()));
    settings.setValue("geometry", saveGeometry()); //set geometry as saveGeometry()
    settings.setValue("windowState", saveState());
    settings.setValue("remember_settings",QVariant(ui.checkbox_remember_settings->isChecked()));
}

void MainWindow::closeEvent(QCloseEvent *event)
{

    QMessageBox::StandardButton result=QMessageBox::question(this, "Confirm", QString::fromLocal8Bit("确认退出程序吗？"),QMessageBox::Yes|QMessageBox::No,QMessageBox::No);
      if (result==QMessageBox::Yes)
       {
          WriteSettings();
          //qnode.roscore.kill(); //kill roscore
          qnode.wait(); //close the thread
          on_shutdown_roscore_clicked();
          event->accept();
      }

      else
          event->ignore();

    // WriteSettings();
    //QMainWindow::closeEvent(event);
}

}  // namespace test_gui


void test_gui::MainWindow::on_confirm_input_clicked()
{
 // QString

    double x,y,z,r_x,r_y,r_z,r_w; //origin
    bool ok;
    x = QString(ui.lineEdit_origin_x->text()).toDouble(&ok);
    y = QString(ui.lineEdit_origin_y->text()).toDouble(&ok);
    z = QString(ui.lineEdit_origin_z->text()).toDouble(&ok);
    r_x = QString(ui.lineEdit_origin_rotation_x->text()).toDouble(&ok);
    r_y = QString(ui.lineEdit_origin_rotation_y->text()).toDouble(&ok);
    r_z = QString(ui.lineEdit_origin_rotation_z->text()).toDouble(&ok);
    r_w = QString(ui.lineEdit_origin_rotation_w->text()).toDouble(&ok);
    double t_x, t_y, t_z, tr_x,tr_y,tr_z,tr_w; //target
    t_x = QString(ui.lineEdit_target_x->text()).toDouble(&ok);
    t_y = QString(ui.lineEdit_target_x->text()).toDouble(&ok);
    t_z = QString(ui.lineEdit_target_x->text()).toDouble(&ok);
    tr_x = QString(ui.lineEdit_target_rotation_x->text()).toDouble(&ok);
    tr_y = QString(ui.lineEdit_target_rotation_y->text()).toDouble(&ok);
    tr_z = QString(ui.lineEdit_target_rotation_z->text()).toDouble(&ok);
    tr_w = QString(ui.lineEdit_target_rotation_w->text()).toDouble(&ok);
    qnode.set_origin(x,y,z,r_x,r_y,r_z,r_w);
    qnode.set_target(t_x,t_y,t_z,tr_x,tr_y,tr_z,tr_w);

    system("gnome-terminal -x bash -c 'source ~/viwistar_gui3/devel/setup.bash; nohup rosrun pick_place panda_pick_place'&");
}

void test_gui::MainWindow::on_button_begin_simulation_clicked()
{
  if(ui.checkbox_use_environment->isChecked())
  {
      if(!qnode.init())
          showNoMasterMessage();
      else
          ui.button_connect->setEnabled(true);
  }
  else
  {
      if(!qnode.init(ui.line_edit_master->text().toStdString(),
                        ui.line_edit_host->text().toStdString()))
      {
          showNoMasterMessage();
      }
      else
      {
          ui.button_connect->setEnabled(true);
          ui.line_edit_master->setReadOnly(true);
          ui.line_edit_host->setReadOnly(true);
          ui.line_edit_topic->setReadOnly(true);
      }
  }
}
