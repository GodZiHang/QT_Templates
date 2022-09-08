#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QPushButton* clickBtn;
    QLabel* label;
    void onClick();
    void onCheck(int state);
    void timerEvent(QTimerEvent *event) override;
};
#endif // MAINWINDOW_H
