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
#include <QDebug>
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
    , qtransform(argc,argv)
{
    ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
    setWindowIcon(QIcon(":/images/viwistar_logo.png"));//继承于Qmainwindow类
    //ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    /*********************
    ** Logging
    **********************/
//    ui.view_logging->setModel(qnode.loggingModel());
//    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));
//    ui.view_listen->setModel(qnode.loggingModelLis());
//    QObject::connect(&qnode, SIGNAL(loggingListen()), this, SLOT(updateLogListen()));
    QObject::connect(&qnode, SIGNAL(realtimeposition()),this,SLOT(updateposition()));
    QObject::connect(&qtransform, SIGNAL(realtimetarget()),this,SLOT(updatetarget()));

    qnode.robot_choice = new QProcess();
    qnode.robot_simulation = new QProcess();
    qnode.robot_node = new QProcess();
    rosc = new QProcess();
    rosrun = new QProcess();
   // rosrun->start("rosrun test_gui test_gui");

    // & means pointer
    /*********************
    ** Auto Start
    **********************/
//    if(ui.checkbox_remember_settings->isChecked())
//    {
//        on_button_connect_clicked(true);
//    }
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
    msgBox.setText(QString::fromLocal8Bit("未找到主节点，请重新开启主节点"));
    msgBox.exec(); //程序进入消息循环，等待可能的输入，并传递给其他消息窗口
}

/*
 * To choose the robot type and model, then click "开始运行" to run the rviz of corresponding robot arm.
 */
void MainWindow::on_button_connect_clicked(bool check) //ros配置开始运行
{
    if(ui.model_choice->currentIndex()==1){
        if(ui.checkbox_use_environment->isChecked())
        {
            if(!qtransform.init()){
             showNoMasterMessage();
            }
        }
        else
        {
            if(!qtransform.init(ui.line_edit_master->text().toStdString(),
                           ui.line_edit_host->text().toStdString())){
                showNoMasterMessage();
            }
        }
    }

    else{
        if(ui.robot_arm_choice->currentIndex()==1)
        {
          //QProcess *rosc = new QProcess();
         //
          //qnode.robot_choice->start("rosrun rviz rviz");
          qnode.robot_choice->start("roslaunch panda_moveit_config demo.launch");
          //system("gnome-terminal -x bash -c 'source ~/viwistar_gui3/devel/setup.bash; nohup roslaunch panda_moveit_config demo.launch'&");
        }
        if(ui.robot_arm_choice->currentIndex()==2)
        {
         // system("gnome-terminal -x bash -c 'source ~/viwistar_gui/devel/setup.bash; nohup roslaunch fanuc_m16ib20_moveit_config demo.launch'&");
        }
    }


    //ui.button_rviz->setEnabled(true);
}

void MainWindow::on_button_roscore_clicked() //运行和关闭主节点
{
   // QProcess *rosc = new QProcess();
     static bool flag_start_roscore = true;
         if (flag_start_roscore) {
              ui.button_roscore->setStyleSheet("background-color: rgb(255,0,0);");
              ui.button_roscore->setText(QString::fromLocal8Bit("关闭主节点"));
              rosc->start("roscore");
              rosc->waitForStarted();
              sleep(1);
              QApplication::processEvents();
              ui.button_connect->setEnabled(true);
              ui.button_connect_stop->setEnabled(true);
             flag_start_roscore = false;
         } else {
             ui.button_roscore->setStyleSheet("background-color: rgb(255,255,0);");
             ui.button_roscore->setText(QString::fromLocal8Bit("开启主节点"));
             ui.button_connect->setEnabled(false);
             ui.button_connect_stop->setEnabled(false);
             rosc->terminate();
             on_shutdown_roscore_clicked();  //double check and close rviz
             flag_start_roscore = true;
         }
}

