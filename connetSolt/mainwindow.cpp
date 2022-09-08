#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget(this);
    setCentralWidget(widget);

    clickBtn = new QPushButton("点击", widget);
    QCheckBox *cb = new QCheckBox("Connet", widget);
    cb->setCheckState(Qt::Checked);
    label = new QLabel(QTime::currentTime().toString(), widget);

    QHBoxLayout *hbox = new QHBoxLayout(widget);
    hbox->addWidget(clickBtn);
    hbox->addWidget(cb);
    hbox->addWidget(label);

    startTimer(1000);

    connect(clickBtn, &QPushButton::clicked, this, &MainWindow::onClick);
    connect(cb, &QCheckBox::stateChanged, this, &MainWindow::onCheck);
}

MainWindow::~MainWindow()
{

}

void MainWindow::onClick()
{
    statusBar()->showMessage("按钮被点击");
}

void MainWindow::onCheck(int state)
{
    statusBar()->showMessage("");
    if(state==Qt::Checked) {
        connect(clickBtn, &QPushButton::clicked, this, &MainWindow::onClick);
    } else {
        disconnect(clickBtn, &QPushButton::clicked, this, &MainWindow::onClick);
    }
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
    label->setText(QTime::currentTime().toString());
}

