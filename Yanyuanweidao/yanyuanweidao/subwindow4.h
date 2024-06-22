#ifndef SUBWINDOW4_H
#define SUBWINDOW4_H

#include <QWidget>

namespace Ui {
class subwindow4;
}

class subwindow4 : public QWidget
{
    Q_OBJECT

public:
    Ui::subwindow4 *ui;
    explicit subwindow4(QWidget *parent = nullptr);
    ~subwindow4();
    float sum = 0;
    bool plate[6];
    void showPrice();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

private:
    float price[6] = {15,20,10,12,10,13};
};

#endif // SUBWINDOW4_H
