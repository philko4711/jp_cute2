/*
 * TutMenu.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: phil
 */

#include "TutMenu.h"

#include <QDebug>

TutMenu::TutMenu():
  _tutGuiUi(new Ui::Form)
{
  _tutGuiUi->setupUi(this);
  connect(_tutGuiUi->buttonBastart, SIGNAL(clicked()), this, SLOT(bastardClicked()));
}

TutMenu::~TutMenu()
{
  // TODO Auto-generated destructor stub
}

void TutMenu::bastardClicked(void)
{
  qDebug() << __PRETTY_FUNCTION__ << " BastartDDDTTTTT!";
}
