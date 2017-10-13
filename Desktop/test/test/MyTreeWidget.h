#ifndef MYTREEWIDGET_H
#define MYTREEWIDGET_H

#include <QtWidgets>

class MyTreeWidget : public QTreeWidget {
	Q_OBJECT
public:
	MyTreeWidget(QWidget * parent = 0);
	~MyTreeWidget();


};
#endif