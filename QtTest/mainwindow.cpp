#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

QWidget* MainWindow::initUI()
{
    QWidget *widget = new QWidget(this);
    checkBoxUnderline = new QCheckBox(tr("Underline"));
    checkBoxItalic = new QCheckBox(tr("Italic"));
    checkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout *HLayout1 = new QHBoxLayout();
    HLayout1->addWidget(checkBoxUnderline);
    HLayout1->addWidget(checkBoxItalic);
    HLayout1->addWidget(checkBoxBold);

    rBtnBlack = new QRadioButton("Black");
    rBtnBlue = new QRadioButton("Blue");
    rBtnRed = new QRadioButton("Red");
    QHBoxLayout *HLayout2 = new QHBoxLayout();
    HLayout2->addWidget(rBtnBlack);
    HLayout2->addWidget(rBtnBlue);
    HLayout2->addWidget(rBtnRed);

    plainTextEdit = new QPlainTextEdit();
    QFont font = plainTextEdit->font();
    font.setPointSize(20);
    plainTextEdit->setFont(font);
    plainTextEdit->setPlainText("Hello world\n\n this is Arxibye!");

    btnOK = new QPushButton("OK");
    btnCancel = new QPushButton("Cancel");
    btnClose = new QPushButton("Close");
    QHBoxLayout *HLayout3 = new QHBoxLayout();
    HLayout3->addStretch();
    HLayout3->addWidget(btnOK);
    HLayout3->addWidget(btnCancel);
    HLayout3->addStretch();
    HLayout3->addWidget(btnClose);

    QVBoxLayout *VLayout = new QVBoxLayout;
    VLayout->addLayout(HLayout1);
    VLayout->addLayout(HLayout2);
    VLayout->addWidget(plainTextEdit);
    VLayout->addLayout(HLayout3);
    widget->setLayout(VLayout);

    return widget;
}

void MainWindow::initSignalSlots()
{
    connect(btnOK, SIGNAL(clicked()), this, SLOT(accept()));
    connect(btnCancel, SIGNAL(clicked()), this, SLOT(reject()));
    connect(btnClose, SIGNAL(clicked()), this, SLOT(close()));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //ui->setupUi(this);
    this->setCentralWidget(initUI());
    initSignalSlots();
    //setLayout(VLayout);

}

MainWindow::~MainWindow()
{

}

