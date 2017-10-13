#include "test.h"
#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFile file("C:/Users/31055/Desktop/test/test/Resources/qss/style.qss");
	file.open(QFile::ReadOnly);
	a.setStyleSheet(file.readAll());
	test w;
	w.show();
	return a.exec();
}
