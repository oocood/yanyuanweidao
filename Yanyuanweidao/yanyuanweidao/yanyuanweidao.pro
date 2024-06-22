QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    map1.cpp \
    subwindow.cpp \
    subwindow1.cpp \
    subwindow2.cpp \
    subwindow3.cpp \
    subwindow4.cpp \
    #selectwindow.cpp \
    #show_window.cpp


HEADERS += \
    mainwindow.h \
    map1.h \
    navigate.h \
    subwindow.h \
    subwindow1.h \
    subwindow2.h \
    subwindow3.h \
    subwindow4.h \
    selectwindow.h \
    ./dish_group/select.h \
    ./include/Python.h \
    ./dish_group/data_frame.py \
    #./dish_group/select.h \
    #show_window.h

FORMS += \
    mainwindow.ui \
    map1.ui \
    subwindow.ui \
    subwindow1.ui \
    subwindow2.ui \
    subwindow3.ui \
    subwindow4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    ../navigate/map.png \
    meiguizhiyoujifan.png \
    navigate/map.png

#使用的时候替换为自己机器上的地址（libs和include都已经打包好了）
LIBS += -L"E:\\Yanyuanweidao\\Yanyuanweidao\\yanyuanweidao\\libs" -lpython311
#LIBS += -LC:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\shell32.lib
INCLUDEPATH += -I"E:\\Yanyuanweidao\\Yanyuanweidao\\yanyuanweidao\\include"


