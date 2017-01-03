#include "bzxing.h"


using namespace zxing;

BZxing::BZxing(QObject *parent) : QObject(parent), tryHarder_(false)
{
    decoder = new MultiFormatReader();
}

BZxing::~BZxing()
{
    if (decoder)
        delete decoder;
}

BZxing::BZxing(BZxing::DecoderFormat decodeHints, QObject *parent) : QObject(parent)
{
    decoder = new MultiFormatReader();
    setDecoder(decodeHints);
}

void BZxing::setDecoder(const uint &hint)
{
    unsigned int newHints = 0;

    if(hint & DecoderFormat_Aztec)
        newHints |= DecodeHints::AZTEC_HINT;

    if(hint & DecoderFormat_CODABAR)
        newHints |= DecodeHints::CODABAR_HINT;

    if(hint & DecoderFormat_CODE_39)
        newHints |= DecodeHints::CODE_39_HINT;

    if(hint & DecoderFormat_CODE_93)
        newHints |= DecodeHints::CODE_93_HINT;

    if(hint & DecoderFormat_CODE_128)
        newHints |= DecodeHints::CODE_128_HINT;

    if(hint & DecoderFormat_DATA_MATRIX)
        newHints |= DecodeHints::DATA_MATRIX_HINT;

    if(hint & DecoderFormat_EAN_8)
        newHints |= DecodeHints::EAN_8_HINT;

    if(hint & DecoderFormat_EAN_13)
        newHints |= DecodeHints::EAN_13_HINT;

    if(hint & DecoderFormat_ITF)
        newHints |= DecodeHints::ITF_HINT;

    if(hint & DecoderFormat_MAXICODE)
        newHints |= DecodeHints::MAXICODE_HINT;

    if(hint & DecoderFormat_PDF_417)
        newHints |= DecodeHints::PDF_417_HINT;

    if(hint & DecoderFormat_QR_CODE)
        newHints |= DecodeHints::QR_CODE_HINT;

    if(hint & DecoderFormat_RSS_14)
        newHints |= DecodeHints::RSS_14_HINT;

    if(hint & DecoderFormat_RSS_EXPANDED)
        newHints |= DecodeHints::RSS_EXPANDED_HINT;

    if(hint & DecoderFormat_UPC_A)
        newHints |= DecodeHints::UPC_A_HINT;

    if(hint & DecoderFormat_UPC_E)
        newHints |= DecodeHints::UPC_E_HINT;

    if(hint & DecoderFormat_UPC_EAN_EXTENSION)
        newHints |= DecodeHints::UPC_EAN_EXTENSION_HINT;

    enabledDecoders = newHints;

    emit enabledFormatsChanged();
}

bool BZxing::tryHarder() const
{
    return tryHarder_;
}

void BZxing::setTryHarder(bool tryHarder)
{
    tryHarder_ = tryHarder;
}

QString BZxing::getFoundedFmt() const
{
    return foundedFmt;
}

void BZxing::setFoundedFmt(const QString &value)
{
    foundedFmt = value;
}

QString BZxing::getCharSet() const
{
    return charSet_;
}

void BZxing::setCharSet(const QString &charSet)
{
    charSet_ = charSet;
}

