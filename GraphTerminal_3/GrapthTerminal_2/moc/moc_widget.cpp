/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[21];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 12), // "ComMessageIn"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "ComMessageOut"
QT_MOC_LITERAL(4, 35, 11), // "ComWatchdog"
QT_MOC_LITERAL(5, 47, 21), // "on_BtnConnect_clicked"
QT_MOC_LITERAL(6, 69, 16), // "on_STOP1_clicked"
QT_MOC_LITERAL(7, 86, 14), // "ChannelControl"
QT_MOC_LITERAL(8, 101, 14), // "unsigned char*"
QT_MOC_LITERAL(9, 116, 12), // "ParseMessage"
QT_MOC_LITERAL(10, 129, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(11, 152, 10), // "GlobalTime"
QT_MOC_LITERAL(12, 163, 11), // "ReadControl"
QT_MOC_LITERAL(13, 175, 12), // "CalculateCRC"
QT_MOC_LITERAL(14, 188, 4), // "data"
QT_MOC_LITERAL(15, 193, 6), // "length"
QT_MOC_LITERAL(16, 200, 8), // "CRC_TYPE"
QT_MOC_LITERAL(17, 209, 3), // "crc"
QT_MOC_LITERAL(18, 213, 18), // "on_STOP1_2_clicked"
QT_MOC_LITERAL(19, 232, 18), // "on_STOP1_3_clicked"
QT_MOC_LITERAL(20, 251, 18) // "on_STOP1_4_clicked"

    },
    "Widget\0ComMessageIn\0\0ComMessageOut\0"
    "ComWatchdog\0on_BtnConnect_clicked\0"
    "on_STOP1_clicked\0ChannelControl\0"
    "unsigned char*\0ParseMessage\0"
    "on_radioButton_clicked\0GlobalTime\0"
    "ReadControl\0CalculateCRC\0data\0length\0"
    "CRC_TYPE\0crc\0on_STOP1_2_clicked\0"
    "on_STOP1_3_clicked\0on_STOP1_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       9,    2,   92,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    3,  100,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,
      19,    0,  108,    2, 0x08 /* Private */,
      20,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Char,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UInt, 0x80000000 | 8, QMetaType::UChar, 0x80000000 | 16,   14,   15,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ComMessageIn(); break;
        case 1: _t->ComMessageOut(); break;
        case 2: _t->ComWatchdog(); break;
        case 3: _t->on_BtnConnect_clicked(); break;
        case 4: _t->on_STOP1_clicked(); break;
        case 5: _t->ChannelControl((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 6: _t->ParseMessage((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2]))); break;
        case 7: _t->on_radioButton_clicked(); break;
        case 8: _t->GlobalTime(); break;
        case 9: _t->ReadControl(); break;
        case 10: { uint _r = _t->CalculateCRC((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< CRC_TYPE(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 11: _t->on_STOP1_2_clicked(); break;
        case 12: _t->on_STOP1_3_clicked(); break;
        case 13: _t->on_STOP1_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