void MainWindow::on_shutdown_roscore_clicked()   //make sure they are all closed
{

      QProcess shutdown;
      if(ros::isStarted()) //whether the node is started by ros::start()
      {
        ros::shutdown();
        ros::waitForShutdown();
      }
      shutdown.execute("killall -9 rviz");
      shutdown.waitForFinished();
      shutdown.execute("killall -9 roscore");
      shutdown.waitForFinished();
      shutdown.execute("killall -9 rosmaster");
      shutdown.waitForFinished();
      shutdown.execute("killall -9 rosout");
      shutdown.waitForFinished();


}

void MainWindow::on_button_connect_stop_clicked()  //ros配置结束运行
{
    if(ros::isStarted()) //whether the node is started by ros::start()
    {
      ros::shutdown();
      ros::waitForShutdown();
    }
    QProcess shutdown;
    qnode.robot_choice->terminate();
    qnode.robot_simulation->terminate();
    //qnode.shutdown();
    //qnode.wait();


}

void test_gui::MainWindow::on_calibration_start_clicked() //ros标定开始运行
{
  if(ui.model_choice->currentIndex()==1){
      if(ui.checkbox_use_environment->isChecked())
      {
          if(!qtransform.init()){
           showNoMasterMessage();
          }
      }
      else
      {
          if(!qtransform.init(ui.line_edit_master->text().toStdString(),
                         ui.line_edit_host->text().toStdString())){
              showNoMasterMessage();
          }
      }
  }
}
void test_gui::MainWindow::on_calibration_stop_clicked() //ros标定结束运行
{
  if(ros::isStarted()) //whether the node is started by ros::start()
  {
    ros::shutdown();
    ros::waitForShutdown();
  }
}

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

void test_gui::MainWindow::on_confirm_input_clicked()   //ros仿真，输入坐标确认输入
{
 //read the input of target and origin position from lineEdit
    double x,y,z,r_x,r_y,r_z,r_w; //origin
    bool ok;
    x = QString(ui.lineEdit_origin_x->text()).toDouble(&ok);
    y = QString(ui.lineEdit_origin_y->text()).toDouble(&ok);
    z = QString(ui.lineEdit_origin_z->text()).toDouble(&ok);
    r_x = QString(ui.lineEdit_origin_rotation_x->text()).toDouble(&ok);
    r_y = QString(ui.lineEdit_origin_rotation_y->text()).toDouble(&ok);
    r_z = QString(ui.lineEdit_origin_rotation_z->text()).toDouble(&ok);
    r_w = QString(ui.lineEdit_origin_rotation_w->text()).toDouble(&ok);
    qnode.set_origin(x,y,z,r_x,r_y,r_z,r_w);
    double t_x, t_y, t_z, tr_x,tr_y,tr_z,tr_w; //target
    t_x = QString(ui.lineEdit_target_x->text()).toDouble(&ok);
    t_y = QString(ui.lineEdit_target_y->text()).toDouble(&ok);
    t_z = QString(ui.lineEdit_target_z->text()).toDouble(&ok);
    tr_x = QString(ui.lineEdit_target_rotation_x->text()).toDouble(&ok);
    tr_y = QString(ui.lineEdit_target_rotation_y->text()).toDouble(&ok);
    tr_z = QString(ui.lineEdit_target_rotation_z->text()).toDouble(&ok);
    tr_w = QString(ui.lineEdit_target_rotation_w->text()).toDouble(&ok);
    qnode.set_target(t_x,t_y,t_z,tr_x,tr_y,tr_z,tr_w);
    /*qDebug()<<"x:"<<t_x<<endl;
    qDebug()<<"x:"<<t_y<<endl;*/
    qnode.robot_simulation->start("rosrun pick_place panda_pick_place");
    ui.button_begin_simulation->setEnabled(true);
    //system("gnome-terminal -x bash -c 'source ~/viwistar_gui3/devel/setup.bash; rosrun pick_place panda_pick_place'&");
}

