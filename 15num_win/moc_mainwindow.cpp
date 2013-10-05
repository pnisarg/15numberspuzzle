/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat 5. Oct 16:44:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../15numberPuzzle/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      58,   11,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
     102,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
     146,   11,   11,   11, 0x08,
     168,   11,   11,   11, 0x08,
     190,   11,   11,   11, 0x08,
     212,   11,   11,   11, 0x08,
     234,   11,   11,   11, 0x08,
     257,   11,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     326,   11,   11,   11, 0x08,
     349,   11,   11,   11, 0x08,
     372,   11,   11,   11, 0x08,
     395,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_clicked()\0"
    "on_button_1_clicked()\0on_button_2_clicked()\0"
    "on_button_3_clicked()\0on_button_4_clicked()\0"
    "on_button_5_clicked()\0on_button_6_clicked()\0"
    "on_button_7_clicked()\0on_button_8_clicked()\0"
    "on_button_9_clicked()\0on_button_10_clicked()\0"
    "on_button_11_clicked()\0on_button_12_clicked()\0"
    "on_button_13_clicked()\0on_button_14_clicked()\0"
    "on_button_15_clicked()\0on_button_16_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_button_1_clicked(); break;
        case 2: _t->on_button_2_clicked(); break;
        case 3: _t->on_button_3_clicked(); break;
        case 4: _t->on_button_4_clicked(); break;
        case 5: _t->on_button_5_clicked(); break;
        case 6: _t->on_button_6_clicked(); break;
        case 7: _t->on_button_7_clicked(); break;
        case 8: _t->on_button_8_clicked(); break;
        case 9: _t->on_button_9_clicked(); break;
        case 10: _t->on_button_10_clicked(); break;
        case 11: _t->on_button_11_clicked(); break;
        case 12: _t->on_button_12_clicked(); break;
        case 13: _t->on_button_13_clicked(); break;
        case 14: _t->on_button_14_clicked(); break;
        case 15: _t->on_button_15_clicked(); break;
        case 16: _t->on_button_16_clicked(); break;
        case 17: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
