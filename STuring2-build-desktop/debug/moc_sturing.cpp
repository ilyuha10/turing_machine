/****************************************************************************
** Meta object code from reading C++ file 'sturing.h'
**
** Created: Tue 20. Dec 01:27:02 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/sturing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sturing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_STuring[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      19,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,    8,    8,    8, 0x0a,
      37,    8,    8,    8, 0x0a,
      57,    8,    8,    8, 0x0a,
      70,    8,    8,    8, 0x0a,
      85,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_STuring[] = {
    "STuring\0\0getData()\0getSource()\0run()\0"
    "stopButtonEnabled()\0setSrcSize()\0"
    "clearFontSrc()\0changeSpeed()\0"
};

const QMetaObject STuring::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_STuring,
      qt_meta_data_STuring, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &STuring::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *STuring::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *STuring::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_STuring))
        return static_cast<void*>(const_cast< STuring*>(this));
    return QObject::qt_metacast(_clname);
}

int STuring::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: getData(); break;
        case 1: getSource(); break;
        case 2: run(); break;
        case 3: stopButtonEnabled(); break;
        case 4: setSrcSize(); break;
        case 5: clearFontSrc(); break;
        case 6: changeSpeed(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void STuring::getData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void STuring::getSource()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
