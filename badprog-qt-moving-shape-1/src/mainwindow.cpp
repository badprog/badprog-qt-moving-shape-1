// BadproG.com
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MovingShape.h"

/**
 * @brief MainWindow::MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MovingShape *shape = new MovingShape(this);
    setCentralWidget(shape);
    setWindowTitle("BadproG.com");
}

/**
 * @brief MainWindow::~MainWindow
 */
MainWindow::~MainWindow() {
    delete ui;
}


