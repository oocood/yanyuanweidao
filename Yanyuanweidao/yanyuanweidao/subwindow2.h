#ifndef SUBWINDOW2_H
#define SUBWINDOW2_H

#include <QWidget>

namespace Ui {
class subwindow2;
}

class subwindow2 : public QWidget
{
    Q_OBJECT

public:
    Ui::subwindow2 *ui;
    explicit subwindow2(QWidget *parent = nullptr);
    ~subwindow2();
    float sum = 0;
    bool plate[16];
    void showPrice();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_12_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

    void on_checkBox_11_stateChanged(int arg1);

    void on_checkBox_13_stateChanged(int arg1);

    void on_checkBox_16_stateChanged(int arg1);

    void on_checkBox_14_stateChanged(int arg1);

    void on_checkBox_15_stateChanged(int arg1);

private:
    float price[16] = {12,16,1.5,2,8,10,8,8,10,12,29,10,8,20,10,10};
};

#endif // SUBWINDOW2_H
