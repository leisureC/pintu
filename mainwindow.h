#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"qtimer.h"
#include<qevent.h>
#include<iostream>
#include<vector>
#include <algorithm>
#include <random>
#include<time.h>
#include<qimage.h>
#include<map>
#include<QList>
#include<qmessagebox.h>
#include <QtCore>
#include<QPushButton>
#include<dialog.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QPixmap pixmap;
    QPixmap pixmap1;
    QImage  imags;
    QPixmap beijing;
    QVector<QPixmap> pixmaps;//用QVector将QPixmap值储存在pixmaps中

        //SelectImage *selet;
        QTimer *timer;
        //图片大小
        static int M_height;
        static int M_weight;
        //初始位置
        static int o_x;
        static int o_y;
        int n;
        int m;
        int dushu;
        int *buf;//图片位置
        int *buf2;//图片旋转
    
       static int child_w;
       static int child_h;
        int tag;//标签，计算可得到图块位置
        int x1;
        int x2;
        int y1;
        int y2;
        int position;//位置
        int step;//步数
        int count;//90度旋转块树
        int num;
        bool is;//判断
        int select=1;
         int isr=1;
         bool  startif=false;//游戏开始判断
         //随机数组的大小
         int num1;

         bool hangchang=false;
         QString path=":/img/xinyi.jpg";//图像路径

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
void paintEvent(QPaintEvent *event);
void mousePressEvent(QMouseEvent *event);
   void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void on_pushButton_clicked();
    void divide();
    void check();
    void change();
void random(int*, int);
    void on_spinBox_valueChanged(int arg1);

void xytimerUpDate();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_MainWindow_customContextMenuRequested(const QPoint &pos);
void onTaskBoxContextMenuEvent();


void on_pushButton_4_clicked();

void on_spinBox_3_valueChanged(int arg1);


void on_spinBox_2_valueChanged(int arg1);

void on_radioButton_clicked();



private:
    Ui::MainWindow *ui;
public:
    QPushButton *button_skip;//定义一个按钮类

public slots:
    void login();

signals:
    void sendStr(QString);
private:
    Dialog *newDialog;
};
#endif // MAINWINDOW_H
