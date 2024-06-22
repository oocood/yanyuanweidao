#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QWidget>
#include<QLCDNumber>
#include<vector>

namespace Ui {
class subwindow;
}

class subwindow : public QWidget
{
    Q_OBJECT

public:
    Ui::subwindow *ui;
    explicit subwindow(QWidget *parent = nullptr);
    std::vector<int> dish_filter_id;
    void set_dish_filter_id();
    ~subwindow();
    float sum = 0;
    bool plate[18];
    QLCDNumber* Lcdnumber;



private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

    void showPrice();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_13_stateChanged(int arg1);

    void on_checkBox_14_stateChanged(int arg1);

    void on_checkBox_15_stateChanged(int arg1);

    void on_checkBox_17_stateChanged(int arg1);

    void on_checkBox_16_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

    void on_checkBox_18_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_11_stateChanged(int arg1);

    void on_checkBox_12_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

private:
    float price[18]={15,13,1,3.5,4,1,1.5,8,15,7,15,14,10,20,12,6,4,90};
};

#endif // SUBWINDOW_H
