/*
 * WidgetExample.cpp
 *
 *  Created on: Jul 3, 2017
 *      Author: phil
 */

#include "WidgetExample.h"

#include <QPainter>
#include <QImage>
#include <iostream>
#include <QDir>
#include <QDebug>
#include <QToolTip>

namespace ohm_railway
{

WidgetExample::WidgetExample()
{
  this->resize(960, 1280);
  this->setToolTip("Cuteeees");
}

WidgetExample::~WidgetExample()
{
  // TODO Auto-generated destructor stub
}

void WidgetExample::paintEvent(QPaintEvent* event)
{
  QPainter painter(this);
  QString path = QDir::currentPath() + "/images/active.jpg";
  QImage image(path);
  path = QDir::currentPath() + "/images/schwengel.jpg";
  QImage schwengel(path);

  for(unsigned int i = 0; i < 10; i++)
  {
    for(unsigned int j = 0; j < 10; j++)
    {
      QRect localRect = image.rect();
      localRect.moveTopLeft(QPoint(i * image.height(), j * image.width()));
      painter.drawImage(localRect, image, image.rect());
    }
  }
  QRect localRect = image.rect();
        localRect.moveTopLeft(QPoint(3 * image.height(), 2 * image.width()));
        painter.drawImage(localRect, schwengel, schwengel.rect());
        localRect = image.rect();
        localRect.moveTopLeft(QPoint(7 * image.height(), 9 * image.width()));
        painter.drawImage(localRect, schwengel, schwengel.rect());


  //painter.drawImage(this->rect(), image, image.rect());
//  QBrush brush(Qt::SolidPattern);
//  brush.setColor(Qt::black);
//  painter.setBrush(brush);
//  QPen pen(Qt::SolidLine);
//  pen.setColor(Qt::black);
//  QFont serifFont("Times", this->height() / 10, QFont::Bold);
//  painter.setFont(serifFont);
//  painter.drawText(this->rect().center() - QPoint(this->width() / 3, this->height() / 3), "Cuteeees");
}

} /* namespace ohm_railway */
