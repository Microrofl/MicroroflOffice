#include "screamerdialog.h"
#include "ui_screamerdialog.h"
#include <QRandomGenerator>
#include <QDebug>

namespace {

struct Screamer {
    QPixmap pixmap;
};

static QMap<QChar, QVector<Screamer>> screamers;

}

ScreamerDialog::ScreamerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScreamerDialog)
{
    ui->setupUi(this);

    if (screamers.isEmpty())
    {
        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/anonimous.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('a'), vScreamers);
            screamers.insert(QChar('A'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/borat.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('b'), vScreamers);
            screamers.insert(QChar('B'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/cage.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('c'), vScreamers);
            screamers.insert(QChar('C'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/diktator.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/dwayne_douglas_johnson.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('d'), vScreamers);
            screamers.insert(QChar('D'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/elon_musk_smoke.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('e'), vScreamers);
            screamers.insert(QChar('E'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/fresko.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('f'), vScreamers);
            screamers.insert(QChar('F'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/gendalf1.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('g'), vScreamers);
            screamers.insert(QChar('G'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/harold_hide_the_pain.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/hackerman1.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/hackerman2.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('h'), vScreamers);
            screamers.insert(QChar('H'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/ill_be_back.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('i'), vScreamers);
            screamers.insert(QChar('I'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/dwayne_douglas_johnson.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/jozin_z_bazin.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('j'), vScreamers);
            screamers.insert(QChar('J'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/keanu.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('k'), vScreamers);
            screamers.insert(QChar('K'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/linus_torvalds_nvidia.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('l'), vScreamers);
            screamers.insert(QChar('L'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/momo.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('m'), vScreamers);
            screamers.insert(QChar('M'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/rick_astley.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('n'), vScreamers);
            screamers.insert(QChar('N'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/oh_my1.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/oh_my2.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('o'), vScreamers);
            screamers.insert(QChar('O'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/pikachu.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('p'), vScreamers);
            screamers.insert(QChar('P'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/the_q.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('q'), vScreamers);
            screamers.insert(QChar('Q'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/roll_safe.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/rick_astley.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('r'), vScreamers);
            screamers.insert(QChar('R'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/spidermans.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/stonks.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('s'), vScreamers);
            screamers.insert(QChar('S'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/trumpet_skull.jpg");
            vScreamers.append(screamer);

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/trumpet.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('t'), vScreamers);
            screamers.insert(QChar('T'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/uganda_knukles.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('u'), vScreamers);
            screamers.insert(QChar('U'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/vitas.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('v'), vScreamers);
            screamers.insert(QChar('V'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/we_are_number_one.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('w'), vScreamers);
            screamers.insert(QChar('W'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/xzibit.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('x'), vScreamers);
            screamers.insert(QChar('X'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/yoshi.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('y'), vScreamers);
            screamers.insert(QChar('Y'), vScreamers);
        }

        {
            QVector<Screamer> vScreamers;
            Screamer screamer;

            screamer = Screamer();
            screamer.pixmap = QPixmap(":/images/jay_z.jpg");
            vScreamers.append(screamer);

            screamers.insert(QChar('z'), vScreamers);
            screamers.insert(QChar('Z'), vScreamers);
        }

        qDebug() << "chars loaded" << screamers.count();
    }

    setWindowFlags(Qt::Popup
                   | Qt::NoDropShadowWindowHint
                   | Qt::WindowStaysOnTopHint);

    timerClose.setInterval(70);
    connect(&timerClose, &QTimer::timeout, this, [&]()
    {
        close();
    });
}

ScreamerDialog::~ScreamerDialog()
{
    delete ui;
}
void ScreamerDialog::scream(const QChar &c)
{
    if (c.isNull() || !screamers.contains(c))
    {
        return;
    }

    const QVector<Screamer>& vScreamers = screamers[c];
    if (vScreamers.isEmpty())
    {
        return;
    }

    const Screamer& screamer = vScreamers[QRandomGenerator::global()->generate() % vScreamers.count()];

    timerClose.start();

    if (!screamer.pixmap.isNull())
    {
        ui->pixmapMain->setPixmap(screamer.pixmap);
        QDialog::showFullScreen();
    }
}
