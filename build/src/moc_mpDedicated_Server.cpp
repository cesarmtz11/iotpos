/****************************************************************************
** Meta object code from reading C++ file 'mpDedicated_Server.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mercadopago/mpDedicated_Server.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpDedicated_Server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mpDedicated_Server[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   47,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   47,   47,   47, 0x08,
      68,   47,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mpDedicated_Server[] = {
    "mpDedicated_Server\0signalServer_Notification()\0"
    "\0newConnectionSlot()\0slotDataReceived()\0"
};

void mpDedicated_Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mpDedicated_Server *_t = static_cast<mpDedicated_Server *>(_o);
        switch (_id) {
        case 0: _t->signalServer_Notification(); break;
        case 1: _t->newConnectionSlot(); break;
        case 2: _t->slotDataReceived(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mpDedicated_Server::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mpDedicated_Server::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mpDedicated_Server,
      qt_meta_data_mpDedicated_Server, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mpDedicated_Server::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mpDedicated_Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mpDedicated_Server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mpDedicated_Server))
        return static_cast<void*>(const_cast< mpDedicated_Server*>(this));
    return QObject::qt_metacast(_clname);
}

int mpDedicated_Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void mpDedicated_Server::signalServer_Notification()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
