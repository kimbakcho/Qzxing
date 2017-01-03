#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cameras = QCameraInfo::availableCameras();
    foreach (const QCameraInfo &cameraInfo, cameras) {
           ui->CB_camera->addItem(cameraInfo.description());
//        if (cameraInfo.deviceName() == "mycamera")
//            camera = new QCamera(cameraInfo);
    }
    decode.setDecoder(BZxing::DecoderFormat_EAN_13);
//    connect(&decode,SIGNAL(tagFound(QString)),this,SLOT(find_tag(QString)));
    connect(&decode,SIGNAL(decodingFinished(bool)),this,SLOT(decode2(bool)));
    connect(&decode,SIGNAL(tagFoundAdvanced (QString,QString,QString,QRectF)),this,SLOT(slot_tagFoundAdvanced(QString,QString,QString,QRectF)));
    decoderflag = false;
    decodertimer.setInterval(3000);
    connect(&decodertimer,SIGNAL(timeout()),this,SLOT(slot_timeout()));
    decodertimer.start();
    QImage image("C:/Users/JS201208030669/Downloads/BW_QRcode_url_1483370508.png");

//    decode.decodeImage(image);

}

void MainWindow::set_camera(QCameraInfo cameraInfo)
{
    qDebug()<<cameraInfo.description();
    camera = new QCamera(cameraInfo);
    cameraFrameGrabber = new CameraFrameGrabber(this);
    camera->setViewfinder(cameraFrameGrabber);

    connect(cameraFrameGrabber, SIGNAL(frameAvailable(QImage)), this, SLOT(handleFrame(QImage)));

    imageCapture = new QCameraImageCapture(camera);
    connect(imageCapture,SIGNAL(readyForCaptureChanged(bool)),this,SLOT(slot_readyForCaptureChanged(bool)));
    connect(imageCapture,SIGNAL(imageCaptured(int,QImage)),this,SLOT(slot_imageCaptured(int,QImage)));
    connect(imageCapture,SIGNAL(imageAvailable(int,QVideoFrame)),this,SLOT(slot_imageAvailable(int,QVideoFrame)));

    camera->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    camera->stop();
    processThread.pause();
    processThread.waitForFinished();

}



void MainWindow::find_tag(QString str)
{

}

void MainWindow::slot_imageAvailable(int id, const QVideoFrame &buffer)
{
    qDebug()<<"slot_imageAvailable="<<id;
}

void MainWindow::slot_readyForCaptureChanged(bool ready)
{
    qDebug()<<"readyForCaptureChanged = "<<ready;
    if(ready){

    }
}

void MainWindow::slot_imageCaptured(int id, const QImage &preview)
{
    qDebug()<<"slot_imageCaptured = "<<id;
}

void MainWindow::slot_frameAvailable(QImage img)
{

}

void MainWindow::slot_timeout()
{


}

void MainWindow::handleFrame(QImage img)
{
//    qDebug()<<img.height();
//    QImage iimage = img.convertToFormat(QImage::Format_ARGB32);
//    QImage iimage = img.convertToFormat(QImage::Format_Grayscale8);
//    Mimg = iimage;

//    int valuex  = Mrect.x() * img.width();
//    int valuey  = Mrect.y() * img.height();
//    int valuewidth  = Mrect.width() * img.width();
//    int valueheigth  = Mrect.height() * img.height();
//    QRect irect(valuex,valuey,valuewidth,valueheigth);
//    QPainter p;
//    p.begin(&px);
//    p.drawRect(irect);
//    p.end();

}

void MainWindow::decode2(bool reslut)
{

}

void MainWindow::slot_tagFoundAdvanced(const QString &tag, const QString &format, const QString &charSet, const QRectF &rect)
{

    ui->textEdit->append(tag);
}

void MainWindow::decodeimage(QImage img)
{

    decode.decodeImage(img);

}

void MainWindow::on_CB_camera_currentIndexChanged(int index)
{
    set_camera(cameras.at(index));
}
