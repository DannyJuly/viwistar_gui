/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QTabWidget *tab_manager;
    QWidget *Ros_config;
    QGridLayout *gridLayout_8;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *line_edit_master;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *line_edit_topic;
    QCheckBox *checkbox_remember_settings;
    QLineEdit *line_edit_host;
    QPushButton *button_roscore;
    QCheckBox *checkbox_use_environment;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *robot_arm_choice;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *model_choice;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout;
    QPushButton *button_connect;
    QPushButton *button_connect_stop;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QWidget *Ros_calibration;
    QGridLayout *gridLayout_11;
    QLabel *label_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_9;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *lineEdit_matrix_z;
    QLabel *label_33;
    QLabel *label_34;
    QLineEdit *lineEdit_matrix_rotation_x;
    QLineEdit *lineEdit_matrix_rotation_y;
    QLabel *label_37;
    QLabel *label_39;
    QLineEdit *lineEdit_matrix_rotation_w;
    QLineEdit *lineEdit_matrix_rotation_z;
    QLineEdit *lineEdit_matrix_x;
    QLineEdit *lineEdit_matrix_y;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *matrix_input;
    QPushButton *matrix_edit;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *calibration_stop;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_10;
    QLabel *label_realtime_target_x;
    QLabel *label_realtime_rotation_target_x;
    QLabel *label_realtime_target_y;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_realtime_rotation_target_y;
    QLabel *label_realtime_rotation_target_z;
    QLabel *label_46;
    QLabel *label_realtime_target_z;
    QLabel *label_47;
    QLabel *label_realtime_rotation_target_w;
    QLabel *label_48;
    QLabel *label_realtime_target_width;
    QPushButton *calibration_start;
    QWidget *Ros_control;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_24;
    QLabel *label_12;
    QLineEdit *lineEdit_origin_z;
    QLabel *label_23;
    QLabel *label_11;
    QLineEdit *lineEdit_origin_rotation_x;
    QLineEdit *lineEdit_origin_rotation_y;
    QLabel *label_13;
    QLabel *label_35;
    QLineEdit *lineEdit_origin_rotation_w;
    QLineEdit *lineEdit_origin_rotation_z;
    QLineEdit *lineEdit_origin_x;
    QLineEdit *lineEdit_origin_y;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *input_model;
    QLabel *label_20;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEdit_target_z;
    QLabel *label_15;
    QLineEdit *lineEdit_target_rotation_x;
    QLineEdit *lineEdit_target_rotation_y;
    QLineEdit *lineEdit_target_x;
    QLineEdit *lineEdit_target_y;
    QLabel *label_27;
    QLabel *label_26;
    QLabel *label_25;
    QLabel *label_14;
    QLineEdit *lineEdit_target_rotation_z;
    QLabel *label_16;
    QLabel *label_36;
    QLineEdit *lineEdit_target_rotation_w;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *confirm_input;
    QLabel *label_21;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_realtime_rotation_z;
    QLabel *label_realtime_z;
    QLabel *label_17;
    QLabel *label_28;
    QLabel *label_38;
    QLabel *label_19;
    QLabel *label_29;
    QLabel *label_realtime_x;
    QLabel *label_realtime_rotation_y;
    QLabel *label_18;
    QLabel *label_realtime_rotation_w;
    QLabel *label_30;
    QLabel *label_realtime_rotation_x;
    QLabel *label_realtime_y;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *button_begin_simulation;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(328, 606);
        MainWindowDesign->setMinimumSize(QSize(328, 606));
        MainWindowDesign->setMaximumSize(QSize(328, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/viwistar_log.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        Ros_config = new QWidget();
        Ros_config->setObjectName(QString::fromUtf8("Ros_config"));
        gridLayout_8 = new QGridLayout(Ros_config);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_8 = new QLabel(Ros_config);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_8->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(193, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        groupBox = new QGroupBox(Ros_config);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:gray;\n"
"margin-top:0.5ex;\n"
"}"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QString::fromUtf8("line_edit_master"));

        gridLayout_2->addWidget(line_edit_master, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(170, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 8, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QString::fromUtf8("line_edit_topic"));
        line_edit_topic->setEnabled(true);

        gridLayout_2->addWidget(line_edit_topic, 5, 0, 1, 2);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QString::fromUtf8("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkbox_remember_settings, 7, 0, 1, 2);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QString::fromUtf8("line_edit_host"));

        gridLayout_2->addWidget(line_edit_host, 3, 0, 1, 2);

        button_roscore = new QPushButton(groupBox);
        button_roscore->setObjectName(QString::fromUtf8("button_roscore"));
        button_roscore->setMinimumSize(QSize(0, 25));
        button_roscore->setMaximumSize(QSize(16777215, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_roscore->setIcon(icon1);

        gridLayout_2->addWidget(button_roscore, 8, 1, 1, 1);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QString::fromUtf8("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkbox_use_environment, 6, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);


        gridLayout_8->addWidget(groupBox, 1, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(Ros_config);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        gridLayout_8->addLayout(horizontalLayout_8, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(Ros_config);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:gray;\n"
"margin-top:0.5ex;\n"
"}"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(25);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_6);

        robot_arm_choice = new QComboBox(groupBox_2);
        robot_arm_choice->setObjectName(QString::fromUtf8("robot_arm_choice"));
        robot_arm_choice->setMinimumSize(QSize(120, 0));
        robot_arm_choice->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(robot_arm_choice);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(25);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));
        label_7->setFrameShape(QFrame::StyledPanel);
        label_7->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_7);

        model_choice = new QComboBox(groupBox_2);
        model_choice->setObjectName(QString::fromUtf8("model_choice"));
        model_choice->setMinimumSize(QSize(120, 0));
        model_choice->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(model_choice);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        button_connect = new QPushButton(groupBox_2);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));
        button_connect->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy);
        button_connect->setMinimumSize(QSize(0, 25));
        button_connect->setMaximumSize(QSize(120, 25));
        button_connect->setCheckable(false);
        button_connect->setChecked(false);

        verticalLayout->addWidget(button_connect);

        button_connect_stop = new QPushButton(groupBox_2);
        button_connect_stop->setObjectName(QString::fromUtf8("button_connect_stop"));
        button_connect_stop->setEnabled(false);
        button_connect_stop->setMinimumSize(QSize(0, 25));
        button_connect_stop->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(button_connect_stop);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_4->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(2, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 2, 2, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 3, 0, 1, 2);

        tab_manager->addTab(Ros_config, QString());
        Ros_calibration = new QWidget();
        Ros_calibration->setObjectName(QString::fromUtf8("Ros_calibration"));
        gridLayout_11 = new QGridLayout(Ros_calibration);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_4 = new QLabel(Ros_calibration);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_11->addWidget(label_4, 0, 0, 1, 2);

        groupBox_6 = new QGroupBox(Ros_calibration);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:gray;\n"
"margin-top:0.5ex;\n"
"}"));
        gridLayout_9 = new QGridLayout(groupBox_6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_31 = new QLabel(groupBox_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_9->addWidget(label_31, 1, 2, 1, 1);

        label_32 = new QLabel(groupBox_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_9->addWidget(label_32, 1, 0, 1, 1);

        lineEdit_matrix_z = new QLineEdit(groupBox_6);
        lineEdit_matrix_z->setObjectName(QString::fromUtf8("lineEdit_matrix_z"));
        lineEdit_matrix_z->setEnabled(false);

        gridLayout_9->addWidget(lineEdit_matrix_z, 2, 1, 1, 1);

        label_33 = new QLabel(groupBox_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_9->addWidget(label_33, 0, 2, 1, 1);

        label_34 = new QLabel(groupBox_6);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_9->addWidget(label_34, 0, 0, 1, 1);

        lineEdit_matrix_rotation_x = new QLineEdit(groupBox_6);
        lineEdit_matrix_rotation_x->setObjectName(QString::fromUtf8("lineEdit_matrix_rotation_x"));
        lineEdit_matrix_rotation_x->setEnabled(false);

        gridLayout_9->addWidget(lineEdit_matrix_rotation_x, 0, 3, 1, 1);

        lineEdit_matrix_rotation_y = new QLineEdit(groupBox_6);
        lineEdit_matrix_rotation_y->setObjectName(QString::fromUtf8("lineEdit_matrix_rotation_y"));
        lineEdit_matrix_rotation_y->setEnabled(false);

        gridLayout_9->addWidget(lineEdit_matrix_rotation_y, 1, 3, 1, 1);

        label_37 = new QLabel(groupBox_6);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_9->addWidget(label_37, 2, 0, 1, 1);

        label_39 = new QLabel(groupBox_6);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_9->addWidget(label_39, 3, 2, 1, 1);

        lineEdit_matrix_rotation_w = new QLineEdit(groupBox_6);
        lineEdit_matrix_rotation_w->setObjectName(QString::fromUtf8("lineEdit_matrix_rotation_w"));
        lineEdit_matrix_rotation_w->setEnabled(false);

        gridLayout_9->addWidget(lineEdit_matrix_rotation_w, 3, 3, 1, 1);

        lineEdit_matrix_rotation_z = new QLineEdit(groupBox_6);
        lineEdit_matrix_rotation_z->setObjectName(QString::fromUtf8("lineEdit_matrix_rotation_z"));
        lineEdit_matrix_rotation_z->setEnabled(false);

        gridLayout_9->addWidget(lineEdit_matrix_rotation_z, 2, 3, 1, 1);

        lineEdit_matrix_x = new QLineEdit(groupBox_6);
        lineEdit_matrix_x->setObjectName(QString::fromUtf8("lineEdit_matrix_x"));
        lineEdit_matrix_x->setEnabled(false);

        gridLayout_9->addWidget(lineEdit_matrix_x, 0, 1, 1, 1);

        lineEdit_matrix_y = new QLineEdit(groupBox_6);
        lineEdit_matrix_y->setObjectName(QString::fromUtf8("lineEdit_matrix_y"));
        lineEdit_matrix_y->setEnabled(false);

        gridLayout_9->addWidget(lineEdit_matrix_y, 1, 1, 1, 1);

        label_40 = new QLabel(groupBox_6);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_9->addWidget(label_40, 2, 2, 1, 1);


        gridLayout_11->addWidget(groupBox_6, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        matrix_input = new QPushButton(Ros_calibration);
        matrix_input->setObjectName(QString::fromUtf8("matrix_input"));
        matrix_input->setEnabled(false);

        horizontalLayout->addWidget(matrix_input);

        matrix_edit = new QPushButton(Ros_calibration);
        matrix_edit->setObjectName(QString::fromUtf8("matrix_edit"));

        horizontalLayout->addWidget(matrix_edit);


        gridLayout_11->addLayout(horizontalLayout, 2, 1, 1, 2);

        label_5 = new QLabel(Ros_calibration);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_11->addWidget(label_5, 3, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_3, 5, 0, 1, 1);

        calibration_stop = new QPushButton(Ros_calibration);
        calibration_stop->setObjectName(QString::fromUtf8("calibration_stop"));
        calibration_stop->setMaximumSize(QSize(80, 26));

        gridLayout_11->addWidget(calibration_stop, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 343, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_2, 6, 2, 1, 1);

        groupBox_7 = new QGroupBox(Ros_calibration);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:gray;\n"
"margin-top:0.5ex;\n"
"}"));
        gridLayout_10 = new QGridLayout(groupBox_7);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_realtime_target_x = new QLabel(groupBox_7);
        label_realtime_target_x->setObjectName(QString::fromUtf8("label_realtime_target_x"));
        label_realtime_target_x->setFrameShape(QFrame::StyledPanel);
        label_realtime_target_x->setFrameShadow(QFrame::Raised);

        gridLayout_10->addWidget(label_realtime_target_x, 0, 1, 1, 1);

        label_realtime_rotation_target_x = new QLabel(groupBox_7);
        label_realtime_rotation_target_x->setObjectName(QString::fromUtf8("label_realtime_rotation_target_x"));
        label_realtime_rotation_target_x->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_target_x->setFrameShadow(QFrame::Raised);

        gridLayout_10->addWidget(label_realtime_rotation_target_x, 0, 4, 1, 1);

        label_realtime_target_y = new QLabel(groupBox_7);
        label_realtime_target_y->setObjectName(QString::fromUtf8("label_realtime_target_y"));
        label_realtime_target_y->setFrameShape(QFrame::StyledPanel);
        label_realtime_target_y->setFrameShadow(QFrame::Raised);

        gridLayout_10->addWidget(label_realtime_target_y, 1, 1, 1, 1);

        label_41 = new QLabel(groupBox_7);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMinimumSize(QSize(45, 22));
        label_41->setMaximumSize(QSize(45, 16777215));

        gridLayout_10->addWidget(label_41, 0, 0, 1, 1);

        label_42 = new QLabel(groupBox_7);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMinimumSize(QSize(45, 22));
        label_42->setMaximumSize(QSize(37, 16777215));

        gridLayout_10->addWidget(label_42, 2, 0, 1, 1);

        label_43 = new QLabel(groupBox_7);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMinimumSize(QSize(46, 22));
        label_43->setMaximumSize(QSize(45, 16777215));

        gridLayout_10->addWidget(label_43, 2, 3, 1, 1);

        label_44 = new QLabel(groupBox_7);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setMinimumSize(QSize(45, 22));
        label_44->setMaximumSize(QSize(37, 16777215));

        gridLayout_10->addWidget(label_44, 1, 0, 1, 1);

        label_45 = new QLabel(groupBox_7);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setMinimumSize(QSize(46, 22));
        label_45->setMaximumSize(QSize(45, 16777215));

        gridLayout_10->addWidget(label_45, 0, 3, 1, 1);

        label_realtime_rotation_target_y = new QLabel(groupBox_7);
        label_realtime_rotation_target_y->setObjectName(QString::fromUtf8("label_realtime_rotation_target_y"));
        label_realtime_rotation_target_y->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_target_y->setFrameShadow(QFrame::Raised);

        gridLayout_10->addWidget(label_realtime_rotation_target_y, 1, 4, 1, 1);

        label_realtime_rotation_target_z = new QLabel(groupBox_7);
        label_realtime_rotation_target_z->setObjectName(QString::fromUtf8("label_realtime_rotation_target_z"));
        label_realtime_rotation_target_z->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_target_z->setFrameShadow(QFrame::Raised);

        gridLayout_10->addWidget(label_realtime_rotation_target_z, 2, 4, 1, 1);

        label_46 = new QLabel(groupBox_7);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setMinimumSize(QSize(46, 22));
        label_46->setMaximumSize(QSize(45, 16777215));

        gridLayout_10->addWidget(label_46, 1, 3, 1, 1);

        label_realtime_target_z = new QLabel(groupBox_7);
        label_realtime_target_z->setObjectName(QString::fromUtf8("label_realtime_target_z"));
        label_realtime_target_z->setFrameShape(QFrame::StyledPanel);

        gridLayout_10->addWidget(label_realtime_target_z, 2, 1, 1, 1);

        label_47 = new QLabel(groupBox_7);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setMinimumSize(QSize(46, 22));
        label_47->setMaximumSize(QSize(45, 16777215));

        gridLayout_10->addWidget(label_47, 3, 3, 1, 1);

        label_realtime_rotation_target_w = new QLabel(groupBox_7);
        label_realtime_rotation_target_w->setObjectName(QString::fromUtf8("label_realtime_rotation_target_w"));
        label_realtime_rotation_target_w->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_target_w->setFrameShadow(QFrame::Raised);

        gridLayout_10->addWidget(label_realtime_rotation_target_w, 3, 4, 1, 1);

        label_48 = new QLabel(groupBox_7);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_10->addWidget(label_48, 3, 0, 1, 1);

        label_realtime_target_width = new QLabel(groupBox_7);
        label_realtime_target_width->setObjectName(QString::fromUtf8("label_realtime_target_width"));
        label_realtime_target_width->setFrameShape(QFrame::StyledPanel);

        gridLayout_10->addWidget(label_realtime_target_width, 3, 1, 1, 1);


        gridLayout_11->addWidget(groupBox_7, 4, 0, 1, 3);

        calibration_start = new QPushButton(Ros_calibration);
        calibration_start->setObjectName(QString::fromUtf8("calibration_start"));

        gridLayout_11->addWidget(calibration_start, 5, 1, 1, 1);

        tab_manager->addTab(Ros_calibration, QString());
        Ros_control = new QWidget();
        Ros_control->setObjectName(QString::fromUtf8("Ros_control"));
        gridLayout = new QGridLayout(Ros_control);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(Ros_control);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(Ros_control);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:gray;\n"
"margin-top:0.5ex;\n"
"}"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_3->addWidget(label_24, 1, 2, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        lineEdit_origin_z = new QLineEdit(groupBox_3);
        lineEdit_origin_z->setObjectName(QString::fromUtf8("lineEdit_origin_z"));

        gridLayout_3->addWidget(lineEdit_origin_z, 2, 1, 1, 1);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 0, 2, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        lineEdit_origin_rotation_x = new QLineEdit(groupBox_3);
        lineEdit_origin_rotation_x->setObjectName(QString::fromUtf8("lineEdit_origin_rotation_x"));

        gridLayout_3->addWidget(lineEdit_origin_rotation_x, 0, 3, 1, 1);

        lineEdit_origin_rotation_y = new QLineEdit(groupBox_3);
        lineEdit_origin_rotation_y->setObjectName(QString::fromUtf8("lineEdit_origin_rotation_y"));

        gridLayout_3->addWidget(lineEdit_origin_rotation_y, 1, 3, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_3->addWidget(label_35, 3, 2, 1, 1);

        lineEdit_origin_rotation_w = new QLineEdit(groupBox_3);
        lineEdit_origin_rotation_w->setObjectName(QString::fromUtf8("lineEdit_origin_rotation_w"));

        gridLayout_3->addWidget(lineEdit_origin_rotation_w, 3, 3, 1, 1);

        lineEdit_origin_rotation_z = new QLineEdit(groupBox_3);
        lineEdit_origin_rotation_z->setObjectName(QString::fromUtf8("lineEdit_origin_rotation_z"));

        gridLayout_3->addWidget(lineEdit_origin_rotation_z, 2, 3, 1, 1);

        lineEdit_origin_x = new QLineEdit(groupBox_3);
        lineEdit_origin_x->setObjectName(QString::fromUtf8("lineEdit_origin_x"));

        gridLayout_3->addWidget(lineEdit_origin_x, 0, 1, 1, 1);

        lineEdit_origin_y = new QLineEdit(groupBox_3);
        lineEdit_origin_y->setObjectName(QString::fromUtf8("lineEdit_origin_y"));

        gridLayout_3->addWidget(lineEdit_origin_y, 1, 1, 1, 1);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 2, 2, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        input_model = new QComboBox(Ros_control);
        input_model->setObjectName(QString::fromUtf8("input_model"));

        gridLayout->addWidget(input_model, 2, 2, 1, 1);

        label_20 = new QLabel(Ros_control);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 3, 0, 1, 1);

        groupBox_4 = new QGroupBox(Ros_control);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:gray;\n"
"margin-top:0.5ex;\n"
"}"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lineEdit_target_z = new QLineEdit(groupBox_4);
        lineEdit_target_z->setObjectName(QString::fromUtf8("lineEdit_target_z"));

        gridLayout_7->addWidget(lineEdit_target_z, 2, 1, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_7->addWidget(label_15, 1, 0, 1, 1);

        lineEdit_target_rotation_x = new QLineEdit(groupBox_4);
        lineEdit_target_rotation_x->setObjectName(QString::fromUtf8("lineEdit_target_rotation_x"));

        gridLayout_7->addWidget(lineEdit_target_rotation_x, 0, 3, 1, 1);

        lineEdit_target_rotation_y = new QLineEdit(groupBox_4);
        lineEdit_target_rotation_y->setObjectName(QString::fromUtf8("lineEdit_target_rotation_y"));

        gridLayout_7->addWidget(lineEdit_target_rotation_y, 1, 3, 1, 1);

        lineEdit_target_x = new QLineEdit(groupBox_4);
        lineEdit_target_x->setObjectName(QString::fromUtf8("lineEdit_target_x"));

        gridLayout_7->addWidget(lineEdit_target_x, 0, 1, 1, 1);

        lineEdit_target_y = new QLineEdit(groupBox_4);
        lineEdit_target_y->setObjectName(QString::fromUtf8("lineEdit_target_y"));

        gridLayout_7->addWidget(lineEdit_target_y, 1, 1, 1, 1);

        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_7->addWidget(label_27, 2, 2, 1, 1);

        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_7->addWidget(label_26, 1, 2, 1, 1);

        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_7->addWidget(label_25, 0, 2, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_7->addWidget(label_14, 0, 0, 1, 1);

        lineEdit_target_rotation_z = new QLineEdit(groupBox_4);
        lineEdit_target_rotation_z->setObjectName(QString::fromUtf8("lineEdit_target_rotation_z"));

        gridLayout_7->addWidget(lineEdit_target_rotation_z, 2, 3, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_7->addWidget(label_16, 2, 0, 1, 1);

        label_36 = new QLabel(groupBox_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_7->addWidget(label_36, 3, 2, 1, 1);

        lineEdit_target_rotation_w = new QLineEdit(groupBox_4);
        lineEdit_target_rotation_w->setObjectName(QString::fromUtf8("lineEdit_target_rotation_w"));

        gridLayout_7->addWidget(lineEdit_target_rotation_w, 3, 3, 1, 1);


        gridLayout->addWidget(groupBox_4, 4, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 5, 1, 1, 1);

        confirm_input = new QPushButton(Ros_control);
        confirm_input->setObjectName(QString::fromUtf8("confirm_input"));

        gridLayout->addWidget(confirm_input, 5, 2, 1, 1);

        label_21 = new QLabel(Ros_control);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 6, 0, 1, 1);

        groupBox_5 = new QGroupBox(Ros_control);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-color:gray;\n"
"margin-top:0.5ex;\n"
"}"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_realtime_rotation_z = new QLabel(groupBox_5);
        label_realtime_rotation_z->setObjectName(QString::fromUtf8("label_realtime_rotation_z"));
        label_realtime_rotation_z->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_z->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(label_realtime_rotation_z, 2, 4, 1, 1);

        label_realtime_z = new QLabel(groupBox_5);
        label_realtime_z->setObjectName(QString::fromUtf8("label_realtime_z"));
        label_realtime_z->setFrameShape(QFrame::StyledPanel);

        gridLayout_6->addWidget(label_realtime_z, 2, 1, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(45, 22));
        label_17->setMaximumSize(QSize(45, 16777215));

        gridLayout_6->addWidget(label_17, 0, 0, 1, 1);

        label_28 = new QLabel(groupBox_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(46, 22));
        label_28->setMaximumSize(QSize(45, 16777215));

        gridLayout_6->addWidget(label_28, 0, 3, 1, 1);

        label_38 = new QLabel(groupBox_5);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(46, 22));
        label_38->setMaximumSize(QSize(45, 16777215));

        gridLayout_6->addWidget(label_38, 3, 3, 1, 1);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(45, 22));
        label_19->setMaximumSize(QSize(37, 16777215));

        gridLayout_6->addWidget(label_19, 2, 0, 1, 1);

        label_29 = new QLabel(groupBox_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(46, 22));
        label_29->setMaximumSize(QSize(45, 16777215));

        gridLayout_6->addWidget(label_29, 1, 3, 1, 1);

        label_realtime_x = new QLabel(groupBox_5);
        label_realtime_x->setObjectName(QString::fromUtf8("label_realtime_x"));
        label_realtime_x->setFrameShape(QFrame::StyledPanel);
        label_realtime_x->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(label_realtime_x, 0, 1, 1, 1);

        label_realtime_rotation_y = new QLabel(groupBox_5);
        label_realtime_rotation_y->setObjectName(QString::fromUtf8("label_realtime_rotation_y"));
        label_realtime_rotation_y->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_y->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(label_realtime_rotation_y, 1, 4, 1, 1);

        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(45, 22));
        label_18->setMaximumSize(QSize(37, 16777215));

        gridLayout_6->addWidget(label_18, 1, 0, 1, 1);

        label_realtime_rotation_w = new QLabel(groupBox_5);
        label_realtime_rotation_w->setObjectName(QString::fromUtf8("label_realtime_rotation_w"));
        label_realtime_rotation_w->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_w->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(label_realtime_rotation_w, 3, 4, 1, 1);

        label_30 = new QLabel(groupBox_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(46, 22));
        label_30->setMaximumSize(QSize(45, 16777215));

        gridLayout_6->addWidget(label_30, 2, 3, 1, 1);

        label_realtime_rotation_x = new QLabel(groupBox_5);
        label_realtime_rotation_x->setObjectName(QString::fromUtf8("label_realtime_rotation_x"));
        label_realtime_rotation_x->setFrameShape(QFrame::StyledPanel);
        label_realtime_rotation_x->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(label_realtime_rotation_x, 0, 4, 1, 1);

        label_realtime_y = new QLabel(groupBox_5);
        label_realtime_y->setObjectName(QString::fromUtf8("label_realtime_y"));
        label_realtime_y->setFrameShape(QFrame::StyledPanel);
        label_realtime_y->setFrameShadow(QFrame::Raised);

        gridLayout_6->addWidget(label_realtime_y, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_5, 7, 0, 1, 3);

        horizontalSpacer_7 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 8, 1, 1, 1);

        button_begin_simulation = new QPushButton(Ros_control);
        button_begin_simulation->setObjectName(QString::fromUtf8("button_begin_simulation"));
        button_begin_simulation->setEnabled(false);

        gridLayout->addWidget(button_begin_simulation, 8, 2, 1, 1);

        tab_manager->addTab(Ros_control, QString());
        label_10->raise();
        groupBox_3->raise();
        label_21->raise();
        confirm_input->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        button_begin_simulation->raise();
        label_20->raise();
        input_model->raise();

        gridLayout_5->addWidget(tab_manager, 0, 0, 1, 1);

        MainWindowDesign->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEdit_matrix_x, lineEdit_matrix_y);
        QWidget::setTabOrder(lineEdit_matrix_y, lineEdit_matrix_z);
        QWidget::setTabOrder(lineEdit_matrix_z, lineEdit_matrix_rotation_x);
        QWidget::setTabOrder(lineEdit_matrix_rotation_x, lineEdit_matrix_rotation_y);
        QWidget::setTabOrder(lineEdit_matrix_rotation_y, lineEdit_matrix_rotation_z);
        QWidget::setTabOrder(lineEdit_matrix_rotation_z, lineEdit_matrix_rotation_w);
        QWidget::setTabOrder(lineEdit_matrix_rotation_w, matrix_input);
        QWidget::setTabOrder(matrix_input, matrix_edit);
        QWidget::setTabOrder(matrix_edit, line_edit_master);
        QWidget::setTabOrder(line_edit_master, line_edit_host);
        QWidget::setTabOrder(line_edit_host, line_edit_topic);
        QWidget::setTabOrder(line_edit_topic, checkbox_use_environment);
        QWidget::setTabOrder(checkbox_use_environment, checkbox_remember_settings);
        QWidget::setTabOrder(checkbox_remember_settings, button_roscore);
        QWidget::setTabOrder(button_roscore, robot_arm_choice);
        QWidget::setTabOrder(robot_arm_choice, model_choice);
        QWidget::setTabOrder(model_choice, button_connect);
        QWidget::setTabOrder(button_connect, button_connect_stop);
        QWidget::setTabOrder(button_connect_stop, lineEdit_origin_x);
        QWidget::setTabOrder(lineEdit_origin_x, lineEdit_origin_y);
        QWidget::setTabOrder(lineEdit_origin_y, lineEdit_origin_z);
        QWidget::setTabOrder(lineEdit_origin_z, lineEdit_origin_rotation_x);
        QWidget::setTabOrder(lineEdit_origin_rotation_x, lineEdit_origin_rotation_y);
        QWidget::setTabOrder(lineEdit_origin_rotation_y, lineEdit_origin_rotation_z);
        QWidget::setTabOrder(lineEdit_origin_rotation_z, lineEdit_origin_rotation_w);
        QWidget::setTabOrder(lineEdit_origin_rotation_w, lineEdit_target_x);
        QWidget::setTabOrder(lineEdit_target_x, lineEdit_target_y);
        QWidget::setTabOrder(lineEdit_target_y, lineEdit_target_z);
        QWidget::setTabOrder(lineEdit_target_z, lineEdit_target_rotation_x);
        QWidget::setTabOrder(lineEdit_target_rotation_x, lineEdit_target_rotation_y);
        QWidget::setTabOrder(lineEdit_target_rotation_y, lineEdit_target_rotation_z);
        QWidget::setTabOrder(lineEdit_target_rotation_z, lineEdit_target_rotation_w);
        QWidget::setTabOrder(lineEdit_target_rotation_w, confirm_input);
        QWidget::setTabOrder(confirm_input, button_begin_simulation);
        QWidget::setTabOrder(button_begin_simulation, tab_manager);

        retranslateUi(MainWindowDesign);

        tab_manager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "VIWISTAR", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowDesign", "ROS\344\270\273\350\212\202\347\202\271\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowDesign", "Ros\344\270\273\350\212\202\347\202\271Url", 0, QApplication::UnicodeUTF8));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "VIWISTAR", 0, QApplication::UnicodeUTF8));
        line_edit_topic->setPlaceholderText(QApplication::translate("MainWindowDesign", "\345\241\253\345\206\231\346\202\250\347\232\204\344\270\273\346\234\272\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "\345\220\257\345\212\250\346\227\266\344\277\235\345\255\230\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", 0, QApplication::UnicodeUTF8));
        button_roscore->setText(QApplication::translate("MainWindowDesign", "\350\277\220\350\241\214\344\270\273\350\212\202\347\202\271", 0, QApplication::UnicodeUTF8));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "\344\275\277\347\224\250\351\273\230\350\256\244\347\216\257\345\242\203\345\217\230\351\207\217", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros\344\270\273\346\234\272\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowDesign", "\346\234\272\346\242\260\350\207\202\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindowDesign", "\346\234\272\346\242\260\350\207\202\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        robot_arm_choice->clear();
        robot_arm_choice->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "UR5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "Panda", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "Fanuc_m16ib", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("MainWindowDesign", "\346\250\241\345\274\217\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        model_choice->clear();
        model_choice->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "\344\273\277\347\234\237\346\250\241\346\213\237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "\345\256\236\346\227\266\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\247\213\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        button_connect_stop->setText(QApplication::translate("MainWindowDesign", "\347\273\223\346\235\237\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(Ros_config), QApplication::translate("MainWindowDesign", "ROS\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowDesign", "\346\240\207\345\256\232\345\235\220\346\240\207(\344\273\216\346\234\272\345\231\250\344\272\272\345\210\260\347\233\270\346\234\272\357\274\211", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QString());
        label_31->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Y", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Y", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 X", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 X", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Z", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 W", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Z", 0, QApplication::UnicodeUTF8));
        matrix_input->setText(QApplication::translate("MainWindowDesign", "\347\241\256\350\256\244\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        matrix_edit->setText(QApplication::translate("MainWindowDesign", "\344\277\256\346\224\271\346\240\207\345\256\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowDesign", "\346\212\223\345\217\226\347\202\271\344\275\215\347\275\256\357\274\210\347\233\270\345\257\271\344\272\216\346\234\272\345\231\250\344\272\272\357\274\211", 0, QApplication::UnicodeUTF8));
        calibration_stop->setText(QApplication::translate("MainWindowDesign", "\345\201\234\346\255\242\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QString());
        label_realtime_target_x->setText(QString());
        label_realtime_rotation_target_x->setText(QString());
        label_realtime_target_y->setText(QString());
        label_41->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 X", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Z", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Z", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Y", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 X", 0, QApplication::UnicodeUTF8));
        label_realtime_rotation_target_y->setText(QString());
        label_realtime_rotation_target_z->setText(QString());
        label_46->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Y", 0, QApplication::UnicodeUTF8));
        label_realtime_target_z->setText(QString());
        label_47->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 W", 0, QApplication::UnicodeUTF8));
        label_realtime_rotation_target_w->setText(QString());
        label_48->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\220\210 W", 0, QApplication::UnicodeUTF8));
        label_realtime_target_width->setText(QString());
        calibration_start->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\247\213\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(Ros_calibration), QApplication::translate("MainWindowDesign", "ROS\346\240\207\345\256\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindowDesign", "\346\212\223\345\217\226\347\202\271\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        label_24->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Y", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Y", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 X", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 X", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Z", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 W", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Z", 0, QApplication::UnicodeUTF8));
        input_model->clear();
        input_model->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "\346\211\213\345\212\250\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "\346\235\245\350\207\252\347\233\270\346\234\272", 0, QApplication::UnicodeUTF8)
        );
        label_20->setText(QApplication::translate("MainWindowDesign", "\347\233\256\346\240\207\347\202\271\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QString());
        label_15->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Y", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Z", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Y", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 X", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 X", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Z", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 W", 0, QApplication::UnicodeUTF8));
        confirm_input->setText(QApplication::translate("MainWindowDesign", "\347\241\256\350\256\244\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindowDesign", "\345\256\236\346\227\266\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QString());
        label_realtime_rotation_z->setText(QString());
        label_realtime_z->setText(QString());
        label_17->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 X", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 X", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 W", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Z", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Y", 0, QApplication::UnicodeUTF8));
        label_realtime_x->setText(QString());
        label_realtime_rotation_y->setText(QString());
        label_18->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207 Y", 0, QApplication::UnicodeUTF8));
        label_realtime_rotation_w->setText(QString());
        label_30->setText(QApplication::translate("MainWindowDesign", "\346\227\213\350\275\254 Z", 0, QApplication::UnicodeUTF8));
        label_realtime_rotation_x->setText(QString());
        label_realtime_y->setText(QString());
        button_begin_simulation->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\247\213\346\250\241\346\213\237", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(Ros_control), QApplication::translate("MainWindowDesign", "ROS\344\273\277\347\234\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
