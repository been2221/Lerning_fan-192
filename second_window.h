#ifndef SECOND_WINDOW_H
#define SECOND_WINDOW_H

#include <QDialog>

namespace Ui {
class second_Window;
}

class second_Window : public QDialog
{
    Q_OBJECT

public:
    explicit second_Window(QWidget *parent = nullptr);
    ~second_Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::second_Window *ui;
};

#endif // SECOND_WINDOW_H
