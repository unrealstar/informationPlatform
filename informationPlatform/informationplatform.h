#ifndef INFORMATIONPLATFORM_H
#define INFORMATIONPLATFORM_H

#include <QtWidgets/QMainWindow>
#include "ui_informationplatform.h"

class informationPlatform : public QMainWindow
{
	Q_OBJECT

public:
	informationPlatform(QWidget *parent = 0);
	~informationPlatform();

private:
	Ui::informationPlatformClass ui;
};

#endif // INFORMATIONPLATFORM_H
