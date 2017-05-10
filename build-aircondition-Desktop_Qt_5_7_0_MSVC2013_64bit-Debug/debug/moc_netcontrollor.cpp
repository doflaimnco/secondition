/****************************************************************************
** Meta object code from reading C++ file 'netcontrollor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aircondition/netcontrollor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netcontrollor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetControllor_t {
    QByteArrayData data[13];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetControllor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetControllor_t qt_meta_stringdata_NetControllor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetControllor"
QT_MOC_LITERAL(1, 14, 15), // "subMachineStart"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "roomid"
QT_MOC_LITERAL(4, 38, 14), // "subMachineStop"
QT_MOC_LITERAL(5, 53, 21), // "subMachineRequestWind"
QT_MOC_LITERAL(6, 75, 10), // "targettemp"
QT_MOC_LITERAL(7, 86, 9), // "windspeed"
QT_MOC_LITERAL(8, 96, 18), // "subMachineStopWind"
QT_MOC_LITERAL(9, 115, 14), // "updateRoomTemp"
QT_MOC_LITERAL(10, 130, 8), // "roomtemp"
QT_MOC_LITERAL(11, 139, 11), // "processData"
QT_MOC_LITERAL(12, 151, 20) // "processNewConnection"

    },
    "NetControllor\0subMachineStart\0\0roomid\0"
    "subMachineStop\0subMachineRequestWind\0"
    "targettemp\0windspeed\0subMachineStopWind\0"
    "updateRoomTemp\0roomtemp\0processData\0"
    "processNewConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetControllor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    3,   55,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,
       9,    3,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    6,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   10,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetControllor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetControllor *_t = static_cast<NetControllor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subMachineStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->subMachineStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->subMachineRequestWind((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->subMachineStopWind((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateRoomTemp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->processData(); break;
        case 6: _t->processNewConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NetControllor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetControllor::subMachineStart)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NetControllor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetControllor::subMachineStop)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NetControllor::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetControllor::subMachineRequestWind)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NetControllor::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetControllor::subMachineStopWind)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NetControllor::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetControllor::updateRoomTemp)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject NetControllor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetControllor.data,
      qt_meta_data_NetControllor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetControllor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetControllor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetControllor.stringdata0))
        return static_cast<void*>(const_cast< NetControllor*>(this));
    return QObject::qt_metacast(_clname);
}

int NetControllor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void NetControllor::subMachineStart(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetControllor::subMachineStop(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetControllor::subMachineRequestWind(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetControllor::subMachineStopWind(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NetControllor::updateRoomTemp(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
