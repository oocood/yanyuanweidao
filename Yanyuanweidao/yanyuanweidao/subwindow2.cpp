#include "subwindow2.h"
#include "ui_subwindow2.h"

subwindow2::subwindow2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::subwindow2)
{
    ui->setupUi(this);
    this->setWindowTitle("学一菜单");
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
    ui->checkBox_11->setStyleSheet("color: black;");
    ui->checkBox_12->setStyleSheet("color: black;");
    ui->checkBox_13->setStyleSheet("color: black;");
    ui->checkBox_14->setStyleSheet("color: black;");
    ui->checkBox_15->setStyleSheet("color: black;");
    ui->checkBox_16->setStyleSheet("color: black;");
}

subwindow2::~subwindow2()
{
    delete ui;
}

void subwindow2::showPrice()
{
    ui->lcdNumber->display(sum);
}


void subwindow2::on_buttonBox_accepted()
{
    this->close();
}


void subwindow2::on_buttonBox_rejected()
{
    this->close();
}



void subwindow2::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[0];
        QPixmap pixmap(":/xiangyangniuroumian.png");
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


void subwindow2::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[1];
        QPixmap pixmap(":/malaxiaolongxiafan.png");
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


void subwindow2::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[2];
        QPixmap pixmap(":/hongshaoshizitou.png");
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


void subwindow2::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[3];
        QPixmap pixmap(":/zhabingqiling.png");
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


void subwindow2::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[4];
        QPixmap pixmap(":/xiaosurou.png");
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


void subwindow2::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[5];
        QPixmap pixmap(":/fanqieniuroutang.png");
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


void subwindow2::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[6];
        QPixmap pixmap(":/luobopaigutang.png");
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


void subwindow2::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[7];
        QPixmap pixmap(":/xiangcaizhuroutang.png");
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


void subwindow2::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[8];
        QPixmap pixmap(":/suantangfeiniu.png");
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


void subwindow2::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[9];
        QPixmap pixmap(":/xianglazhangzhongbao.png");
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


void subwindow2::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[10];
        QPixmap pixmap(":/xianglayangbanggu.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[10];
        ui->label->clear();
    }
    showPrice();
}


void subwindow2::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[11];
        QPixmap pixmap(":/lengluniurou.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[11];
        ui->label->clear();
    }
    showPrice();
}


void subwindow2::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[12];
        QPixmap pixmap(":/luchizhong.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[12];
        ui->label->clear();
    }
    showPrice();
}


void subwindow2::on_checkBox_16_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[13];
        QPixmap pixmap(":/malaxiaolongxia.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[13];
        ui->label->clear();
    }
    showPrice();
}


void subwindow2::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[14];
        QPixmap pixmap(":/huadanxiaren.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[14];
        ui->label->clear();
    }
    showPrice();
}


void subwindow2::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[15];
        QPixmap pixmap(":/tudoudunji.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[15];
        ui->label->clear();
    }
    showPrice();
}

