/*
 * jp_cute2.cpp
 *
 *  Created on: Jul 3, 2017
 *      Author: phil
 */


#include <QApplication>

#include "WidgetExample.h"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);
  ohm_railway::WidgetExample example;
  example.show();
  return app.exec();
}


