- navigate.h中共有两个类

  ```c++
  class Path {};
  class Navigate {};
  ```

- Path类中提供了如下方法

  ```c++
  int x0(); //返回该段路径起点x坐标
  ```

  ```c++
  int y0(); //返回该段路径起点y坐标
  ```

  ```c++
  int x(); //返回该段路径终点x坐标
  ```

  ```c++
  int y(); //返回该段路径终点y坐标
  ```

- Navigate类中提供了如下方法

  ```c++
  Navigate(int, int, int); //参数分别为起点的x坐标、y坐标、饭堂的编号（后附） 用于对象初始化
  ```

  ```c++
  int get_sum(); //返回路径段数
  ```

  ```c++
  Path get_path(); //返回当前路径
  ```


- 使用示例（供参考）

  ```c++
  void class_name_1::mousePressEvent(QMouseEvent *event) {
      QPoint position = event->pos();
      x = position.x();
      y = position.y();
  }
  ```

  ```c++
  void class_name_2::paintEvent(QPaintEvent *) {
      QPainter painter(this);
      QPen pen;
  
      Navigate *p = new Navigate(x, y, number);
      int n = p->get_sum();
   
      for(int i = 1; i <= n; i++) {
          
          Path t = p->get_path();
          
          pen.setWidth(8);
          pen.setColor(QColor(100, 150, 230));
          pen.setStyle(Qt::SolidLine);
          pen.setCapStyle(Qt::RoundCap);
          
          painter.setPen(pen);
          painter.drawLine(QPoint(t.x0(), t.y0()), QPoint(t.x(), t.y()));
      }
  }
  ```

- 其他说明
  - map的大小为1000*750
  - 饭堂编号
    - 家园：0
    - 农园：1
    - 学一：2
    - 学五：3
    - 燕南：4
  - Navigate类对象创建尽可能与画线在同一个文件下（如上示例），否则（实践证明）可能会出现某些（原因未知）错误
  - 需要将map.png、node.txt、edge.txt放在”build-...“文件夹下