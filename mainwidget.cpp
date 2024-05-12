#include "mainwidget.h"
#include <QGridLayout>
#include <QColor>
#include "prime.h"
#include "QLabel"

MainWidget::MainWidget(QWidget *parent)
    : QWidget{parent}
{
    QGridLayout *layout = new QGridLayout(this);
    for (int i = 1; i <= 100; ++i) {
        Prime prime(i);

        QLabel *label = new QLabel(this);
        label->setText(QString::number(i));

        QFont font("Monospace", 10, QFont::Bold);
        label->setFont(font);

        Qt::Alignment alignment(Qt::AlignHCenter);
        label->setAlignment(alignment);
        label->setMargin(10);

        if (prime.Prime::isPrime(i)) {
            label->setStyleSheet("QLabel { \
                                    background-color: blue; \
                                    color: white \
                                   }");
        } else if (prime.Prime::isSemiPrime(i)) {
            label->setStyleSheet("QLabel { \
                                    background-color: green; \
                                    color: white \
                                   }");
        } else {
            label->setStyleSheet("QLabel { \
                                    background-color: red; \
                                    color: white \
                                   }");
        }

        layout->addWidget(label, (i - 1) / 10, (i - 1) % 10);
    }
    setLayout(layout);
}
