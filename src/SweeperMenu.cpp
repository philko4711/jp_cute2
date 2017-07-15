/*
 * SweeperMenu.cpp
 *
 *  Created on: 16.07.2017
 *      Author: jasmin
 */

#include "SweeperMenu.h"
#include <QDebug>

SweeperMenu::SweeperMenu():       //: eröffnet Zuweisungsliste, verschafft mehr Übersicht über alle
                                  // Membervariablen; für Const Pointer zwingend notwendig
  _sweeperMenu(new Ui::MenuLevel)
{
  _sweeperMenu->setupUi(this);
  connect(_sweeperMenu->pushButtonPisso, SIGNAL(clicked()), this, SLOT(pissoClicked()));
  connect(_sweeperMenu->pushButtonSuperpisso, SIGNAL(clicked()), this, SLOT(superpissoClicked()));
  connect(_sweeperMenu->pushButtonUltrasuperpisso, SIGNAL(clicked()), this, SLOT(ultrasuperpissoClicked()));
 //QString path = QDir::currentPath() + "/home/jasmin/cutees.jpg";
  this->setStyleSheet("background-image: url(/home/jasmin/jp_cute2/cutees.jpg)");
}

SweeperMenu::~SweeperMenu()
{
  // TODO Auto-generated destructor stub
}

void SweeperMenu::pissoClicked(void)
{
  qDebug() << __PRETTY_FUNCTION__ << " pisso!";
}
void SweeperMenu::superpissoClicked(void)
{
  qDebug() << __PRETTY_FUNCTION__ << " superpisso!";
}
void SweeperMenu::ultrasuperpissoClicked(void)
{
  qDebug() << __PRETTY_FUNCTION__ << " ultrasuperpisso!";
}

