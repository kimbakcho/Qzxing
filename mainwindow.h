#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QCameraInfo>
#include <QCamera>
#include <Qcamera>
#include <QCameraImageCapture>
#include <cameraframegrabber.h>
#include <QTimer>
#include <QPainter>
#include <bzxing.h>
#include <QtCore>
#include <qtconcurrentrun.h>
#include <QThread>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    BZxing decode;
    QCamera *camera;
    QList<QCameraInfo> cameras;
    QCameraImageCapture *imageCapture;
    CameraFrameGrabber *cameraFrameGrabber;
    void set_camera(QCameraInfo cameraInfo);
    QImage Mimg;
    bool decoderflag;
    QTimer decodertimer;
    QRectF Mrect;
    QFuture<void> processThread;



    Ui::MainWindow *ui;
    ~MainWindow();
private:
    void closeEvent(QCloseEvent *event);

public slots:
    void find_tag(QString str);
    void slot_imageAvailable(int id, const QVideoFrame &buffer);

    void slot_readyForCaptureChanged(bool ready);

    void slot_imageCaptured(int id, const QImage &preview);

    void slot_frameAvailable(QImage img);

    void slot_timeout();

    void handleFrame(QImage img);

    void decode2(bool reslut);

    void slot_tagFoundAdvanced(const QString &tag, const QString &format, const QString &charSet, const QRectF &rect);

    void decodeimage(QImage img);

private slots:
    void on_CB_camera_currentIndexChanged(int index);

private:

};

#endif // MAINWINDOW_H
