#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void chplayer();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_5_clicked();

    void on_toolButton_6_clicked();

    void on_toolButton_7_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

   // void on_pushButton_3_clicked();

    void on_lineEdit_3_returnPressed();

    void on_radioButton_3_clicked();

    //void on_radioButton_clicked();

   // void on_radioButton_2_clicked();

    //void on_radioButton_4_clicked();

    //void on_pushButton_4_clicked();

    //void on_pushButton_5_clicked();

   // void on_toolButton_5_triggered(QAction *arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
