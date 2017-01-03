/****************************************************************************
** Meta object code from reading C++ file 'QZXing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QZXing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QZXing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QZXing_t {
    QByteArrayData data[56];
    char stringdata0[825];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QZXing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QZXing_t qt_meta_stringdata_QZXing = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QZXing"
QT_MOC_LITERAL(1, 7, 15), // "decodingStarted"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "decodingFinished"
QT_MOC_LITERAL(4, 41, 9), // "succeeded"
QT_MOC_LITERAL(5, 51, 21), // "enabledFormatsChanged"
QT_MOC_LITERAL(6, 73, 8), // "tagFound"
QT_MOC_LITERAL(7, 82, 3), // "tag"
QT_MOC_LITERAL(8, 86, 16), // "tagFoundAdvanced"
QT_MOC_LITERAL(9, 103, 6), // "format"
QT_MOC_LITERAL(10, 110, 7), // "charSet"
QT_MOC_LITERAL(11, 118, 4), // "rect"
QT_MOC_LITERAL(12, 123, 5), // "error"
QT_MOC_LITERAL(13, 129, 3), // "msg"
QT_MOC_LITERAL(14, 133, 11), // "decodeImage"
QT_MOC_LITERAL(15, 145, 5), // "image"
QT_MOC_LITERAL(16, 151, 8), // "maxWidth"
QT_MOC_LITERAL(17, 160, 9), // "maxHeight"
QT_MOC_LITERAL(18, 170, 20), // "smoothTransformation"
QT_MOC_LITERAL(19, 191, 19), // "decodeImageFromFile"
QT_MOC_LITERAL(20, 211, 13), // "imageFilePath"
QT_MOC_LITERAL(21, 225, 14), // "decodeImageQML"
QT_MOC_LITERAL(22, 240, 4), // "item"
QT_MOC_LITERAL(23, 245, 17), // "decodeSubImageQML"
QT_MOC_LITERAL(24, 263, 7), // "offsetX"
QT_MOC_LITERAL(25, 271, 7), // "offsetY"
QT_MOC_LITERAL(26, 279, 5), // "width"
QT_MOC_LITERAL(27, 285, 6), // "height"
QT_MOC_LITERAL(28, 292, 8), // "imageUrl"
QT_MOC_LITERAL(29, 301, 10), // "encodeData"
QT_MOC_LITERAL(30, 312, 4), // "data"
QT_MOC_LITERAL(31, 317, 28), // "getProcessTimeOfLastDecoding"
QT_MOC_LITERAL(32, 346, 17), // "getEnabledFormats"
QT_MOC_LITERAL(33, 364, 10), // "setDecoder"
QT_MOC_LITERAL(34, 375, 4), // "hint"
QT_MOC_LITERAL(35, 380, 14), // "processingTime"
QT_MOC_LITERAL(36, 395, 15), // "enabledDecoders"
QT_MOC_LITERAL(37, 411, 13), // "DecoderFormat"
QT_MOC_LITERAL(38, 425, 18), // "DecoderFormat_None"
QT_MOC_LITERAL(39, 444, 19), // "DecoderFormat_Aztec"
QT_MOC_LITERAL(40, 464, 21), // "DecoderFormat_CODABAR"
QT_MOC_LITERAL(41, 486, 21), // "DecoderFormat_CODE_39"
QT_MOC_LITERAL(42, 508, 21), // "DecoderFormat_CODE_93"
QT_MOC_LITERAL(43, 530, 22), // "DecoderFormat_CODE_128"
QT_MOC_LITERAL(44, 553, 25), // "DecoderFormat_DATA_MATRIX"
QT_MOC_LITERAL(45, 579, 19), // "DecoderFormat_EAN_8"
QT_MOC_LITERAL(46, 599, 20), // "DecoderFormat_EAN_13"
QT_MOC_LITERAL(47, 620, 17), // "DecoderFormat_ITF"
QT_MOC_LITERAL(48, 638, 22), // "DecoderFormat_MAXICODE"
QT_MOC_LITERAL(49, 661, 21), // "DecoderFormat_PDF_417"
QT_MOC_LITERAL(50, 683, 21), // "DecoderFormat_QR_CODE"
QT_MOC_LITERAL(51, 705, 20), // "DecoderFormat_RSS_14"
QT_MOC_LITERAL(52, 726, 26), // "DecoderFormat_RSS_EXPANDED"
QT_MOC_LITERAL(53, 753, 19), // "DecoderFormat_UPC_A"
QT_MOC_LITERAL(54, 773, 19), // "DecoderFormat_UPC_E"
QT_MOC_LITERAL(55, 793, 31) // "DecoderFormat_UPC_EAN_EXTENSION"

    },
    "QZXing\0decodingStarted\0\0decodingFinished\0"
    "succeeded\0enabledFormatsChanged\0"
    "tagFound\0tag\0tagFoundAdvanced\0format\0"
    "charSet\0rect\0error\0msg\0decodeImage\0"
    "image\0maxWidth\0maxHeight\0smoothTransformation\0"
    "decodeImageFromFile\0imageFilePath\0"
    "decodeImageQML\0item\0decodeSubImageQML\0"
    "offsetX\0offsetY\0width\0height\0imageUrl\0"
    "encodeData\0data\0getProcessTimeOfLastDecoding\0"
    "getEnabledFormats\0setDecoder\0hint\0"
    "processingTime\0enabledDecoders\0"
    "DecoderFormat\0DecoderFormat_None\0"
    "DecoderFormat_Aztec\0DecoderFormat_CODABAR\0"
    "DecoderFormat_CODE_39\0DecoderFormat_CODE_93\0"
    "DecoderFormat_CODE_128\0DecoderFormat_DATA_MATRIX\0"
    "DecoderFormat_EAN_8\0DecoderFormat_EAN_13\0"
    "DecoderFormat_ITF\0DecoderFormat_MAXICODE\0"
    "DecoderFormat_PDF_417\0DecoderFormat_QR_CODE\0"
    "DecoderFormat_RSS_14\0DecoderFormat_RSS_EXPANDED\0"
    "DecoderFormat_UPC_A\0DecoderFormat_UPC_E\0"
    "DecoderFormat_UPC_EAN_EXTENSION"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QZXing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       2,  328, // properties
       1,  336, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x06 /* Public */,
       3,    1,  170,    2, 0x06 /* Public */,
       5,    0,  173,    2, 0x06 /* Public */,
       6,    1,  174,    2, 0x06 /* Public */,
       8,    3,  177,    2, 0x06 /* Public */,
       8,    4,  184,    2, 0x06 /* Public */,
      12,    1,  193,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    4,  196,    2, 0x0a /* Public */,
      14,    3,  205,    2, 0x2a /* Public | MethodCloned */,
      14,    2,  212,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  217,    2, 0x2a /* Public | MethodCloned */,
      19,    4,  220,    2, 0x0a /* Public */,
      19,    3,  229,    2, 0x2a /* Public | MethodCloned */,
      19,    2,  236,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  241,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  244,    2, 0x0a /* Public */,
      23,    5,  247,    2, 0x0a /* Public */,
      23,    4,  258,    2, 0x2a /* Public | MethodCloned */,
      23,    3,  267,    2, 0x2a /* Public | MethodCloned */,
      23,    2,  274,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  279,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  282,    2, 0x0a /* Public */,
      23,    5,  285,    2, 0x0a /* Public */,
      23,    4,  296,    2, 0x2a /* Public | MethodCloned */,
      23,    3,  305,    2, 0x2a /* Public | MethodCloned */,
      23,    2,  312,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  317,    2, 0x2a /* Public | MethodCloned */,
      29,    1,  320,    2, 0x0a /* Public */,
      31,    0,  323,    2, 0x0a /* Public */,
      32,    0,  324,    2, 0x0a /* Public */,
      33,    1,  325,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QRectF,    7,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::QString, QMetaType::QImage, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   15,   16,   17,   18,
    QMetaType::QString, QMetaType::QImage, QMetaType::Int, QMetaType::Int,   15,   16,   17,
    QMetaType::QString, QMetaType::QImage, QMetaType::Int,   15,   16,
    QMetaType::QString, QMetaType::QImage,   15,
    QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   20,   16,   17,   18,
    QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   20,   16,   17,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   20,   16,
    QMetaType::QString, QMetaType::QString,   20,
    QMetaType::QString, QMetaType::QObjectStar,   22,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   22,   24,   25,   26,   27,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int, QMetaType::Int, QMetaType::Int,   22,   24,   25,   26,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int, QMetaType::Int,   22,   24,   25,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int,   22,   24,
    QMetaType::QString, QMetaType::QObjectStar,   22,
    QMetaType::QString, QMetaType::QUrl,   28,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   24,   25,   26,   27,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   24,   25,   26,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,   28,   24,   25,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   28,   24,
    QMetaType::QString, QMetaType::QUrl,   28,
    QMetaType::QImage, QMetaType::QString,   30,
    QMetaType::Int,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,   34,

 // properties: name, type, flags
      35, QMetaType::Int, 0x00095001,
      36, QMetaType::UInt, 0x00495003,

 // properties: notify_signal_id
       0,
       2,

 // enums: name, flags, count, data
      37, 0x0,   18,  340,

 // enum data: key, value
      38, uint(QZXing::DecoderFormat_None),
      39, uint(QZXing::DecoderFormat_Aztec),
      40, uint(QZXing::DecoderFormat_CODABAR),
      41, uint(QZXing::DecoderFormat_CODE_39),
      42, uint(QZXing::DecoderFormat_CODE_93),
      43, uint(QZXing::DecoderFormat_CODE_128),
      44, uint(QZXing::DecoderFormat_DATA_MATRIX),
      45, uint(QZXing::DecoderFormat_EAN_8),
      46, uint(QZXing::DecoderFormat_EAN_13),
      47, uint(QZXing::DecoderFormat_ITF),
      48, uint(QZXing::DecoderFormat_MAXICODE),
      49, uint(QZXing::DecoderFormat_PDF_417),
      50, uint(QZXing::DecoderFormat_QR_CODE),
      51, uint(QZXing::DecoderFormat_RSS_14),
      52, uint(QZXing::DecoderFormat_RSS_EXPANDED),
      53, uint(QZXing::DecoderFormat_UPC_A),
      54, uint(QZXing::DecoderFormat_UPC_E),
      55, uint(QZXing::DecoderFormat_UPC_EAN_EXTENSION),

       0        // eod
};

