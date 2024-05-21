/****************************************************************************
** Meta object code from reading C++ file 'paintwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/paintwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPaintWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPaintWindowENDCLASS = QtMocHelpers::stringData(
    "PaintWindow",
    "slotTimer",
    "",
    "on_triangleBtn_clicked",
    "on_rectangleBtn_clicked",
    "on_lineBtn_clicked",
    "on_circleBtn_clicked",
    "on_undoBtn_clicked",
    "on_redoBtn_clicked",
    "on_colorBtn_clicked",
    "on_saveBtn_clicked",
    "on_verticalSlider_sliderMoved",
    "position",
    "on_tableBtn_clicked",
    "on_ersr_Btn_clicked",
    "on_searchBar_returnPressed",
    "on_DataTable_cellChanged",
    "row",
    "column",
    "on_SortASBtn_clicked",
    "on_SortDSBtn_clicked",
    "on_DataTable_cellClicked",
    "on_logoBtn_clicked",
    "on_menuNew_clicked",
    "on_menuOpen_clicked",
    "on_menuSave_clicked",
    "on_infoBtn_clicked",
    "on_borderCBtn_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPaintWindowENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[24];
    char stringdata5[19];
    char stringdata6[21];
    char stringdata7[19];
    char stringdata8[19];
    char stringdata9[20];
    char stringdata10[19];
    char stringdata11[30];
    char stringdata12[9];
    char stringdata13[20];
    char stringdata14[20];
    char stringdata15[27];
    char stringdata16[25];
    char stringdata17[4];
    char stringdata18[7];
    char stringdata19[21];
    char stringdata20[21];
    char stringdata21[25];
    char stringdata22[19];
    char stringdata23[19];
    char stringdata24[20];
    char stringdata25[20];
    char stringdata26[19];
    char stringdata27[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPaintWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPaintWindowENDCLASS_t qt_meta_stringdata_CLASSPaintWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "PaintWindow"
        QT_MOC_LITERAL(12, 9),  // "slotTimer"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 22),  // "on_triangleBtn_clicked"
        QT_MOC_LITERAL(46, 23),  // "on_rectangleBtn_clicked"
        QT_MOC_LITERAL(70, 18),  // "on_lineBtn_clicked"
        QT_MOC_LITERAL(89, 20),  // "on_circleBtn_clicked"
        QT_MOC_LITERAL(110, 18),  // "on_undoBtn_clicked"
        QT_MOC_LITERAL(129, 18),  // "on_redoBtn_clicked"
        QT_MOC_LITERAL(148, 19),  // "on_colorBtn_clicked"
        QT_MOC_LITERAL(168, 18),  // "on_saveBtn_clicked"
        QT_MOC_LITERAL(187, 29),  // "on_verticalSlider_sliderMoved"
        QT_MOC_LITERAL(217, 8),  // "position"
        QT_MOC_LITERAL(226, 19),  // "on_tableBtn_clicked"
        QT_MOC_LITERAL(246, 19),  // "on_ersr_Btn_clicked"
        QT_MOC_LITERAL(266, 26),  // "on_searchBar_returnPressed"
        QT_MOC_LITERAL(293, 24),  // "on_DataTable_cellChanged"
        QT_MOC_LITERAL(318, 3),  // "row"
        QT_MOC_LITERAL(322, 6),  // "column"
        QT_MOC_LITERAL(329, 20),  // "on_SortASBtn_clicked"
        QT_MOC_LITERAL(350, 20),  // "on_SortDSBtn_clicked"
        QT_MOC_LITERAL(371, 24),  // "on_DataTable_cellClicked"
        QT_MOC_LITERAL(396, 18),  // "on_logoBtn_clicked"
        QT_MOC_LITERAL(415, 18),  // "on_menuNew_clicked"
        QT_MOC_LITERAL(434, 19),  // "on_menuOpen_clicked"
        QT_MOC_LITERAL(454, 19),  // "on_menuSave_clicked"
        QT_MOC_LITERAL(474, 18),  // "on_infoBtn_clicked"
        QT_MOC_LITERAL(493, 21)   // "on_borderCBtn_clicked"
    },
    "PaintWindow",
    "slotTimer",
    "",
    "on_triangleBtn_clicked",
    "on_rectangleBtn_clicked",
    "on_lineBtn_clicked",
    "on_circleBtn_clicked",
    "on_undoBtn_clicked",
    "on_redoBtn_clicked",
    "on_colorBtn_clicked",
    "on_saveBtn_clicked",
    "on_verticalSlider_sliderMoved",
    "position",
    "on_tableBtn_clicked",
    "on_ersr_Btn_clicked",
    "on_searchBar_returnPressed",
    "on_DataTable_cellChanged",
    "row",
    "column",
    "on_SortASBtn_clicked",
    "on_SortDSBtn_clicked",
    "on_DataTable_cellClicked",
    "on_logoBtn_clicked",
    "on_menuNew_clicked",
    "on_menuOpen_clicked",
    "on_menuSave_clicked",
    "on_infoBtn_clicked",
    "on_borderCBtn_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPaintWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    0,  153,    2, 0x08,    2 /* Private */,
       4,    0,  154,    2, 0x08,    3 /* Private */,
       5,    0,  155,    2, 0x08,    4 /* Private */,
       6,    0,  156,    2, 0x08,    5 /* Private */,
       7,    0,  157,    2, 0x08,    6 /* Private */,
       8,    0,  158,    2, 0x08,    7 /* Private */,
       9,    0,  159,    2, 0x08,    8 /* Private */,
      10,    0,  160,    2, 0x08,    9 /* Private */,
      11,    1,  161,    2, 0x08,   10 /* Private */,
      13,    0,  164,    2, 0x08,   12 /* Private */,
      14,    0,  165,    2, 0x08,   13 /* Private */,
      15,    0,  166,    2, 0x08,   14 /* Private */,
      16,    2,  167,    2, 0x08,   15 /* Private */,
      19,    0,  172,    2, 0x08,   18 /* Private */,
      20,    0,  173,    2, 0x08,   19 /* Private */,
      21,    2,  174,    2, 0x08,   20 /* Private */,
      22,    0,  179,    2, 0x08,   23 /* Private */,
      23,    0,  180,    2, 0x08,   24 /* Private */,
      24,    0,  181,    2, 0x08,   25 /* Private */,
      25,    0,  182,    2, 0x08,   26 /* Private */,
      26,    0,  183,    2, 0x08,   27 /* Private */,
      27,    0,  184,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PaintWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSPaintWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPaintWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPaintWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PaintWindow, std::true_type>,
        // method 'slotTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_triangleBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rectangleBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_circleBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_undoBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_redoBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_colorBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_sliderMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ersr_Btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchBar_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DataTable_cellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_SortASBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SortDSBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DataTable_cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_logoBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuNew_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuOpen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_infoBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_borderCBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PaintWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaintWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotTimer(); break;
        case 1: _t->on_triangleBtn_clicked(); break;
        case 2: _t->on_rectangleBtn_clicked(); break;
        case 3: _t->on_lineBtn_clicked(); break;
        case 4: _t->on_circleBtn_clicked(); break;
        case 5: _t->on_undoBtn_clicked(); break;
        case 6: _t->on_redoBtn_clicked(); break;
        case 7: _t->on_colorBtn_clicked(); break;
        case 8: _t->on_saveBtn_clicked(); break;
        case 9: _t->on_verticalSlider_sliderMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_tableBtn_clicked(); break;
        case 11: _t->on_ersr_Btn_clicked(); break;
        case 12: _t->on_searchBar_returnPressed(); break;
        case 13: _t->on_DataTable_cellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->on_SortASBtn_clicked(); break;
        case 15: _t->on_SortDSBtn_clicked(); break;
        case 16: _t->on_DataTable_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->on_logoBtn_clicked(); break;
        case 18: _t->on_menuNew_clicked(); break;
        case 19: _t->on_menuOpen_clicked(); break;
        case 20: _t->on_menuSave_clicked(); break;
        case 21: _t->on_infoBtn_clicked(); break;
        case 22: _t->on_borderCBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *PaintWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPaintWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PaintWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
