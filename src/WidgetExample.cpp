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

namespace ohm_railway
{

WidgetExample::WidgetExample()
{
  this->resize(960, 1280);

}

WidgetExample::~WidgetExample()
{
  // TODO Auto-generated destructor stub
}

void WidgetExample::paintEvent(QPaintEvent* event)
{
  QPainter painter(this);
  QString path = QDir::currentPath() + "/cutees.jpg";
  QImage image(path);

  painter.drawImage(this->rect(), image, image.rect());
  QBrush brush(Qt::SolidPattern);
  brush.setColor(Qt::red);
  painter.setBrush(brush);
}

} /* namespace ohm_railway */
