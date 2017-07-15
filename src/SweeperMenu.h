/*
 * SweeperMenu.h
 *
 *  Created on: 16.07.2017
 *      Author: jasmin
 */

#ifndef SWEEPERMENU_H_
#define SWEEPERMENU_H_

#include <QWidget>
#include "ui_sweepermenu.h"

class SweeperMenu: public QWidget
{
  Q_OBJECT
public:
  SweeperMenu();
  virtual ~SweeperMenu();
  private slots:
    void pissoClicked(void);
    void superpissoClicked(void);
    void ultrasuperpissoClicked(void);
private:
  Ui::MenuLevel* _sweeperMenu;
};

#endif /* SWEEPERMENU_H_ */
