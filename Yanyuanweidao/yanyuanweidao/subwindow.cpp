#include "subwindow.h"
#include "ui_subwindow.h"
#undef slots
//#include "./dish_group/select.h"
#define slots Q_SLOTS
#include<tuple>

subwindow::subwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::subwindow)
{
    ui->setupUi(this);
    this->setWindowTitle("家园菜单");
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
    ui->checkBox_17->setStyleSheet("color: black;");
    ui->checkBox_18->setStyleSheet("color: black;");
}



subwindow::~subwindow()
{
    delete ui;
}


void subwindow::on_buttonBox_rejected()
{
    this->close();
}


void subwindow::on_buttonBox_accepted()
{
    this->close();
}

void subwindow::showPrice()
{
    ui->lcdNumber->display(sum);
}

void subwindow::on_checkBox_2_stateChanged(int arg1)
{

    if(arg1 == Qt::Checked)
    {
        sum += price[0];
        QPixmap pixmap(":/qingjiaoyupian.png");
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


void subwindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[1];
        QPixmap pixmap(":/fanqieyupian.png");
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



void subwindow::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[2];
        QPixmap pixmap(":/jiaoyouluobosi.png");
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


void subwindow::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[3];
        QPixmap pixmap(":/baizhuojielan.png");
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


void subwindow::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[4];
        QPixmap pixmap(":/huotuidonggua.png");
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


void subwindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[5];
        QPixmap pixmap(":/hongzaogouqitang.png");
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


void subwindow::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[6];
        QPixmap pixmap(":/suanlatang.png");
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


void subwindow::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[7];
        QPixmap pixmap(":/fenzhengrou.png");
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


void subwindow::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[8];
        QPixmap pixmap(":/xiaochaoroufan.png");
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


void subwindow::on_checkBox_17_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[9];
        QPixmap pixmap(":/niurougalifan.png");
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


void subwindow::on_checkBox_16_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[10];
        QPixmap pixmap(":/jiaoyekaoyufan.png");
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


void subwindow::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[11];
        QPixmap pixmap(":/malaxiangguofan.png");
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


void subwindow::on_checkBox_18_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[12];
        QPixmap pixmap(":/changfen.png");
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


void subwindow::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[13];
        QPixmap pixmap(":/rihanbanfan.png");
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


void subwindow::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[14];
        QPixmap pixmap(":/lanzhouniuroumian.png");
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


void subwindow::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[15];
        QPixmap pixmap(":/kaonang.png");
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


void subwindow::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[16];
        QPixmap pixmap(":/doujiangshaoqiezi.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[16];
        ui->label->clear();
    }
    showPrice();
}


void subwindow::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[17];
        QPixmap pixmap(":/huoguo.png");
        QSize labelSize = ui->label->size();
        QPixmap scaledPixmap = pixmap.scaled(labelSize,Qt::KeepAspectRatio);
        ui->label->setPixmap(scaledPixmap);
    }
    else if(arg1 == Qt::Unchecked)
    {
        sum -= price[17];
        ui->label->clear();
    }
    showPrice();
}

// void subwindow::set_dish_filter_id(){
//     vector<string> tmp_dish_name;
//     vector<int> resturant_id;
//     int filter_elements[7]={0, 1, 0, 0, 0, 0, 0};
//     std::tie(tmp_dish_name, dish_filter_id, resturant_id) = select(filter_elements);
//     for(int  i=0; i<7; ++i) std::cout<<dish_filter_id[i]<<std::endl;
// }
