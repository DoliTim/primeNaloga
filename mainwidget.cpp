#include "mainwidget.h"
#include <QGridLayout>
#include <QColor>
#include "prime.h"
#include "square.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget{parent}
{
    QGridLayout *layout = new QGridLayout(this);
    for (int i = 1; i <= 100; ++i) {
        Prime prime(i);
        Square *square = new Square(this);
        square->setText(QString::number(i));
        if (prime.Prime::isPrime(i))
            square->setColor(Qt::blue);
        else if (prime.Prime::isSemiPrime(i))
            square->setColor(Qt::green);
        else
            square->setColor(Qt::red);
        layout->addWidget(square, (i - 1) / 10, (i - 1) % 10);
    }
    setLayout(layout);
}
