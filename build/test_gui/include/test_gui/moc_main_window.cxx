/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/test_gui/include/test_gui/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_test_gui__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   22,   21,   21, 0x0a,
      66,   60,   21,   21, 0x0a,
     112,   21,   21,   21, 0x0a,
     145,   21,   21,   21, 0x0a,
     173,   21,   21,   21, 0x0a,
     200,   21,   21,   21, 0x0a,
     217,   21,   21,   21, 0x0a,
     232,   21,   21,   21, 0x0a,
     269,   21,   21,   21, 0x0a,
     295,   21,   21,   21, 0x0a,
     320,   21,   21,   21, 0x0a,
     350,   21,   21,   21, 0x0a,
     387,  381,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_test_gui__MainWindow[] = {
    "test_gui::MainWindow\0\0check\0"
    "on_button_connect_clicked(bool)\0state\0"
    "on_checkbox_use_environment_stateChanged(int)\0"
    "on_button_connect_stop_clicked()\0"
    "on_button_roscore_clicked()\0"
    "on_confirm_input_clicked()\0updateposition()\0"
    "updatetarget()\0on_button_begin_simulation_clicked()\0"
    "on_matrix_input_clicked()\0"
    "on_matrix_edit_clicked()\0"
    "on_calibration_stop_clicked()\0"
    "on_calibration_start_clicked()\0index\0"
    "on_input_model_currentIndexChanged(int)\0"
};

void test_gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_button_connect_stop_clicked(); break;
        case 3: _t->on_button_roscore_clicked(); break;
        case 4: _t->on_confirm_input_clicked(); break;
        case 5: _t->updateposition(); break;
        case 6: _t->updatetarget(); break;
        case 7: _t->on_button_begin_simulation_clicked(); break;
        case 8: _t->on_matrix_input_clicked(); break;
        case 9: _t->on_matrix_edit_clicked(); break;
        case 10: _t->on_calibration_stop_clicked(); break;
        case 11: _t->on_calibration_start_clicked(); break;
        case 12: _t->on_input_model_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData test_gui::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject test_gui::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_test_gui__MainWindow,
      qt_meta_data_test_gui__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &test_gui::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *test_gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *test_gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_test_gui__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int test_gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
