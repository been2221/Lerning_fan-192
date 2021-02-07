#include "ferst_window.h"
#include "ui_ferst_window.h"

ferst_window::ferst_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ferst_window)
{
    ui->setupUi(this);
}

ferst_window::~ferst_window()
{
    delete ui;
}

void ferst_window::on_pushButton_clicked()
{

}
