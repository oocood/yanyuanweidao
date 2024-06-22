#include "subwindow1.h"
#include "ui_subwindow1.h"

subwindow1::subwindow1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::subwindow1)
{
    ui->setupUi(this);
    this->setWindowTitle("农园菜单");
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
}

subwindow1::~subwindow1()
{
    delete ui;
}


void subwindow1::showPrice()
{
    ui->lcdNumber->display(sum);
}


void subwindow1::on_buttonBox_accepted()
{
    this->close();
}

void subwindow1::on_buttonBox_rejected()
{
    this->close();
}


void subwindow1::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[0];
        QPixmap pixmap(":/mutongjiroufan.png");
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




void subwindow1::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[1];
        QPixmap pixmap(":/yanxunlaroufan.png");
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


void subwindow1::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[2];
        QPixmap pixmap(":/mutongxiangganfan.png");
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


void subwindow1::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[3];
        QPixmap pixmap(":/xiaochaorou.png");
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


void subwindow1::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[4];
        QPixmap pixmap(":/zhuroudunfentiao.png");
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


void subwindow1::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[5];
        QPixmap pixmap(":/xiangcuibianrou.png");
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


void subwindow1::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[6];
        QPixmap pixmap(":/shanchenglaziji.png");
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


void subwindow1::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[7];
        QPixmap pixmap(":/haidaipaigutang.png");
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


void subwindow1::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[8];
        QPixmap pixmap(":/yangzhouchaofan.png");
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


void subwindow1::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[9];
        QPixmap pixmap(":/heidouzhushoutang.png");
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


void subwindow1::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[10];
        QPixmap pixmap(":/dongguapaigutang.png");
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


void subwindow1::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[11];
        QPixmap pixmap(":/lachaokongxincai.png");
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


void subwindow1::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[12];
        QPixmap pixmap(":/yangrouhuimian.png");
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


void subwindow1::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[13];
        QPixmap pixmap(":/dapanjibanmian.png");
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


void subwindow1::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        sum += price[14];
        QPixmap pixmap(":/pisa.png");
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

