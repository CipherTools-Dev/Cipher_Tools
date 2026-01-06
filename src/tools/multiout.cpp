#include "multiout.h"
#include "ui_multiout.h"
#include <QMessageBox>

MultiOut::MultiOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MultiOut)
{
    ui->setupUi(this);
    setFixedSize(this->width(),this->height());

    qputenv("QTWEBENGINE_CHROMIUM_FLAGS",
            "--enable-gpu "
            "--enable-zero-copy "
            "--ignore-gpu-blocklist "
            "--enable-features=CSSBackdropFilter");
    QFile mout(":/Resource/checker-web.html");

    if (!mout.open(QIODevice::ReadOnly)) {
        QString err = "无法打开文件！" + mout.errorString();
        qWarning() << err; //

        /* 弹窗警告 */
        QMessageBox openFileErr;
        openFileErr.setIcon(QMessageBox::Warning);
        openFileErr.setWindowTitle("无法打开文件！");
        openFileErr.setText(err);
        openFileErr.exec();
        qDebug()<<"打开文件失败已经弹窗";
        return;
    }
    QString html = QString::fromUtf8(mout.readAll());
    ui->webEngineView->setHtml(html);
}

MultiOut::~MultiOut()
{
    delete ui;
}
