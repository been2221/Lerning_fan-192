#ifndef LEARNING_FUN_H
#define LEARNING_FUN_H
#include <QMainWindow>
#include <QMultimedia>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <QMediaContent>



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

    void on_radioButton_clicked();

private:
    Ui::Learning_fun *ui;
    int score =0;
    int incorrect= 0;
    int sign =0;
    int arg2 =0;
    int arg1 =0;
 QMediaPlayer* m_player;
  QMediaPlaylist* m_playlist;


};
#endif // LEARNING_FUN_H

