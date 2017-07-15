/*
 * jp_cute2.cpp
 *
 *  Created on: Jul 3, 2017
 *      Author: phil
 */


#include <QApplication>

#include "WidgetExample.h"
#include "TutMenu.h"
#include "SweeperMenu.h"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);
//  ohm_railway::WidgetExample example;
//  example.show();
  TutMenu menu;
  menu.show();
  SweeperMenu startmenu;
  startmenu.show();
  return app.exec();
}


