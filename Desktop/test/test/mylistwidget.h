#pragma once
#ifndef MYLISTWIDGET_H
#define MYYLISTWIDGET_H
#include <QtWidgets>

class MyListWidget : public QListWidget {
	Q_OBJECT

public:
	MyListWidget(QWidget * parent = 0);
	~MyListWidget();
	void createTalkList();
private:
	
};
#endif