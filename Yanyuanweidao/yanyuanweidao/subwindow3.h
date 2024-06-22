#ifndef SUBWINDOW3_H
#define SUBWINDOW3_H

#include <QWidget>

namespace Ui {
class subwindow3;
}

class subwindow3 : public QWidget
{
    Q_OBJECT

public:
    Ui::subwindow3 *ui;
    explicit subwindow3(QWidget *parent = nullptr);
    ~subwindow3();
    float sum = 0;
    bool plate[10];
    void showPrice();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

private:
    float price[10] = {15,5,10,22,25,4,14,8,20,13};
};

#endif // SUBWINDOW3_H
