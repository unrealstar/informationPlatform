﻿

#include "informationplatform.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	informationPlatform w;
	w.show();
	return a.exec();
}
