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
  QString path = QDir::currentPath() + "/cutees.jpg";
  QImage image(path);

  painter.drawImage(this->rect(), image, image.rect());
  QBrush brush(Qt::SolidPattern);
  brush.setColor(Qt::black);
  painter.setBrush(brush);
  QPen pen(Qt::SolidLine);
  pen.setColor(Qt::black);
  QFont serifFont("Times", 50, QFont::Bold);
  painter.setFont(serifFont);
  painter.drawText(this->rect().center() - QPoint(this->width() / 3, this->height() / 3), "Cuteeees");
}

} /* namespace ohm_railway */