QString BZxing::decoderFormatToString(int fmt)
{
    switch (fmt) {
    case DecoderFormat_Aztec:
        return "AZTEC";

    case DecoderFormat_CODABAR:
        return "CODABAR";

    case DecoderFormat_CODE_39:
        return "CODE_39";

    case DecoderFormat_CODE_93:
        return "CODE_93";

    case DecoderFormat_CODE_128:
        return "CODE_128";

    case DecoderFormat_DATA_MATRIX:
        return "DATA_MATRIX";

    case DecoderFormat_EAN_8:
        return "EAN_8";

    case DecoderFormat_EAN_13:
        return "EAN_13";

    case DecoderFormat_ITF:
        return "ITF";

    case DecoderFormat_MAXICODE:
        return "MAXICODE";

    case DecoderFormat_PDF_417:
        return "PDF_417";

    case DecoderFormat_QR_CODE:
        return "QR_CODE";

    case DecoderFormat_RSS_14:
        return "RSS_14";

    case DecoderFormat_RSS_EXPANDED:
        return "RSS_EXPANDED";

    case DecoderFormat_UPC_A:
        return "UPC_A";

    case DecoderFormat_UPC_E:
        return "UPC_E";

    case DecoderFormat_UPC_EAN_EXTENSION:
        return "UPC_EAN_EXTENSION";
    } // switch
    return QString();
}
QRectF BZxing::getTagRect(const ArrayRef<Ref<ResultPoint> > &resultPoints, const Ref<BitMatrix> &bitMatrix)
{
    if (resultPoints->size() < 2)
        return QRectF();

    int matrixWidth = bitMatrix->getWidth();
    int matrixHeight = bitMatrix->getHeight();

    // 1D barcode
    if (resultPoints->size() == 2) {
        WhiteRectangleDetector detector(bitMatrix);
        std::vector<Ref<ResultPoint> > resultRectPoints = detector.detect();

        if (resultRectPoints.size() != 4)
            return QRectF();

        qreal xMin = resultPoints[0]->getX();
        qreal xMax = xMin;
        for (unsigned int i = 1; i < resultPoints->size(); ++i) {
            qreal x = resultPoints[i]->getX();
            if (x < xMin)
                xMin = x;
            if (x > xMax)
                xMax = x;
        }

        qreal yMin = resultRectPoints[0]->getY();
        qreal yMax = yMin;
        for (unsigned int i = 1; i < resultRectPoints.size(); ++i) {
            qreal y = resultRectPoints[i]->getY();
            if (y < yMin)
                yMin = y;
            if (y > yMax)
                yMax = y;
        }

        return QRectF(QPointF(xMin / matrixWidth, yMax / matrixHeight), QPointF(xMax / matrixWidth, yMin / matrixHeight));
    }

    // 2D QR code
    if (resultPoints->size() == 4) {
        qreal xMin = resultPoints[0]->getX();
        qreal xMax = xMin;
        qreal yMin = resultPoints[0]->getY();
        qreal yMax = yMin;
        for (unsigned int i = 1; i < resultPoints->size(); ++i) {
            qreal x = resultPoints[i]->getX();
            qreal y = resultPoints[i]->getY();
            if (x < xMin)
                xMin = x;
            if (x > xMax)
                xMax = x;
            if (y < yMin)
                yMin = y;
            if (y > yMax)
                yMax = y;
        }

        return QRectF(QPointF(xMin / matrixWidth, yMax / matrixHeight), QPointF(xMax / matrixWidth, yMin / matrixHeight));
    }

    return QRectF();
}

QString BZxing::decodeImage(const QImage &image, int maxWidth, int maxHeight, bool smoothTransformation)
{
    QTime t;
    t.start();
    Ref<Result> res;
    emit decodingStarted();

    if(image.isNull())
    {
        emit decodingFinished(false);
        processingTime = t.elapsed();
        return "";
    }
    CameraImageWrapper *ciw = NULL;

    if ((maxWidth > 0) || (maxHeight > 0))
        ciw = CameraImageWrapper::Factory(image, maxWidth, maxHeight, smoothTransformation);
    else
        ciw = CameraImageWrapper::Factory(image, 999, 999, true);

    QString errorMessage = "Unknown";
    try {
        Ref<LuminanceSource> imageRef(ciw);
        Ref<GlobalHistogramBinarizer> binz( new GlobalHistogramBinarizer(imageRef) );
        Ref<BinaryBitmap> bb( new BinaryBitmap(binz) );

        DecodeHints hints((int)enabledDecoders);

        bool hasSucceded = false;
        try {
            res = decoder->decode(bb, hints);
            hasSucceded = true;
        }catch(zxing::Exception &e){}

        if(!hasSucceded)
        {
            hints.setTryHarder(true);

            try {
                res = decoder->decode(bb, hints);
                hasSucceded = true;
            } catch(zxing::Exception &e) {}

            if (tryHarder_ && bb->isRotateSupported()) {
                Ref<BinaryBitmap> bbTmp = bb;

                for (int i=0; (i<3 && !hasSucceded); i++) {
                    Ref<BinaryBitmap> rotatedImage(bbTmp->rotateCounterClockwise());
                    bbTmp = rotatedImage;

                    try {
                        res = decoder->decode(rotatedImage, hints);
                        processingTime = t.elapsed();
                        hasSucceded = true;
                    } catch(zxing::Exception &e) {}
                }
            }
        }
        if (hasSucceded) {
            QString string = QString(res->getText()->getText().c_str());
            if (!string.isEmpty() && (string.length() > 0)) {
                int fmt = res->getBarcodeFormat().value;
                foundedFmt = decoderFormatToString(fmt);
                charSet_ = QString::fromStdString(res->getCharSet());
                if (!charSet_.isEmpty()) {
                    QTextCodec *codec = QTextCodec::codecForName(res->getCharSet().c_str());
                    if (codec)
                        string = codec->toUnicode(res->getText()->getText().c_str());
                }
                emit tagFound(string);
                emit tagFoundAdvanced(string, foundedFmt, charSet_);

                try {
                    const QRectF rect = getTagRect(res->getResultPoints(), binz->getBlackMatrix());
                    emit tagFoundAdvanced(string, foundedFmt, charSet_, rect);
                }catch(zxing::Exception &/*e*/){}
            }
            emit decodingFinished(true);
            return string;
        }
    }
    catch(zxing::Exception &e)
    {
        errorMessage = QString(e.what());
    }

    emit error(errorMessage);
    emit decodingFinished(false);
    processingTime = t.elapsed();
    return "";

}


