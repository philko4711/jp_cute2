/*
 * TutMenu.h
 *
 *  Created on: Jul 15, 2017
 *      Author: phil
 */

#ifndef SRC_TUTMENU_H_
#define SRC_TUTMENU_H_

#include <QWidget>

#include "ui_tut.h"

class TutMenu: public QWidget
{
  Q_OBJECT
public:
  TutMenu();
  virtual ~TutMenu();
private slots:
  void bastardClicked(void);
  void sliderSlut(int hure);
private:

  Ui::Form* _tutGuiUi;
};

#endif /* SRC_TUTMENU_H_ */
