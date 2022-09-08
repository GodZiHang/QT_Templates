#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>
#include <QRadioButton>
#include <QPushButton>
#include <QPlainTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QCheckBox *checkBoxUnderline;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;

    QRadioButton *rBtnBlack;
    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;

    QPlainTextEdit *plainTextEdit;

    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnClose;

    QWidget* initUI();
    void initSignalSlots();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
