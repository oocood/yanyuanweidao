#ifndef SUBWINDOW1_H
#define SUBWINDOW1_H

#include <QWidget>

namespace Ui {
class subwindow1;
}

class subwindow1 : public QWidget
{
    Q_OBJECT

public:
    Ui::subwindow1 *ui;
    explicit subwindow1(QWidget *parent = nullptr);
    ~subwindow1();
    float sum = 0;
    bool plate[15];
    void showPrice();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_15_stateChanged(int arg1);

    void on_checkBox_14_stateChanged(int arg1);

    void on_checkBox_13_stateChanged(int arg1);

    void on_checkBox_12_stateChanged(int arg1);

    void on_checkBox_11_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

private:
    float price[15] = {12,18,14,12,13,3,8,6,5,6,5,4,12,13,8};
};

#endif // SUBWINDOW1_H
