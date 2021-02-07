#ifndef FERST_WINDOW_H
#define FERST_WINDOW_H

#include <QMainWindow>

namespace Ui {
class ferst_window;
}

class ferst_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit ferst_window(QWidget *parent = nullptr);
    ~ferst_window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ferst_window *ui;
};

#endif // FERST_WINDOW_H
