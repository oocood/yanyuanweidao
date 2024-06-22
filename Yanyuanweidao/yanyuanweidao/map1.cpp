#include "map1.h"
#include "ui_map1.h"
#include<QMouseEvent>
#include<QDebug>
#include"subwindow.h"
#include"subwindow1.h"
#include"subwindow2.h"
#include"subwindow3.h"
#include"subwindow4.h"
#include"navigate.h"
#include<ui_subwindow.h>
#include<ui_subwindow1.h>
#include<ui_subwindow2.h>
#include<ui_subwindow3.h>
#include<ui_subwindow4.h>
#include<QPainter>
#include<iostream>
#include<vector>
#include"subwindow.h"
#include<string>
#include<qstring.h>
#undef slots
#include"./dish_group/select.h"
#define slots Q_SLOTS
using namespace std;

map1::map1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::map1)
{
    ui->setupUi(this);
    this->setWindowTitle("地图");
    QPixmap background(":/map.png");
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(background.scaled(this->size(), Qt::IgnoreAspectRatio)));
    this->setPalette(palette);
    x1 = 0, y1=0; //没初始化导致的惨案
}

map1::~map1()
{
    delete ui;
}

// void map1::mousePressEvent(QMouseEvent* m)
// {
//     QPoint position = m->pos();
//     int x = position.x();
//     int y = position.y();
//     qDebug()<<"("<<x<<","<<y<<")";
// }

//从0-5分别为农园、家园、学一、学五、燕南
void map1::on_pushButton_5_clicked() //家园
{
    cout<<"select jiayuan"<<endl;
    is = true;
    number = 0;
    subwindow* _subwindow = new subwindow();
    size_t len = dish_name[1].size();
    for(size_t i=0; i<len; ++i){
        //cout<<dish_name[1][i]<<","<<_subwindow->ui->checkBox->text().toStdString()<<endl;
        if(_subwindow->ui->checkBox->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_2->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_2->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_3->text()==QString::fromLocal8Bit(dish_name[1][i].c_str())) _subwindow->ui->checkBox_3->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_4->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_4->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_5->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_5->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_6->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_6->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_7->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_7->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_8->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_8->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_9->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_9->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_10->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_10->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_11->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_11->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_12->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_12->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_13->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_13->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_14->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_14->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_15->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_15->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_16->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_16->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_17->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_17->setStyleSheet("color: red;");
        if(_subwindow->ui->checkBox_18->text()==QString::fromLocal8Bit(dish_name[1][i])) _subwindow->ui->checkBox_18->setStyleSheet("color: red;");
    }
    _subwindow->show();

}


