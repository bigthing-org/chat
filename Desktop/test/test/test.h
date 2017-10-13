#ifndef TEST_H
#define TEST_H


#include <QtWidgets/QMainWindow>
#include <QtWidgets>
#include "ui_test.h"
#include "FriendWidget.h"

class test : public QMainWindow
{
	Q_OBJECT

public:
	test(QWidget *parent = 0);
	~test();


private:
	Ui::testClass ui;
	
	QAction * addListAction;
	QAction * addFriendAction;

	void createAction();
	void create_list();
	void create_friend(QTreeWidgetItem * list);
	
private slots:
	void expandList(QTreeWidgetItem * item, int column);
	void MyPageChange1();
	void MyPageChange2();
	void MyPageChange3();
	void MyPageChange4();


protected:
	void updateGeometry();

	
};

class titleLabel : public QWidget {
	Q_OBJECT
public:
	titleLabel(QWidget * parent = 0);
	~titleLabel() {}
	void setImage(const QString url) { image->setPixmap(QPixmap(url)); }
	void setText(const QString text) { this->text->setText(tr("text")); }

private:
	QLabel * image;
	QLabel * text;


};

#endif // TEST_H