void test_gui::MainWindow::on_button_begin_simulation_clicked()  //ros仿真，开始模拟
{
  static bool flag_start_simulation = true;
  if(flag_start_simulation)
  {
    ui.confirm_input->setEnabled(false);
    ui.button_begin_simulation->setStyleSheet("background-color: rgb(255,255,255);");
    ui.button_begin_simulation->setText(QString::fromLocal8Bit("结束模拟"));
    flag_start_simulation = false;
    if(ui.checkbox_use_environment->isChecked())
    {
        if(!qnode.init()){
         showNoMasterMessage();
         ui.confirm_input->setEnabled(true);
         ui.button_begin_simulation->setStyleSheet("background-color: rgb(255,255,255);");
         ui.button_begin_simulation->setText(QString::fromLocal8Bit("开始模拟"));
         flag_start_simulation = true;
         ui.button_begin_simulation->setEnabled(false);
        }
    }
    else
    {
        if(!qnode.init(ui.line_edit_master->text().toStdString(),
                          ui.line_edit_host->text().toStdString()))
        {
            showNoMasterMessage();
            ui.confirm_input->setEnabled(true);
            ui.button_begin_simulation->setStyleSheet("background-color: rgb(255,255,255);");
            ui.button_begin_simulation->setText(QString::fromLocal8Bit("开始模拟"));
            flag_start_simulation = true;
            ui.button_begin_simulation->setEnabled(false);
        }
    }
  }
  //结束模拟
  else
  {
    //qDebug()<<qnode.robot_simulation->pid()<<endl;
    //qnode.robot_node->execute("rosnode kill /test_gui");
    qnode.shutdown();
    //qnode.robot_node->execute("rosnode kill /panda_arm_pick_place");
    qnode.robot_simulation->terminate();
   // qnode.robot_node->execute("rosnode kill /panda_arm_pick_place");
    ui.confirm_input->setEnabled(true);
    ui.button_begin_simulation->setStyleSheet("background-color: rgb(255,255,255);");
    ui.button_begin_simulation->setText(QString::fromLocal8Bit("开始模拟"));
    flag_start_simulation = true;
    ui.button_begin_simulation->setEnabled(false);
  }

}

void MainWindow::matrix_change(bool check)       //坐标修改函数
{
  ui.lineEdit_matrix_x->setEnabled(check);
  ui.lineEdit_matrix_y->setEnabled(check);
  ui.lineEdit_matrix_z->setEnabled(check);
  ui.lineEdit_matrix_rotation_x->setEnabled(check);
  ui.lineEdit_matrix_rotation_y->setEnabled(check);
  ui.lineEdit_matrix_rotation_z->setEnabled(check);
  ui.lineEdit_matrix_rotation_w->setEnabled(check);
}


void test_gui::MainWindow::on_matrix_input_clicked()    //ros标定确认输入标定坐标
{
  double x,y,z,r_x,r_y,r_z,r_w; //origin
  bool ok;
  x = QString(ui.lineEdit_matrix_x->text()).toDouble(&ok);
  y = QString(ui.lineEdit_matrix_y->text()).toDouble(&ok);
  z = QString(ui.lineEdit_matrix_z->text()).toDouble(&ok);
  r_x = QString(ui.lineEdit_matrix_rotation_x->text()).toDouble(&ok);
  r_y = QString(ui.lineEdit_matrix_rotation_y->text()).toDouble(&ok);
  r_z = QString(ui.lineEdit_matrix_rotation_z->text()).toDouble(&ok);
  r_w = QString(ui.lineEdit_matrix_rotation_w->text()).toDouble(&ok);
  qtransform.setTransform(x,y,z,r_x,r_y,r_z,r_w);
  ui.matrix_input->setEnabled(false);
  matrix_change(false);
}

void test_gui::MainWindow::on_matrix_edit_clicked()   //ros标定修改标定坐标
{
    ui.matrix_input->setEnabled(true);
    matrix_change(true);

}
/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/
/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateposition()    // ros仿真更新实时位置
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

