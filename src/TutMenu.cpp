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
  connect(_tutGuiUi->verticalSlider, SIGNAL(valueChanged(int)), this, SLOT(sliderSlut(int)));
}

TutMenu::~TutMenu()
{
  // TODO Auto-generated destructor stub
}

void TutMenu::bastardClicked(void)
{
  qDebug() << __PRETTY_FUNCTION__ << " BastartDDDTTTTT!";
}

void TutMenu::sliderSlut(int hure)
{
  qDebug() << __PRETTY_FUNCTION__ << " YOU'RE " << hure << "x A SLUTTY SLUT!";

}
