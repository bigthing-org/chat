#include "test.h"
#include <QIcon>

test::test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.qq_image->setImage(":/test/Resources/image/owl.jpg");
	ui.friend_list->setIndentation(0);
	create_list();
	ui.friend_list->setFrameStyle(QFrame::NoFrame);
	ui.horizontalLayout->setSpacing(0); 
	ui.messageButton->setChecked(true);
	ui.stackedWidget->setCurrentIndex(0);
	connect(ui.messageButton, SIGNAL(clicked()), this, SLOT(MyPageChange1()));
	connect(ui.friendButton, SIGNAL(clicked()), this, SLOT(MyPageChange2()));
	connect(ui.spaceButton, SIGNAL(clicked()), this, SLOT(MyPageChange3()));
	connect(ui.groupButton, SIGNAL(clicked()), this, SLOT(MyPageChange4()));
	connect(ui.friend_list, SIGNAL(itemClicked(QTreeWidgetItem *, int)), this, SLOT(expandList(QTreeWidgetItem *, int)));
	
}

test::~test()
{

}

void test::createAction() {
	addListAction = new QAction(tr("add List"), this);
	addFriendAction = new QAction(tr("add Friend"), this);
	//connect(addListAction, SIGNAL(triggered()), this, SLOT());
	//connect(addFriendAction, SIGNAL(triggered()), this, SLOT());
	addAction(addListAction);
	addAction(addFriendAction);
	setContextMenuPolicy(Qt::ActionsContextMenu);
}

void test::create_list() {
	if (QTreeWidgetItem * newroot = new QTreeWidgetItem(ui.friend_list, QStringList(""))) {
		titleLabel * title = new titleLabel;
		title->setText("my friends");
		ui.friend_list->setItemWidget(newroot, 0, title);
		create_friend(newroot);
	}

}

void test::create_friend(QTreeWidgetItem * list) {
	if (FriendWidget * newfriend = new FriendWidget) {
		newfriend->setImage(":/test/Resources/image/owl.jpg");
		newfriend->setName(tr("friend_1"));
		newfriend->setStatment(tr("i am friend_1"));
		QTreeWidgetItem * item = new QTreeWidgetItem;
		list->addChild(item);
		ui.friend_list->setItemWidget(item, 0, newfriend);

	}

}

void test::expandList(QTreeWidgetItem * item, int column) {
	item = ui.friend_list->currentItem();
	if (!item->childCount()) {
		return;
	}
	else {
		if (item->isExpanded()) {
			item->setExpanded(0);
			titleLabel * label = (titleLabel *)ui.friend_list->itemWidget(item, 0);
			label->setImage(":/test/Resources/image/images2.png");
		}
		else {
			item->setExpanded(1);
			titleLabel * label = (titleLabel *)ui.friend_list->itemWidget(item, 0);
			label->setImage(":/test/Resources/image/images.png");
		}
	}
}

void test::updateGeometry() {
	
}

void test::MyPageChange1() {
	ui.messageButton->setChecked(true);
	ui.friendButton->setChecked(false);
	ui.spaceButton->setChecked(false);
	ui.groupButton->setChecked(false);
	ui.stackedWidget->setCurrentIndex(0);
	
}
void test::MyPageChange2() {
	ui.friendButton->setChecked(true);
	ui.messageButton->setChecked(false);
	ui.spaceButton->setChecked(false);
	ui.groupButton->setChecked(false);
	ui.stackedWidget->setCurrentIndex(1);
}
void test::MyPageChange3() {
	ui.spaceButton->setChecked(true);
	ui.friendButton->setChecked(false);
	ui.messageButton->setChecked(false);
	ui.groupButton->setChecked(false);
	ui.stackedWidget->setCurrentIndex(2);
}
void test::MyPageChange4(){
	ui.groupButton->setChecked(true);
	ui.friendButton->setChecked(false);
	ui.spaceButton->setChecked(false);
	ui.messageButton->setChecked(false);
	ui.stackedWidget->setCurrentIndex(3);
	
}

titleLabel::titleLabel(QWidget * parent)
	: QWidget(parent) {
	image = new QLabel;
	image->setFixedSize(QSize(15, 15));
	text = new QLabel;
	image->setPixmap(QPixmap(":/test/Resources/image/images2.png"  ));
	QHBoxLayout * layout = new QHBoxLayout;
	layout->addWidget(image); 
	layout->addWidget(text);
	setLayout(layout);
}
