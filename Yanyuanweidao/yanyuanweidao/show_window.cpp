// #include "show_window.h".h"
// #include "./ui_mainwindow.h"
// #include<QWidget>
// #include <QBoxLayout>
// #undef slots
// #include "./dish_group/select.h"
// #define slots Q_SLOTS
// #include<tuple>
// #include<vector>
// #include "map1.h"
// #include <QPushButton>

// show_window::show_window(QWidget *parent, int* select_state)
//     : QMainWindow(parent)
//     , ui(new Ui::MainWindow)
// {
//     ui->setupUi(this);
//     //通过构造函数初始化筛选条件
//     for(int i=0; i<7; ++i) dish_select_state[i]=select_state[i];
//     dish_classify();
//     cout<<"success in dish_classify"<<endl;
//     for(int i=0; i<5; ++i){
//         button[i]=new QPushButton(this);
//         button[i]->resize(80,80);
//         button[i]->move(120+(40+80)*i, 100);
//         button[i]->setText(btntext[i]);
//     }
//     this->resize(800,300);
//     connect(button[0],&QPushButton::clicked, this, &show_window::create_sub_windows1);
//     connect(button[1],&QPushButton::clicked, this, &show_window::create_sub_windows2);
//     connect(button[2],&QPushButton::clicked, this, &show_window::create_sub_windows3);
//     connect(button[3],&QPushButton::clicked, this, &show_window::create_sub_windows4);
//     connect(button[4],&QPushButton::clicked, this, &show_window::create_sub_windows5);
//     //导航开始按钮
//     navigate_button = new QPushButton(this);
//     navigate_button->move(350, 250);
//     navigate_button->setText("开始导航");
//     //导航按钮信号槽函数
//     connect(navigate_button, &QPushButton::clicked, this, &show_window::create_navigate_map);
// }
// void show_window::create_sub_windows1(){
//     /*QWidget* w1 = new QWidget(NULL);
//     w1->resize(400,400);
//     QLabel* le = new QLabel(w1);
//     le->setText(btntext[0]);
//     le->setFixedSize(30,15);
//     le->move(180, 40);
//     w1->show();*/
//     int dish_num1 = dish_name[0].size();
//     if(dish_num1>0) create_list_widget(0);
//     else{
//         QWidget* w1 = new QWidget(NULL);
//         w1->resize(400,200);
//         QLabel* le = new QLabel(w1);
//         le->setText("没有相关菜品信息");
//         le->setFixedSize(100,15);
//         le->move(150, 40);
//         w1->show();
//     }
// }
// void show_window::create_sub_windows2(){
//     /*QWidget* w1 = new QWidget(NULL);
//     w1->resize(400,400);
//     QLabel* le = new QLabel(w1);
//     le->setText(btntext[1]);
//     le->setFixedSize(30,15);
//     le->move(180, 40);
//     w1->show();*/
//     int dish_num2 = dish_name[1].size();
//     if(dish_num2>0) create_list_widget(1);
//     else{
//         QWidget* w1 = new QWidget(NULL);
//         w1->resize(400,200);
//         QLabel* le = new QLabel(w1);
//         le->setText("没有相关菜品信息");
//         le->setFixedSize(100,15);
//         le->move(150, 40);
//         w1->show();
//     }
// }
// void show_window::create_sub_windows3(){
//     /*QWidget* w1 = new QWidget(NULL);
//     w1->resize(400,400);
//     QLabel* le = new QLabel(w1);
//     le->setText(btntext[2]);
//     le->setFixedSize(30,15);
//     le->move(180, 40);
//     w1->show();*/
//     int dish_num3 = dish_name[2].size();
//     if(dish_num3>0) create_list_widget(2);
//     else{
//         QWidget* w1 = new QWidget(NULL);
//         w1->resize(400,200);
//         QLabel* le = new QLabel(w1);
//         le->setText("没有相关菜品信息");
//         le->setFixedSize(100,15);
//         le->move(150, 40);
//         w1->show();
//     }
// }
// void show_window::create_sub_windows4(){
//     /*QWidget* w1 = new QWidget(NULL);
//     w1->resize(400,400);
//     QLabel* le = new QLabel(w1);
//     le->setText(btntext[3]);
//     le->setFixedSize(30,15);
//     le->move(180, 40);
//     w1->show();*/
//     int dish_num4 = dish_name[3].size();
//     if(dish_num4>0) create_list_widget(3);
//     else{
//         QWidget* w1 = new QWidget(NULL);
//         w1->resize(400,200);
//         QLabel* le = new QLabel(w1);
//         le->setText("没有相关菜品信息");
//         le->setFixedSize(100,15);
//         le->move(150, 40);
//         w1->show();
//     }
// }
// void show_window::create_sub_windows5(){
//     /*QWidget* w1 = new QWidget(NULL);
//     w1->resize(400,400);
//     QLabel* le = new QLabel(w1);
//     le->setText(btntext[4]);
//     le->setFixedSize(30,15);
//     le->move(180, 40);
//     w1->show();*/
//     int dish_num5 =dish_name[4].size();
//     if(dish_num5>0) create_list_widget(4);
//     else{
//         QWidget* w1 = new QWidget(NULL);
//         w1->resize(400,200);
//         QLabel* le = new QLabel(w1);
//         le->setText("没有相关菜品信息");
//         le->setFixedSize(100,15);
//         le->move(150, 40);
//         w1->show();
//     }
// }
// void show_window::create_list_widget(int nmode){
//     QListWidget* view = new QListWidget;
//     view->setViewMode(QListView::ListMode);
//     view->setFlow(QListView::LeftToRight);
//     view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//     view->setHorizontalScrollMode(QListWidget::ScrollPerPixel);
//     int dish_num = dish_name[nmode].size(); //筛选完以后判断菜品数量
//     for(int i=0; i<dish_num; ++i){
//         //QListWidgetItem *item = new QListWidgetItem(QString::number(i));
//         //QListWidgetItem *item = new QListWidgetItem(QString::fromStdString(dish_name[nmode][i]));
//         QString qstr = QString::fromLocal8Bit(dish_name[nmode][i].c_str());
//         QListWidgetItem *item = new QListWidgetItem(qstr);
//         //设置文字居中
//         item->setTextAlignment(Qt::AlignCenter);
//         view->addItem(item);
//     }
//     view->setStyleSheet(R"(
//     QListWidget { outline: none; border:1px solid gray; color: black; }
//     QListWidget::Item { width: 200px; height: 200px; }
//     QListWidget::Item:hover { background: #4CAF50; color: white; }
//     QListWidget::item:selected { background: #e7e7e7; color: #f44336; }
//     QListWidget::item:selected:!active { background: lightgreen; }
//                     )");
//     view->show();
// }
// void show_window::create_navigate_map(){
//     this->close();
//     /*map1* _map1 = new map1(NULL);
//     _map1 -> show();*/
// }
// void show_window::dish_push_back(string& s1, int n1, int rest_id){
//     dish_name[rest_id].push_back(s1);
//     dish_price[rest_id].push_back(n1);
// }
// void show_window::dish_classify(){
//     std::vector<string> tmp1;
//     std::vector<int> tmp2;
//     std::vector<int> tmp3;
//     std::tie(tmp1, tmp2, tmp3) = select(dish_select_state);
//     int length = tmp1.size();
//     cout<<length<<endl;
//     for(int i=0; i<length; ++i){
//         cout<<tmp3[i]<<endl;
//         /*if(tmp3[i]==resturant_name[0]) dish_push_back(tmp1[i], tmp2[i], 0);
//         else if(tmp3[i]==resturant_name[1]) dish_push_back(tmp1[i], tmp2[i], 1);
//         else if(tmp3[i]==resturant_name[2]) dish_push_back(tmp1[i], tmp2[i], 2);
//         else if(tmp3[i]==resturant_name[3]) dish_push_back(tmp1[i], tmp2[i], 3);
//         else if(tmp3[i]==resturant_name[4]) dish_push_back(tmp1[i], tmp2[i], 4);
//         else cout<<"something wrong with the resturant name"<<endl;*/
//         dish_push_back(tmp1[i], tmp2[i], tmp3[i]);
//     }
// }
// show_window::~show_window()
// {
//     delete ui;
// }
