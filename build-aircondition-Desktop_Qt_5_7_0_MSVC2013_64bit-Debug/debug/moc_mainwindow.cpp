/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aircondition/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "onModeClick"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "subMachineStart"
QT_MOC_LITERAL(4, 40, 6), // "roomid"
QT_MOC_LITERAL(5, 47, 14), // "subMachineStop"
QT_MOC_LITERAL(6, 62, 21), // "subMachineRequestWind"
QT_MOC_LITERAL(7, 84, 10), // "targettemp"
QT_MOC_LITERAL(8, 95, 9), // "windspeed"
QT_MOC_LITERAL(9, 105, 18), // "subMachineStopWind"
QT_MOC_LITERAL(10, 124, 14), // "updateRoomTemp"
QT_MOC_LITERAL(11, 139, 8), // "roomtemp"
QT_MOC_LITERAL(12, 148, 23), // "openCloseCentralMachine"
QT_MOC_LITERAL(13, 172, 15), // "increaseCenralT"
QT_MOC_LITERAL(14, 188, 15), // "decreaseCenralT"
QT_MOC_LITERAL(15, 204, 17), // "setMonitorVisible"
QT_MOC_LITERAL(16, 222, 16), // "setReportVisible"
QT_MOC_LITERAL(17, 239, 20) // "sendWindToSubMachine"

    },
    "MainWindow\0onModeClick\0\0subMachineStart\0"
    "roomid\0subMachineStop\0subMachineRequestWind\0"
    "targettemp\0windspeed\0subMachineStopWind\0"
    "updateRoomTemp\0roomtemp\0openCloseCentralMachine\0"
    "increaseCenralT\0decreaseCenralT\0"
    "setMonitorVisible\0setReportVisible\0"
    "sendWindToSubMachine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       6,    3,   81,    2, 0x0a /* Public */,
       9,    1,   88,    2, 0x0a /* Public */,
      10,    3,   91,    2, 0x0a /* Public */,
      12,    0,   98,    2, 0x0a /* Public */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    7,    8,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,   11,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModeClick(); break;
        case 1: _t->subMachineStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->subMachineStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->subMachineRequestWind((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->subMachineStopWind((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateRoomTemp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->openCloseCentralMachine(); break;
        case 7: _t->increaseCenralT(); break;
        case 8: _t->decreaseCenralT(); break;
        case 9: _t->setMonitorVisible(); break;
        case 10: _t->setReportVisible(); break;
        case 11: _t->sendWindToSubMachine(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
