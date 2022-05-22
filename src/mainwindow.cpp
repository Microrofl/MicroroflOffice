#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    screamerDialog = new ScreamerDialog(this);

    ui->stackedWidget->setCurrentWidget(ui->pageHello);
    ui->actionSaveAs->setEnabled(false);

    connect(ui->plainTextEdit, &QPlainTextEdit::textChanged, this, [&]()
    {
        const QString text = ui->plainTextEdit->toPlainText();
        if (!text.isEmpty() && text.length() > prevText.length())
        {
            screamerDialog->scream(text.at(text.length() - 1));
        }

        prevText = text;
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->pageTextEditor);
    ui->actionSaveAs->setEnabled(true);
    ui->plainTextEdit->clear();
}

void MainWindow::on_actionSaveAs_triggered()
{
    if (ui->stackedWidget->currentWidget() != ui->pageTextEditor)
    {
        return;
    }

    const QString fileName = QFileDialog::getSaveFileName(this, tr("Save as..."), QString(), "*.txt");
    if (fileName.isEmpty())
    {
        return;
    }

    QFile file(fileName);
    if (file.open(QIODevice::ReadWrite))
    {
        file.write(ui->plainTextEdit->toPlainText().toUtf8());
    }
}

void MainWindow::on_actionExit_triggered()
{
    qApp->quit();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, tr("About"), tr("Author: me"));
}