void MainWindow::updatetarget()    //ros标定更新实时抓取点位置
{
  int prec = 4;
  char format='g';
  ui.label_realtime_target_x->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[0],format,prec));
  ui.label_realtime_target_y->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[1],format,prec));
  ui.label_realtime_target_z->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[2],format,prec));
  ui.label_realtime_rotation_target_x->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[3],format,prec));
  ui.label_realtime_rotation_target_y->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[4],format,prec));
  ui.label_realtime_rotation_target_z->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[5],format,prec));
  ui.label_realtime_rotation_target_w->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[6],format,prec));
  ui.label_realtime_target_width->setText(qtransform.tempStr.setNum(qtransform.msg_target.data[7],format,prec));
}
/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/
void MainWindow::ReadSettings()    //读取各个参数启动时
{
    QSettings settings("Qt-Ros Package", "test_gui");//name
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();//get the value of "host_url", QString is default
    QString topic_name = settings.value("topic_name", QString("/chatter")).toString();
    QString matrix_x = settings.value("matrix_x", QString("0")).toString();
    QString matrix_y = settings.value("matrix_y", QString("0")).toString();
    QString matrix_z = settings.value("matrix_z", QString("0")).toString();
    QString matrix_rotation_x = settings.value("matrix_rotation_x", QString("0")).toString();
    QString matrix_rotation_y = settings.value("matrix_rotation_y", QString("0")).toString();
    QString matrix_rotation_z = settings.value("matrix_rotation_z", QString("0")).toString();
    QString matrix_rotation_w = settings.value("matrix_rotation_w", QString("0")).toString();
    ui.lineEdit_matrix_x->setText(matrix_x);
    ui.lineEdit_matrix_y->setText(matrix_y);
    ui.lineEdit_matrix_z->setText(matrix_z);
    ui.lineEdit_matrix_rotation_x->setText(matrix_rotation_x);
    ui.lineEdit_matrix_rotation_y->setText(matrix_rotation_y);
    ui.lineEdit_matrix_rotation_z->setText(matrix_rotation_z);
    ui.lineEdit_matrix_rotation_w->setText(matrix_rotation_w);
    on_matrix_input_clicked();
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
    }
}

void MainWindow::WriteSettings()  //关闭时写入参数
{
    QSettings settings("Qt-Ros Package", "test_gui");
    settings.setValue("master_url",ui.line_edit_master->text());
    settings.setValue("host_url",ui.line_edit_host->text());
    settings.setValue("topic_name",ui.line_edit_topic->text());
    settings.setValue("matrix_x",ui.lineEdit_matrix_x->text());
    settings.setValue("matrix_y",ui.lineEdit_matrix_y->text());
    settings.setValue("matrix_z",ui.lineEdit_matrix_z->text());
    settings.setValue("matrix_rotation_x",ui.lineEdit_matrix_rotation_x->text());
    settings.setValue("matrix_rotation_y",ui.lineEdit_matrix_rotation_y->text());
    settings.setValue("matrix_rotation_z",ui.lineEdit_matrix_rotation_z->text());
    settings.setValue("matrix_rotation_w",ui.lineEdit_matrix_rotation_w->text());

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
          rosc->terminate();
          on_shutdown_roscore_clicked();
          qnode.robot_node->execute("rosnode kill /test_gui");
         // qnode.robot_node->execute("killall -9 bash");
          qnode.robot_simulation->terminate();
          qnode.robot_choice->terminate();
//          qnode.shutdown();
//          qtransform.shutdown();
//          qnode.terminate();
          //qnode.wait(); //close the thread
          //on_shutdown_roscore_clicked();
          delete qnode.robot_choice;
          delete qnode.robot_simulation;
          delete qnode.robot_node;
          delete rosc;
          event->accept();
      }

      else
          event->ignore();

    // WriteSettings();
    //QMainWindow::closeEvent(event);
}

}  // namespace test_gui







void test_gui::MainWindow::on_input_model_currentIndexChanged(int index)
{
    if(ui.input_model->currentIndex()==1)
    {
      ui.lineEdit_origin_x->setEnabled(false);
      ui.lineEdit_origin_y->setEnabled(false);
      ui.lineEdit_origin_z->setEnabled(false);
      ui.lineEdit_origin_rotation_x->setEnabled(false);
      ui.lineEdit_origin_rotation_y->setEnabled(false);
      ui.lineEdit_origin_rotation_z->setEnabled(false);
      ui.lineEdit_origin_rotation_w->setEnabled(false);


    }
}