void map1::on_pushButton_1_clicked() //学五
{
    is = true;
    number = 3;
    subwindow3* _subwindow3 = new subwindow3();
    size_t len = dish_name[3].size();
    for(size_t i=0; i<len; ++i){
        if(_subwindow3->ui->checkBox->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_2->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_2->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_3->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_3->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_4->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_4->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_5->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_5->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_6->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_6->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_7->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_7->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_8->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_8->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_9->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_9->setStyleSheet("color: red;");
        if(_subwindow3->ui->checkBox_10->text()==QString::fromLocal8Bit(dish_name[3][i])) _subwindow3->ui->checkBox_10->setStyleSheet("color: red;");
    }
    _subwindow3->show();
}


void map1::on_pushButton_2_clicked() //燕南
{
    is = true;
    number = 4;
    subwindow4* _subwindow4 = new subwindow4();
    size_t len = dish_name[4].size();
    for(size_t i=0; i<len; ++i){
        if(_subwindow4->ui->checkBox->text()==QString::fromLocal8Bit(dish_name[4][i])) _subwindow4->ui->checkBox->setStyleSheet("color: red;");
        if(_subwindow4->ui->checkBox_2->text()==QString::fromLocal8Bit(dish_name[4][i])) _subwindow4->ui->checkBox_2->setStyleSheet("color: red;");
        if(_subwindow4->ui->checkBox_3->text()==QString::fromLocal8Bit(dish_name[4][i])) _subwindow4->ui->checkBox_3->setStyleSheet("color: red;");
        if(_subwindow4->ui->checkBox_4->text()==QString::fromLocal8Bit(dish_name[4][i])) _subwindow4->ui->checkBox_4->setStyleSheet("color: red;");
        if(_subwindow4->ui->checkBox_5->text()==QString::fromLocal8Bit(dish_name[4][i])) _subwindow4->ui->checkBox_5->setStyleSheet("color: red;");
        if(_subwindow4->ui->checkBox_6->text()==QString::fromLocal8Bit(dish_name[4][i])) _subwindow4->ui->checkBox_6->setStyleSheet("color: red;");
    }
    _subwindow4->show();
}


void map1::on_pushButton_4_clicked() //农园
{
    is = true;
    number = 1;
    subwindow1* _subwindow1 = new subwindow1();
    size_t len = dish_name[0].size();
    for(size_t i=0; i<len; ++i){
        if(_subwindow1->ui->checkBox->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_2->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_2->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_3->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_3->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_4->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_4->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_5->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_5->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_6->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_6->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_7->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_7->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_8->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_8->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_9->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_9->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_10->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_10->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_11->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_11->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_12->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_12->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_13->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_13->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_14->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_14->setStyleSheet("color: red;");
        if(_subwindow1->ui->checkBox_15->text()==QString::fromLocal8Bit(dish_name[0][i])) _subwindow1->ui->checkBox_15->setStyleSheet("color: red;");
    }
    _subwindow1->show();
}


void map1::on_pushButton_3_clicked() //学一
{
    is = true;
    number = 2;
    subwindow2* _subwindow2 = new subwindow2();
    size_t len = dish_name[2].size();
    for(size_t i=0; i<len; ++i){
        if(_subwindow2->ui->checkBox->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_2->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_2->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_3->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_3->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_4->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_4->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_5->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_5->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_6->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_6->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_7->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_7->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_8->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_8->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_9->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_9->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_10->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_10->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_11->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_11->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_12->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_12->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_13->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_13->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_14->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_14->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_15->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_15->setStyleSheet("color: red;");
        if(_subwindow2->ui->checkBox_16->text()==QString::fromLocal8Bit(dish_name[2][i])) _subwindow2->ui->checkBox_16->setStyleSheet("color: red;");
    }
    _subwindow2->show();
}

void map1::mousePressEvent(QMouseEvent* m)
{
    if(is){
        x1 = m->position().x();
        y1 = m->position().y();
        this->update();
    }
}

void map1::paintEvent(QPaintEvent*)
{
    if(is){
    QPainter painter(this);
    QPen pen;
    // pen.setWidth(5);
    // pen.setColor(QColor(100,150,230));
    // pen.setStyle(Qt::SolidLine);
    // pen.setCapStyle(Qt::RoundCap);
    // painter.setPen(pen);
    // painter.drawLine(QPoint(0,0),QPoint(x1,y1));
    // this->update();
    //cout<<x1<<","<<y1<<","<<number<<endl;
    Navigate *p = new Navigate(x1,y1,number);
    if(p==nullptr) cout<<"null pointer of painter"<<endl;
    int n = p->get_sum();

    for(int i=1;i<=n;i++)
    {
        Path t = p->get_path();

        pen.setWidth(5);
        pen.setColor(QColor(100,150,230));
        pen.setStyle(Qt::SolidLine);
        pen.setCapStyle(Qt::RoundCap);
        painter.setPen(pen);
        painter.drawLine(QPoint(t.x0(),t.y0()),QPoint(t.x(),t.y()));
    }
    this->update();
    delete p;
    }
}

void map1::dish_push_back(string& s1, int n1, int rest_id){
    dish_name[rest_id].push_back(s1);
    dish_price[rest_id].push_back(n1);
}
void map1::dish_classify(){
    std::vector<string> tmp1;
    std::vector<int> tmp2;
    std::vector<int> tmp3;
    std::tie(tmp1, tmp2, tmp3) = select(dish_select_state);
    int length = tmp1.size();
    std::cout<<length<<std::endl;
    for(int i=0; i<length; ++i){
        //std::cout<<tmp3[i]<<std::endl;
        /*if(tmp3[i]==resturant_name[0]) dish_push_back(tmp1[i], tmp2[i], 0);
        else if(tmp3[i]==resturant_name[1]) dish_push_back(tmp1[i], tmp2[i], 1);
        else if(tmp3[i]==resturant_name[2]) dish_push_back(tmp1[i], tmp2[i], 2);
        else if(tmp3[i]==resturant_name[3]) dish_push_back(tmp1[i], tmp2[i], 3);
        else if(tmp3[i]==resturant_name[4]) dish_push_back(tmp1[i], tmp2[i], 4);
        else cout<<"something wrong with the resturant name"<<endl;*/
        dish_push_back(tmp1[i], tmp2[i], tmp3[i]);
    }
}
void map1::set_state(int *dish_state){
    for(int i=0; i<7; ++i) dish_select_state[i]=dish_state[i];
}
