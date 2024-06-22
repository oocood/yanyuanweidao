#include "subwindow4.h"
#include "ui_subwindow4.h"

subwindow4::subwindow4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::subwindow4)
{
    ui->setupUi(this);
    this->setWindowTitle("燕南菜单");
    QPixmap background(":/menu.png");
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(background.scaled(this->size(), Qt::IgnoreAspectRatio)));
    this->setPalette(palette);
    ui->checkBox->setStyleSheet("color: black");
    ui->checkBox_2->setStyleSheet("color: black;");
    ui->checkBox_3->setStyleSheet("color: black;");
    ui->checkBox_4->setStyleSheet("color: black;");
    ui->checkBox_5->setStyleSheet("color: black;");
    ui->checkBox_6->setStyleSheet("color: black;");
}

subwindow4::~subwindow4()
{
    delete ui;
}

void subwindow4::showPrice()
{
    ui->lcdNumber->display(sum);
}


void subwindow4::on_buttonBox_accepted()
{
    this->close();
}


void subwindow4::on_buttonBox_rejected()
{
    this->close();
}


void subwindow4::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[0];
        QPixmap pixmap(":/leijiaobanfan.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[0];
        ui->label->clear();
    }
    showPrice();
}


void subwindow4::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[1];
        QPixmap pixmap(":/malaxiangguo.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[1];
        ui->label->clear();
    }
    showPrice();
}


void subwindow4::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[2];
        QPixmap pixmap(":/chongcaohuagezitang.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[2];
        ui->label->clear();
    }
    showPrice();
}


void subwindow4::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[3];
        QPixmap pixmap(":/hongyouwanza.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[3];
        ui->label->clear();
    }
    showPrice();
}


void subwindow4::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[4];
        QPixmap pixmap(":/qingchaohaixiangu.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[4];
        ui->label->clear();
    }
    showPrice();
}


void subwindow4::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[5];
        QPixmap pixmap(":/meiguichiyoujifan.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[5];
        ui->label->clear();
    }
    showPrice();
}

