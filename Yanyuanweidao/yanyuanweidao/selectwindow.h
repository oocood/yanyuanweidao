// #ifndef SELECTWINDOW_H
// #define SELECTWINDOW_H

// #include <QMainWindow>
// #include<QPushButton>
// #include<QLabel>
// //#include<QListWidget>
// //#include<vector>
// //#include<string>
// #include<QCheckBox>
// #include<QBoxLayout>

// class selectwindow:public QWidget{
//     Q_OBJECT
// private:
//     QCheckBox* spicy_select[4]={0}; //专门用来存储辣度选择的checkbox
//     QCheckBox* checkbox1[6]={0};
//     QCheckBox* checkbox2[6]={0};
//     QLabel* checkbox_label[7]={0};
//     QVBoxLayout* mainlayout = new QVBoxLayout;
//     QHBoxLayout* hlayout[7]={0};
//     QButtonGroup* checkboxgroup[7]={0};
//     QPushButton* confirm_button;
// public:
//     int widget_state = 0;
//     const char* select_kind[7]={"辣度","是否含肉","是否含海鲜","是否含豆制品","是否是面食","是否是甜点或凉菜","是否是汤品"};
//     int select_box_state[7]; //checkbox更新
//     /*void change_state1(); //change the state of spicy rank
//     void change_state2(); //change the state of if contain meat
//     void change_state3(); //change the state of if contain seafood
//     void change_state4(); //change the state of if contain soybean
//     void change_state5(); //change the state of if noodle food
//     void change_state6(); //change the state of if desert or colddish
//     void change_state7(); //change the state of if soup*/
//     int* return_state_of_selection(); //在搜索之前通过此接口返回选择状态
//     void set_state(); //在按下确定键的时候设置当前状态
//     void setup_newwidget();
//     selectwindow(QWidget* parent=nullptr);
//     void initial_checkbox_label();
//     ~selectwindow();
// };


// #endif
