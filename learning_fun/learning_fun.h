#ifndef LEARNING_FUN_H
#define LEARNING_FUN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Learning_fun; }
QT_END_NAMESPACE

class Learning_fun : public QMainWindow
{
    Q_OBJECT

public:
    Learning_fun(QWidget *parent = nullptr);
    ~Learning_fun();
    void updateFun();

private slots:
    void on_update_butt_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Learning_fun *ui;
    int cout;
};
#endif // LEARNING_FUN_H
