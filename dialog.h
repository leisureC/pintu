#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QLabel>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    QPixmap pixmap;

public:
    explicit Dialog(QWidget *parent = nullptr);
     Ui::Dialog *ui;
    ~Dialog();
     QLabel *label_skip;
     QLabel *lable1;

private:
   void getStr(QString);
};

#endif // DIALOG_H
