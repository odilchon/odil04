#include "line.h"
#include <QPainter>


Line::Line(QPointF point,QColor color,int LineWeight, QObject *parent) :
    Figure(point,parent) {
    Q_UNUSED(point)
    shapeColor=color;
    this->LineWeight=LineWeight;
    this->name=QString("Line %1").arg(lCount);
    lCount++;
}


Line::~Line(){}

void Line::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    // Setting the color, Line weight and the shape type
    painter->setPen(QPen(shapeColor, LineWeight));
    shapeTypeName = "Line";

    // Draw the line with the start, end point and the painter
    QLineF line(startPoint().x(),startPoint().y(),endPoint().x(),endPoint().y());
    //Fill shape in case fill button

    painter->drawLine(line);
    this->perimeter=line.length();

    Q_UNUSED(option)
    Q_UNUSED(widget)
}