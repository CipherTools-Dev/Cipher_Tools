#include "testspeed_ustc.h"
#include "ui_testspeed_ustc.h"

TestSpeed_USTC::TestSpeed_USTC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestSpeed_USTC)
{
    ui->setupUi(this);
}

TestSpeed_USTC::~TestSpeed_USTC()
{
    delete ui;
}
