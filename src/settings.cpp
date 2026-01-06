/*
******** Cipher Tools ********
******** 2025-2026 Ne0W0r1d ********
******** MIT License ********
******** Settings ********
*/

#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
    //bool allow_log;
    //QStringList IP_Conf,ISP_Conf;
}

Settings::~Settings()
{
    delete ui;
}
