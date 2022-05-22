#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "screamerdialog.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_actionNew_triggered();
    void on_actionSaveAs_triggered();
    void on_actionExit_triggered();
    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    ScreamerDialog* screamerDialog = nullptr;
    QString prevText;
};
#endif // MAINWINDOW_H
