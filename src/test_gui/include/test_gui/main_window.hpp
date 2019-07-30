/**
 * @file /include/test_gui/main_window.hpp
 *
 * @brief Qt based gui for test_gui.
 *
 * @date February 2018
 **/

#ifndef test_gui_MAIN_WINDOW_H
#define test_gui_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/
#include <QtGui/QMainWindow>
#include "ui_main_window.h" //该文件不显示，直接用于ui界面
#include "qnode.hpp"
#include "transform.hpp"
#include <unistd.h>
/*****************************************************************************
** Namespace
*****************************************************************************/
namespace test_gui
{

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT //使有信号槽功能
public:
    MainWindow(int argc, char** argv, QWidget *parent = 0);
    ~MainWindow();

    void ReadSettings(); // Load up qt program settings at startup
    void WriteSettings(); // Save qt program settings when closing
    void closeEvent(QCloseEvent *event); // Overloaded function
    void showNoMasterMessage();
    void matrix_change(bool check);
    void on_shutdown_roscore_clicked();

public Q_SLOTS://Q_SLOTS 避免和第三方库冲突
    /******************************************
        ** Auto-connections (connectSlotsByName())
        *******************************************/
    void on_button_connect_clicked(bool check );
    void on_checkbox_use_environment_stateChanged(int state);
    /******************************************
    ** Manual connections
    *******************************************/
    //void updateLoggingView(); // no idea why this can't connect automatically
    //void updateLogListen();
    void on_button_connect_stop_clicked();
    void on_button_roscore_clicked();
    void on_confirm_input_clicked();
    void updateposition();
    void updatetarget();
    void on_button_begin_simulation_clicked();
    void on_matrix_input_clicked();
    void on_matrix_edit_clicked();
    void on_calibration_stop_clicked();
    void on_calibration_start_clicked();
    void on_input_model_currentIndexChanged(int index);

private:
    Ui::MainWindowDesign ui;
    QNode qnode;
    Transform qtransform;
    QProcess *rosc;
    QProcess *rosrun;
};

}  // namespace test_gui

#endif // test_gui_MAIN_WINDOW_H