void QZXing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QZXing *_t = static_cast<QZXing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->decodingStarted(); break;
        case 1: _t->decodingFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enabledFormatsChanged(); break;
        case 3: _t->tagFound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->tagFoundAdvanced((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->tagFoundAdvanced((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QRectF(*)>(_a[4]))); break;
        case 6: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { QString _r = _t->decodeImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->decodeImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->decodeImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->decodeImage((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->decodeImageQML((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->decodeImageQML((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QImage _r = _t->encodeData((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->getProcessTimeOfLastDecoding();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { uint _r = _t->getEnabledFormats();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 30: _t->setDecoder((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QZXing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZXing::decodingStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QZXing::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZXing::decodingFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QZXing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZXing::enabledFormatsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QZXing::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZXing::tagFound)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QZXing::*_t)(const QString & , const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZXing::tagFoundAdvanced)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QZXing::*_t)(const QString & , const QString & , const QString & , const QRectF & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZXing::tagFoundAdvanced)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QZXing::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QZXing::error)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QZXing *_t = static_cast<QZXing *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getProcessTimeOfLastDecoding(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->getEnabledFormats(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QZXing *_t = static_cast<QZXing *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDecoder(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QZXing::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QZXing.data,
      qt_meta_data_QZXing,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QZXing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QZXing::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QZXing.stringdata0))
        return static_cast<void*>(const_cast< QZXing*>(this));
    return QObject::qt_metacast(_clname);
}

int QZXing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QZXing::decodingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QZXing::decodingFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QZXing::enabledFormatsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QZXing::tagFound(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< QZXing *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3, const QRectF & _t4)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< QZXing *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QZXing::error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
