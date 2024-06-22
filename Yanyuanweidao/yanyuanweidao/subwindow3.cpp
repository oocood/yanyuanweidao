#include "subwindow3.h"
#include "ui_subwindow3.h"

subwindow3::subwindow3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::subwindow3)
{
    ui->setupUi(this);
    this->setWindowTitle("学五菜单");
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
    ui->checkBox_7->setStyleSheet("color: black;");
    ui->checkBox_8->setStyleSheet("color: black;");
    ui->checkBox_9->setStyleSheet("color: black;");
    ui->checkBox_10->setStyleSheet("color: black;");
}

subwindow3::~subwindow3()
{
    delete ui;
}

void subwindow3::showPrice()
{
    ui->lcdNumber->display(sum);
}
void subwindow3::on_buttonBox_accepted()
{
    this->close();
}


void subwindow3::on_buttonBox_rejected()
{
    this->close();
}


void subwindow3::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[0];
        QPixmap pixmap(":/kaoroubanfan.png");
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


void subwindow3::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[1];
        QPixmap pixmap(":/jirouhanbao.png");
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


void subwindow3::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[2];
        QPixmap pixmap(":/xueyuhanbao.png");
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


void subwindow3::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[3];
        QPixmap pixmap(":/doufuhaixiantang.png");
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


void subwindow3::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[4];
        QPixmap pixmap(":/niupai.png");
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


void subwindow3::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[5];
        QPixmap pixmap(":/zhashutiao.png");
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


void subwindow3::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[6];
        QPixmap pixmap(":/dajiangjunjipaifan.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[6];
        ui->label->clear();
    }
    showPrice();
}


void subwindow3::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[7];
        QPixmap pixmap(":/roumofensi.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[7];
        ui->label->clear();
    }
    showPrice();
}


void subwindow3::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[8];
        QPixmap pixmap(":/zhishiniuroujufan.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[8];
        ui->label->clear();
    }
    showPrice();
}


void subwindow3::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[9];
        QPixmap pixmap(":/zhajifan.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[9];
        ui->label->clear();
    }
    showPrice();
}

