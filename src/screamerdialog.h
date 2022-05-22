#ifndef SCREAMERDIALOG_H
#define SCREAMERDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QMap>

namespace Ui {
class ScreamerDialog;
}

class ScreamerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ScreamerDialog(QWidget *parent = nullptr);
    ~ScreamerDialog();

public slots:
    void scream(const QChar& c);

private:
    Ui::ScreamerDialog *ui;
    QTimer timerClose;
};

#endif // SCREAMERDIALOG_H
