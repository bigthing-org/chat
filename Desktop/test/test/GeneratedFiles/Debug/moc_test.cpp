/****************************************************************************
** Meta object code from reading C++ file 'test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_test_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_test_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_test_t qt_meta_stringdata_test = {
    {
QT_MOC_LITERAL(0, 0, 4), // "test"
QT_MOC_LITERAL(1, 5, 10), // "expandList"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 34, 4), // "item"
QT_MOC_LITERAL(5, 39, 6), // "column"
QT_MOC_LITERAL(6, 46, 13), // "MyPageChange1"
QT_MOC_LITERAL(7, 60, 13), // "MyPageChange2"
QT_MOC_LITERAL(8, 74, 13), // "MyPageChange3"
QT_MOC_LITERAL(9, 88, 13) // "MyPageChange4"

    },
    "test\0expandList\0\0QTreeWidgetItem*\0"
    "item\0column\0MyPageChange1\0MyPageChange2\0"
    "MyPageChange3\0MyPageChange4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_test[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        test *_t = static_cast<test *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expandList((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->MyPageChange1(); break;
        case 2: _t->MyPageChange2(); break;
        case 3: _t->MyPageChange3(); break;
        case 4: _t->MyPageChange4(); break;
        default: ;
        }
    }
}

const QMetaObject test::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_test.data,
      qt_meta_data_test,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *test::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_test.stringdata0))
        return static_cast<void*>(const_cast< test*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_titleLabel_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_titleLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_titleLabel_t qt_meta_stringdata_titleLabel = {
    {
QT_MOC_LITERAL(0, 0, 10) // "titleLabel"

    },
    "titleLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_titleLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void titleLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject titleLabel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_titleLabel.data,
      qt_meta_data_titleLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *titleLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *titleLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_titleLabel.stringdata0))
        return static_cast<void*>(const_cast< titleLabel*>(this));
    return QWidget::qt_metacast(_clname);
}

int titleLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
