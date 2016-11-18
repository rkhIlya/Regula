/****************************************************************************
** Meta object code from reading C++ file 'isearchengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../search/isearchengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'isearchengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ISearchEngine_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ISearchEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ISearchEngine_t qt_meta_stringdata_ISearchEngine = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ISearchEngine"
QT_MOC_LITERAL(1, 14, 14), // "searchComplete"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 24), // "QList<Search::Reference>"
QT_MOC_LITERAL(4, 55, 7), // "refList"
QT_MOC_LITERAL(5, 63, 6), // "Status"
QT_MOC_LITERAL(6, 70, 6), // "status"
QT_MOC_LITERAL(7, 77, 13), // "statusChanged"
QT_MOC_LITERAL(8, 91, 8) // "complete"

    },
    "ISearchEngine\0searchComplete\0\0"
    "QList<Search::Reference>\0refList\0"
    "Status\0status\0statusChanged\0complete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ISearchEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double,    6,    8,

       0        // eod
};

void ISearchEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ISearchEngine *_t = static_cast<ISearchEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchComplete((*reinterpret_cast< QList<Search::Reference>(*)>(_a[1])),(*reinterpret_cast< Status(*)>(_a[2]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ISearchEngine::*_t)(QList<Search::Reference> , Status );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ISearchEngine::searchComplete)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ISearchEngine::*_t)(Status , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ISearchEngine::statusChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ISearchEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ISearchEngine.data,
      qt_meta_data_ISearchEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ISearchEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ISearchEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ISearchEngine.stringdata0))
        return static_cast<void*>(const_cast< ISearchEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int ISearchEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ISearchEngine::searchComplete(QList<Search::Reference> _t1, Status _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ISearchEngine::statusChanged(Status _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
