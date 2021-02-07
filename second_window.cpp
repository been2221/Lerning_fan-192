#include "second_window.h"
#include "ui_second_window.h"

second_Window::second_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second_Window)
{
    ui->setupUi(this);
}

second_Window::~second_Window()
{
    delete ui;
}



