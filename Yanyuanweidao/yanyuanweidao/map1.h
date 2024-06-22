#ifndef MAP1_H
#define MAP1_H

#include <QWidget>
#include<QMouseEvent>
#include<vector>

namespace Ui {
class map1;
}

class map1 : public QWidget
{
    Q_OBJECT

public:
    int dish_select_state[7]={};
    std::vector<std::string> dish_name[5]; //从0-5分别为农园、家园、学一、学五、燕南
    std::vector<int> dish_price[5];
    explicit map1(QWidget *parent = nullptr);
    ~map1();
    void mousePressEvent(QMouseEvent* m);
    void paintEvent(QPaintEvent*);
    int x1,y1,number;
    bool is = false;
    void dish_classify();
    void dish_push_back(std::string& s1, int n1, int rest_id);
    void set_state(int *dish_state);

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::map1 *ui;
    //std::vector<std::string> dish_name[5];
};

#endif // MAP1_H
