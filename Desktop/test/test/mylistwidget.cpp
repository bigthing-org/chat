#include "mylistwidget.h"
#include "FriendWidget.h"

MyListWidget::MyListWidget(QWidget * parent) : QListWidget(parent) {
	createTalkList();
}

MyListWidget::~MyListWidget() {
	
}

void MyListWidget::createTalkList() {
	QListWidgetItem * item = new QListWidgetItem;
	addItem(item);
	FriendWidget * friendWidget = new FriendWidget();
	item->setSizeHint(friendWidget->size());
	friendWidget->setTimerEnable(true);
	friendWidget->setStatment(tr("who are py"));
	friendWidget->setImage(":/test/Resources/image/owl.jpg");
	friendWidget->setName(tr("aaa"));
	setItemWidget(item, friendWidget);
}