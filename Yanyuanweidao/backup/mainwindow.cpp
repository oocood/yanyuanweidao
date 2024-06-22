#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"map1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("燕园味道");
    QPixmap background(":/mainbeijing.png");
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(background.scaled(this->size(), Qt::IgnoreAspectRatio)));
    this->setPalette(palette);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_dialogButtonBox_accepted()
{
    map1* _map1 = new map1();
    _map1 -> show();
}


void MainWindow::on_dialogButtonBox_rejected()
{
    this -> close();
}
