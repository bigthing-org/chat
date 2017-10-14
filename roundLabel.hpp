#pragma once
#include <QtWidgets>

class roundLabel : public QLabel {
	Q_OBJECT

public:
	roundLabel(QWidget * parent = 0);
	~roundLabel();
	void setImage(const QString & str);
private:
	QString url;
protected:
	void paintEvent(QPaintEvent * event);
};
