#include "square.h"

Square::Square(QWidget *parent) : QPushButton(parent) {};

void Square::setColor(const QColor &color) {
    QString style = QString("background-color: %1").arg(color.name());
    setStyleSheet(style);
}
