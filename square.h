#ifndef SQUARE_H
#define SQUARE_H

#include <QPushButton>
#include <QGridLayout>
#include <QPushButton>
#include <QColor>

class Square : public QPushButton
{
public:
    Square(QWidget *parent = nullptr);
    void setColor(const QColor &color);
};

#endif // SQUARE_H
