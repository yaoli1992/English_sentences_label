/****************************************************************************
** Meta object code from reading C++ file 'QtWidgetsApplication1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtWidgetsApplication1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtWidgetsApplication1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtWidgetsApplication1_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWidgetsApplication1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWidgetsApplication1_t qt_meta_stringdata_QtWidgetsApplication1 = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtWidgetsApplication1"
QT_MOC_LITERAL(1, 22, 13), // "ButtonPressed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "ButtonPressed1"
QT_MOC_LITERAL(4, 52, 14) // "ButtonPressed2"

    },
    "QtWidgetsApplication1\0ButtonPressed\0"
    "\0ButtonPressed1\0ButtonPressed2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWidgetsApplication1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtWidgetsApplication1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtWidgetsApplication1 *_t = static_cast<QtWidgetsApplication1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ButtonPressed(); break;
        case 1: _t->ButtonPressed1(); break;
        case 2: _t->ButtonPressed2(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtWidgetsApplication1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtWidgetsApplication1.data,
      qt_meta_data_QtWidgetsApplication1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtWidgetsApplication1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWidgetsApplication1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtWidgetsApplication1.stringdata0))
        return static_cast<void*>(const_cast< QtWidgetsApplication1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtWidgetsApplication1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
