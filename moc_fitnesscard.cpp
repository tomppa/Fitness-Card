/****************************************************************************
** Meta object code from reading C++ file 'fitnesscard.h'
**
** Created: Fri Feb 5 17:34:19 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fitnesscard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fitnesscard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FitnessCard[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      27,   12,   12,   12, 0x0a,
      43,   12,   12,   12, 0x0a,
      60,   12,   12,   12, 0x0a,
      78,   12,   12,   12, 0x0a,
      96,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FitnessCard[] = {
    "FitnessCard\0\0addExercise()\0viewExercises()\0"
    "newFitnessCard()\0saveFitnessCard()\0"
    "loadFitnessCard()\0aboutFitnessCard()\0"
};

const QMetaObject FitnessCard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FitnessCard,
      qt_meta_data_FitnessCard, 0 }
};

const QMetaObject *FitnessCard::metaObject() const
{
    return &staticMetaObject;
}

void *FitnessCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FitnessCard))
        return static_cast<void*>(const_cast< FitnessCard*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FitnessCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addExercise(); break;
        case 1: viewExercises(); break;
        case 2: newFitnessCard(); break;
        case 3: saveFitnessCard(); break;
        case 4: loadFitnessCard(); break;
        case 5: aboutFitnessCard(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
