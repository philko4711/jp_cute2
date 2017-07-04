/*
 * WidgetExample.h
 *
 *  Created on: Jul 3, 2017
 *      Author: phil
 */

#ifndef SRC_WIDGETEXAMPLE_H_
#define SRC_WIDGETEXAMPLE_H_

#include <QWidget>

namespace ohm_railway
{

class WidgetExample: public QWidget
{
  Q_OBJECT
public:
  WidgetExample();
  virtual ~WidgetExample();
  virtual void paintEvent(QPaintEvent* event);
  void mousePressEvent(QMouseEvent* eventPress){this->close();}
private:
//  QImage* _image;
};

} /* namespace ohm_railway */

#endif /* SRC_WIDGETEXAMPLE_H_ */
