/****************************************************************************
** Meta object code from reading C++ file 'qJob.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mercadopago/QServerThreadProcess/qJob.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qJob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qJob[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,   26,   26,   26, 0x09,
      27,   73,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qJob[] = {
    "qJob\0applicationStarted()\0\0"
    "applicationFinished(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0"
};

void qJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qJob *_t = static_cast<qJob *>(_o);
        switch (_id) {
        case 0: _t->applicationStarted(); break;
        case 1: _t->applicationFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qJob::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qJob::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_qJob,
      qt_meta_data_qJob, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qJob::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qJob::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qJob))
        return static_cast<void*>(const_cast< qJob*>(this));
    return QThread::qt_metacast(_clname);
}

int qJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
