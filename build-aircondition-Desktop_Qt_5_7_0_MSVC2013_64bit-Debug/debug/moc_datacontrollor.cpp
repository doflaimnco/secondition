/****************************************************************************
** Meta object code from reading C++ file 'datacontrollor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aircondition/datacontrollor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datacontrollor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataControllor_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataControllor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataControllor_t qt_meta_stringdata_DataControllor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DataControllor"
QT_MOC_LITERAL(1, 15, 10), // "getAllData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 26), // "QVector<SingleReportData>&"
QT_MOC_LITERAL(4, 54, 7), // "alldata"
QT_MOC_LITERAL(5, 62, 12) // "clearAllData"

    },
    "DataControllor\0getAllData\0\0"
    "QVector<SingleReportData>&\0alldata\0"
    "clearAllData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataControllor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void DataControllor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataControllor *_t = static_cast<DataControllor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getAllData((*reinterpret_cast< QVector<SingleReportData>(*)>(_a[1]))); break;
        case 1: _t->clearAllData(); break;
        default: ;
        }
    }
}

const QMetaObject DataControllor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataControllor.data,
      qt_meta_data_DataControllor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataControllor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataControllor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataControllor.stringdata0))
        return static_cast<void*>(const_cast< DataControllor*>(this));
    return QObject::qt_metacast(_clname);
}

int DataControllor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
