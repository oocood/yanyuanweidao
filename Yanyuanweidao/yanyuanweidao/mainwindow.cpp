
//#ifndef SELECT_H
//#define SELECT_H
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMouseEvent>
#include"map1.h"
#include<iostream>
#include<vector>
#include"subwindow.h"
#include<string>
#undef slots
//#include"./dish_group/select.h"
#define slots Q_SLOTS
using namespace std;


void MainWindow::set_state(){
    /*for(int i=0; i<4; ++i){
        if(spicy_select[i]->isChecked()) select_box_state[0]=i;
        else std::cout<<"not selected"<<std::endl;
    }*/
    if(ui->spicy_checkbox1->isChecked()) select_box_state[0]=0;
    if(ui->spicy_checkbox2->isChecked()) select_box_state[0]=1;
    if(ui->spicy_checkbox3->isChecked()) select_box_state[0]=2;
    if(ui->spicy_checkbox4->isChecked()) select_box_state[0]=3;

    /*for(int i=0; i<6; ++i){
        if(checkbox1[i]->isChecked()) select_box_state[i+1]=1;
        else std::cout<<"not selected"<<std::endl;
        if(checkbox2[i]->isChecked()) select_box_state[i+1]=0;
        else std::cout<<"not selected"<<std::endl;
    }*/
    //meat selection
    if(ui->meat_checkbox1->isChecked()) select_box_state[1]=1;
    if(ui->meat_checkbox2->isChecked()) select_box_state[1]=0;
    //seafood selection
    if(ui->seafood_checkbox1->isChecked()) select_box_state[2]=1;
    if(ui->seafood_checkbox2->isChecked()) select_box_state[2]=0;
    //soybean selection
    if(ui->soybean_checkbox1->isChecked()) select_box_state[3]=1;
    if(ui->soybean_checkbox2->isChecked()) select_box_state[3]=0;
    //noodle food selection
    if(ui->noodle_checkbox1->isChecked()) select_box_state[4]=1;
    if(ui->noodle_checkbox2->isChecked()) select_box_state[4]=0;
    //colddish selection
    if(ui->colddish_checkbox1->isChecked()) select_box_state[5]=1;
    if(ui->colddish_checkbox2->isChecked()) select_box_state[5]=0;
    //soup selection
    if(ui->soup_checkbox1->isChecked()) select_box_state[6]=1;
    if(ui->soup_checkbox2->isChecked()) select_box_state[6]=0;
    //
    //按下确认按钮以后输出当前状态：
    /*widget_state=1; //表示此窗口的任务结束，可以进行下一步操作*/
    for(int i=0; i<7; ++i) std::cout<<select_box_state[i]<<std::endl;
    for(int i=0; i<7; ++i) dish_select_state[i]=select_box_state[i];
    //this->close();
}
int* MainWindow::return_state_of_selection(){
    return select_box_state;
}
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

void MainWindow::on_confirm_button_accepted()
{
    set_state(); //按下确认按钮以后锁定选择并且返回菜偏好状态
    // dish_classify();
    // see_dish();
    map1* _map1 = new map1();
    _map1->set_state(dish_select_state);
    _map1->dish_classify();
    _map1 -> show();
}


 // void MainWindow::mousePressEvent(QMouseEvent* m)
 // {
 //     if(1){
    //  QPoint position = m->pos();
    //  int x = position.x();
    // int y = position.y();
    //  cout<<x<<","<<y;
 //        int x = m->x();
 //        int y = m->y();
 //        cout<<x<<" "<<y<<endl;
 //     }
 // }

void MainWindow::on_confirm_button_rejected()
{
    this -> close();
}

// void MainWindow::dish_push_back(string& s1, int n1, int rest_id){
//     dish_name[rest_id].push_back(s1);
//     dish_price[rest_id].push_back(n1);
// }
// void MainWindow::dish_classify(){
//     std::vector<string> tmp1;
//     std::vector<int> tmp2;
//     std::vector<int> tmp3;
//     std::tie(tmp1, tmp2, tmp3) = select(dish_select_state);
//     int length = tmp1.size();
//     std::cout<<length<<std::endl;
//     for(int i=0; i<length; ++i){
//         //std::cout<<tmp3[i]<<std::endl;
//         /*if(tmp3[i]==resturant_name[0]) dish_push_back(tmp1[i], tmp2[i], 0);
//         else if(tmp3[i]==resturant_name[1]) dish_push_back(tmp1[i], tmp2[i], 1);
//         else if(tmp3[i]==resturant_name[2]) dish_push_back(tmp1[i], tmp2[i], 2);
//         else if(tmp3[i]==resturant_name[3]) dish_push_back(tmp1[i], tmp2[i], 3);
//         else if(tmp3[i]==resturant_name[4]) dish_push_back(tmp1[i], tmp2[i], 4);
//         else cout<<"something wrong with the resturant name"<<endl;*/
//         dish_push_back(tmp1[i], tmp2[i], tmp3[i]);
//     }
// }
// void MainWindow::see_dish(){
//     for(int j=0; j<5; ++j){
//         for(size_t i=0; i<dish_name[j].size(); ++i){
//             cout<<dish_name[j][i]<<" "<<dish_price[j][i]<<endl;
//         }
//     }
// }
// //#endif
