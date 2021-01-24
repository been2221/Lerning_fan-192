#include "learning_fun.h"
#include "./ui_learning_fun.h"

Learning_fun::Learning_fun(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Learning_fun)
{
    ui->setupUi(this);
}
Learning_fun::~Learning_fun()
{
    delete ui;
}
void Learning_fun::updateFun(){
    sign=+qrand()%4;
    arg2=+qrand()%10;
    arg1=1+qrand()%10;
    ui->second_argument->setNum(arg2);
    ui->first_argument->setNum(arg1);
    switch (sign) {

    case 0:
        ui->act->setText("+");
        break;
    case 1:
        ui->act->setText("-");
        break;
    case 2:
        ui->act->setText("+");
        break;
    case 3:
        ui->act->setText("-");
        break;

    }

}




void Learning_fun::on_update_butt_clicked()
{
    this->updateFun();
}

void Learning_fun::on_pushButton_clicked()
{
    QString answer = ui->lineEdit->text();
    int answInt=answer.toInt();
    int chek;
         if (sign == 0 || sign == 2) chek = arg1+arg2;
         else chek = arg1-arg2;
    if (answInt == chek){
        cout++;
        this->updateFun();
    }
    ui->label->setText(answer);
    ui->lcdNumber->display(cout);

}

void Learning_fun::on_lineEdit_textEdited(const QString &arg1)
{


}
