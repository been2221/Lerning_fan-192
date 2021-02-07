#include "learning_fun.h"
#include "./ui_learning_fun.h"
#include "second_window.h"


Learning_fun::Learning_fun(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Learning_fun)
{
    ui->setupUi(this);
    ui->equally->setText("=");

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

    if(sign == 0 || sign == 2){
        ui->act->setText("+");
    }
    if(sign == 1 || sign == 3){
        ui->act->setText("-");
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
        score++;
        this->updateFun();
    }
    else {
        incorrect++;
    }
    ui->label->setText(answer);
    ui->lcdNumber->display(score);
    ui->lcdNumber_2->display(incorrect);

}

void Learning_fun::on_lineEdit_textEdited(const QString &arg1)
{


}

void Learning_fun::on_pushButton_2_clicked()
{
    QSound::play("/Open Source - Never Forever_(Inkompmusic.ru).mp3");

}

void Learning_fun::on_pushButton_3_clicked()
{
      hide();
    second_Window wind;
    wind.setModal(true);
    wind.exec();

}

