#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //void mousePressEvent(QMouseEvent* m);

    const char* select_kind[7]={"辣度","是否含肉","是否含海鲜","是否含豆制品","是否是面食","是否是甜点或凉菜","是否是汤品"};
    int select_box_state[7]; //checkbox更新
    const char* btntext[5]={"农园","家园","学一","学五","燕南"};
    int dish_select_state[7];
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // void dish_classify();
    // void dish_push_back(std::string& s1, int n1, int rest_id);
    void set_state();
    int* return_state_of_selection();
    void see_dish();
private slots:


    /*void on_dialogButtonBox_accepted();

    void on_dialogButtonBox_rejected();*/
    void on_confirm_button_accepted();
    void on_confirm_button_rejected();

private:
    Ui::MainWindow *ui;
    std::vector<std::string> dish_name[5]; //从0-5分别为农园、家园、学一、学五、燕南
    std::vector<int> dish_price[5];
};
#endif // MAINWINDOW_H
