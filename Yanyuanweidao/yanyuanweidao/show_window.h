// #ifndef MAINWINDOW_H
// #define MAINWINDOW_H

// #include <QMainWindow>
// #include<QPushButton>
// #include<QLabel>
// #include<QListWidget>
// #include<vector>
// #include<string>

// QT_BEGIN_NAMESPACE
// namespace Ui {
// class MainWindow;
// }
// QT_END_NAMESPACE

// class show_window: public QMainWindow
// {
//     Q_OBJECT

// public:
//     const char* btntext[5]={"农园","家园","学一","学五","燕南"};
//     int dish_select_state[7];
//     void create_list_widget(int nmode);
//     void create_navigate_map();
//     show_window(QWidget *parent = nullptr, int* select_state={});
//     void dish_classify();
//     void create_sub_windows1();
//     void create_sub_windows2();
//     void create_sub_windows3();
//     void create_sub_windows4();
//     void create_sub_windows5();
//     void dish_push_back(std::string& s1, int n1, int rest_id);
//     ~show_window();

// private:
//     Ui::MainWindow *ui;
//     QPushButton* button[5] = {0};
//     std::vector<std::string> dish_name[5];
//     std::vector<int> dish_price[5];
//     QPushButton *navigate_button;

//     //std::vector<std::string> resturant[5];
//     //QWidget* sub_windows[5] = {0};
// };
// #endif // MAINWINDOW_H
