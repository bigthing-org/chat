#pragma once
#include <QtWidgets>
#include "ui_FriendWidget.h"

class FriendWidget : public QWidget {
	Q_OBJECT

public:
	FriendWidget(QWidget * parent = 0);
	~FriendWidget();
	void setName(const QString & Name) { ui.name->setText(Name); }
	void setStatment(const QString & statment) { ui.statment->setText(statment); }
	void setImage(const QString & url) { ui.image->setImage(url); }
	void setTime(const QString & str) { ui.timer->setText(str); }
	void setTimerEnable(bool show) { ui.timer->setEnabled(show); }
private:
	Ui::mainWidget ui;

protected:

};
