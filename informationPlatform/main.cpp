#include "informationplatform.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	informationPlatform w;
	w.show();
	return a.exec();
}
