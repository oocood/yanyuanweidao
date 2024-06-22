// #include "mainwindow.h"
// #include "selectwindow.h"
// //#include<iostream>
// //#include "./ui_mainwindow.h"
// #include<QWidget>
// #include<QCheckBox>
// #include <QBoxLayout>
// #include<QButtonGroup>
// #include<iostream>
// #undef slots
// #define slots Q_SLOTS

// void selectwindow::initial_checkbox_label(){
//     for(int i=0; i<7; ++i){
//         checkbox_label[i] = new QLabel;
//         checkbox_label[i]->setText(select_kind[i]);
//     }
// }
// void selectwindow::set_state(){
//     for(int i=0; i<4; ++i){
//         if(spicy_select[i]->isChecked()) select_box_state[0]=i;
//         else std::cout<<"not selected"<<std::endl;
//     }
//     for(int i=0; i<6; ++i){
//         if(checkbox1[i]->isChecked()) select_box_state[i+1]=1;
//         else std::cout<<"not selected"<<std::endl;
//         if(checkbox2[i]->isChecked()) select_box_state[i+1]=0;
//         else std::cout<<"not selected"<<std::endl;
//     }
//     //按下确认按钮以后输出当前状态：
//     widget_state=1; //表示此窗口的任务结束，可以进行下一步操作
//     for(int i=0; i<7; ++i) std::cout<<select_box_state[i]<<std::endl;
//     this->close();
// }
// int* selectwindow::return_state_of_selection(){
//     return select_box_state;
// }
// selectwindow::selectwindow(QWidget* parent){
//     initial_checkbox_label();
//     //初始化hlayout
//     for(int i=0; i<7; ++i){
//         hlayout[i]=new QHBoxLayout;
//         checkboxgroup[i]=new QButtonGroup;
//     }
//     mainlayout->setSpacing(20);
//     spicy_select[0]=new QCheckBox("不辣");
//     spicy_select[1]=new QCheckBox("微辣");
//     spicy_select[2]=new QCheckBox("中辣");
//     spicy_select[3]=new QCheckBox("特辣");
//     //std::cout<<"no error"<<std::endl;
//     //QButtonGroup* checkboxgroup1 = new QButtonGroup; //生成互斥的checkbox组合
//     //QHBoxLayout* spicyrow_layout = new QHBoxLayout;
//     //std::cout<<"no error"<<std::endl;
//     //spicyrow_layout->addWidget(checkbox_label[0]);
//     hlayout[0]->addWidget(checkbox_label[0]);
//     for(int i=0; i<4; ++i){
//         hlayout[0]->addWidget(spicy_select[i]);
//         checkboxgroup[0]->addButton(spicy_select[i]);
//     }
//     //mainlayout->addLayout(hlayout[0]);
//     for(int i=0; i<6; ++i){
//         checkbox1[i]=new QCheckBox("是");
//         checkbox2[i]=new QCheckBox("否");
//         //QHBoxLayout* rowlayout = new QHBoxLayout;
//         //QButtonGroup* checkboxgroup2 = new QButtonGroup;
//         //checkboxgroup2->addButton(checkbox1[i]);
//         //checkboxgroup2->addButton(checkbox2[i]);
//         //rowlayout->addWidget(checkbox_label[i+1]);
//         //rowlayout->addWidget(checkbox1[i]);
//         //rowlayout->addWidget(checkbox2[i]);
//         checkboxgroup[i+1]->addButton(checkbox1[i]);
//         checkboxgroup[i+1]->addButton(checkbox2[i]);
//         hlayout[i+1]->addWidget(checkbox_label[i+1]);
//         hlayout[i+1]->addWidget(checkbox1[i]);
//         hlayout[i+1]->addWidget(checkbox2[i]);
//         //mainlayout->addLayout(rowlayout);
//     }
//     for(int i=0; i<7; ++i) mainlayout->addLayout(hlayout[i]);
//     confirm_button=new QPushButton;
//     confirm_button->setText("确定");
//     QHBoxLayout* tmplayout = new QHBoxLayout;
//     tmplayout->addWidget(confirm_button);
//     mainlayout->addLayout(tmplayout);
//     this->setLayout(mainlayout);
//     this->resize(400,300);
//     this->setWindowTitle("口味选择");
//     //信号槽函数
//     //关联确认按钮到确认状态
//     connect(confirm_button, &QPushButton::clicked, this, &selectwindow::set_state);
//     connect(confirm_button, &QPushButton::clicked, this, &selectwindow::setup_newwidget);
//     //改变辣度
//     /*connect(spicy_select[0], &QCheckBox::stateChanged, this, &selectwindow::change_state1);
//     connect(spicy_select[1], &QCheckBox::stateChanged, this, &selectwindow::change_state1);
//     connect(spicy_select[2], &QCheckBox::stateChanged, this, &selectwindow::change_state1);
//     connect(spicy_select[3], &QCheckBox::stateChanged, this, &selectwindow::change_state1);
//     //改变其他选择的状态
//     connect(checkbox1[0], &QCheckBox::stateChanged, this, &selectwindow::change_state2);
//     connect(checkbox2[0], &QCheckBox::stateChanged, this, &selectwindow::change_state2);

//     connect(checkbox1[1], &QCheckBox::stateChanged, this, &selectwindow::change_state3);
//     connect(checkbox2[1], &QCheckBox::stateChanged, this, &selectwindow::change_state3);

//     connect(checkbox1[2], &QCheckBox::stateChanged, this, &selectwindow::change_state4);
//     connect(checkbox2[2], &QCheckBox::stateChanged, this, &selectwindow::change_state4);

//     connect(checkbox1[3], &QCheckBox::stateChanged, this, &selectwindow::change_state5);
//     connect(checkbox2[3], &QCheckBox::stateChanged, this, &selectwindow::change_state5);

//     connect(checkbox1[4], &QCheckBox::stateChanged, this, &selectwindow::change_state6);
//     connect(checkbox2[4], &QCheckBox::stateChanged, this, &selectwindow::change_state6);

//     connect(checkbox1[5], &QCheckBox::stateChanged, this, &selectwindow::change_state7);
//     connect(checkbox2[5], &QCheckBox::stateChanged, this, &selectwindow::change_state7);*/
// }
// void selectwindow::setup_newwidget(){
//     int* tmp_state_ptr = return_state_of_selection();
//     MainWindow* w = new MainWindow(nullptr);
//     //QLineEdit* le = new QLineEdit(w);
//     //QPushButton* button[5]={0};
//     QLabel* label = new QLabel(w);
//     label->move(350, 50);
//     label->setText("请选择您要就餐的食堂");
//     label->setFixedSize(200,20);
//     w->show();
// }
// selectwindow::~selectwindow(){
//     //delete this;
// }
