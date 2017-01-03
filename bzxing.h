#ifndef BZXING_H
#define BZXING_H
#include "QZXing_global.h"
#include <QObject>
#include <QImage>
#include "CameraImageWrapper.h"
#include <zxing/common/GlobalHistogramBinarizer.h>
#include <zxing/Binarizer.h>
#include <zxing/BinaryBitmap.h>
#include <zxing/MultiFormatReader.h>
#include <zxing/DecodeHints.h>

#include <QTime>
#include <QUrl>
#include <QFileInfo>
#include <zxing/qrcode/encoder/Encoder.h>
#include <zxing/qrcode/ErrorCorrectionLevel.h>
#include <zxing/common/detector/WhiteRectangleDetector.h>
#include <zxing/zxing/common/GreyscaleLuminanceSource.h>
#include <QColor>


namespace zxing {
class MultiFormatReader;
}

class BZxing : public QObject
{
    Q_OBJECT
public:
    enum DecoderFormat {
        DecoderFormat_None = 0,
        DecoderFormat_Aztec = 1 << 1,
        DecoderFormat_CODABAR = 1 << 2,
        DecoderFormat_CODE_39 = 1 << 3,
        DecoderFormat_CODE_93 = 1 << 4,
        DecoderFormat_CODE_128 = 1 << 5,
        DecoderFormat_DATA_MATRIX = 1 << 6,
        DecoderFormat_EAN_8 = 1 << 7,
        DecoderFormat_EAN_13 = 1 << 8,
        DecoderFormat_ITF = 1 << 9,
        DecoderFormat_MAXICODE = 1 << 10,
        DecoderFormat_PDF_417 = 1 << 11,
        DecoderFormat_QR_CODE = 1 << 12,
        DecoderFormat_RSS_14 = 1 << 13,
        DecoderFormat_RSS_EXPANDED = 1 << 14,
        DecoderFormat_UPC_A = 1 << 15,
        DecoderFormat_UPC_E = 1 << 16,
        DecoderFormat_UPC_EAN_EXTENSION = 1 << 17
    } ;
    typedef unsigned int DecoderFormatType;

    BZxing(QObject *parent = NULL);
    ~BZxing();
    BZxing(DecoderFormat decodeHints, QObject *parent = NULL);
    void setDecoder(const uint &hint);

    bool tryHarder() const;
    void setTryHarder(bool tryHarder);

    QString getFoundedFmt() const;
    void setFoundedFmt(const QString &value);

    QString getCharSet() const;
    void setCharSet(const QString &charSet);
    QRectF getTagRect(const ArrayRef<Ref<ResultPoint> > &resultPoints, const Ref<BitMatrix> &bitMatrix);

    static QString decoderFormatToString(int fmt);

public slots:
    QString decodeImage(const QImage &image, int maxWidth = -1, int maxHeight = -1, bool smoothTransformation = false);
//    QString decodeImageFromFile(const QString& imageFilePath, int maxWidth=-1, int maxHeight=-1, bool smoothTransformation = false);
signals:
    void decodingStarted();
    void decodingFinished(bool succeeded);
    void enabledFormatsChanged();
    void tagFound(QString tag);
    void tagFoundAdvanced(const QString &tag, const QString &format, const QString &charSet) const;
    void tagFoundAdvanced(const QString &tag, const QString &format, const QString &charSet, const QRectF &rect) const;
    void error(QString msg);
private:
    zxing::MultiFormatReader *decoder;
    DecoderFormatType enabledDecoders;
    int processingTime;
    QString foundedFmt;
    QString charSet_;
    bool tryHarder_;

    /**
      * If true, the decoding operation will take place at a different thread.
      */
    bool isThreaded;


};

#endif // BZXING_H
