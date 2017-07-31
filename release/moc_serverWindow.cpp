/****************************************************************************
** Meta object code from reading C++ file 'serverWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serverWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_serverWindow_t {
    QByteArrayData data[13];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serverWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serverWindow_t qt_meta_stringdata_serverWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "serverWindow"
QT_MOC_LITERAL(1, 13, 11), // "startServer"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "stopServer"
QT_MOC_LITERAL(4, 37, 16), // "acceptConnection"
QT_MOC_LITERAL(5, 54, 14), // "updateProgress"
QT_MOC_LITERAL(6, 69, 12), // "displayImage"
QT_MOC_LITERAL(7, 82, 14), // "sendProsResult"
QT_MOC_LITERAL(8, 97, 10), // "index2Name"
QT_MOC_LITERAL(9, 108, 5), // "index"
QT_MOC_LITERAL(10, 114, 12), // "displayError"
QT_MOC_LITERAL(11, 127, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 156, 11) // "socketError"

    },
    "serverWindow\0startServer\0\0stopServer\0"
    "acceptConnection\0updateProgress\0"
    "displayImage\0sendProsResult\0index2Name\0"
    "index\0displayError\0QAbstractSocket::SocketError\0"
    "socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serverWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void serverWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        serverWindow *_t = static_cast<serverWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startServer(); break;
        case 1: _t->stopServer(); break;
        case 2: _t->acceptConnection(); break;
        case 3: _t->updateProgress(); break;
        case 4: _t->displayImage(); break;
        case 5: _t->sendProsResult(); break;
        case 6: _t->index2Name((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject serverWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_serverWindow.data,
      qt_meta_data_serverWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *serverWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serverWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_serverWindow.stringdata0))
        return static_cast<void*>(const_cast< serverWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int serverWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
