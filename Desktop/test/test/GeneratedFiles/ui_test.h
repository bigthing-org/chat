/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "MyTreeWidget.h"
#include "mylistwidget.h"
#include "roundbutton.h"

QT_BEGIN_NAMESPACE

class Ui_testClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    RoundButton *qq_image;
    QGridLayout *gridLayout_2;
    QLabel *qq_name;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *qq_level;
    QLineEdit *statment;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *buttonLayout;
    QPushButton *messageButton;
    QPushButton *friendButton;
    QPushButton *spaceButton;
    QPushButton *groupButton;
    QStackedWidget *stackedWidget;
    QWidget *messagePage;
    QGridLayout *gridLayout;
    MyListWidget *talkHistory;
    QWidget *friendPage;
    QGridLayout *friendLayout;
    MyTreeWidget *friend_list;
    QWidget *spacePage;
    QWidget *groupPage;
    QHBoxLayout *horizontalLayout;
    QLabel *ico;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *minButton;
    QPushButton *closeButton;

    void setupUi(QMainWindow *testClass)
    {
        if (testClass->objectName().isEmpty())
            testClass->setObjectName(QStringLiteral("testClass"));
        testClass->resize(339, 532);
        centralWidget = new QWidget(testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(1000, 16777215));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        qq_image = new RoundButton(centralWidget);
        qq_image->setObjectName(QStringLiteral("qq_image"));
        qq_image->setMinimumSize(QSize(52, 52));
        qq_image->setMaximumSize(QSize(52, 52));

        horizontalLayout_2->addWidget(qq_image);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        qq_name = new QLabel(centralWidget);
        qq_name->setObjectName(QStringLiteral("qq_name"));
        qq_name->setMinimumSize(QSize(60, 20));
        qq_name->setMaximumSize(QSize(30, 20));

        gridLayout_2->addWidget(qq_name, 0, 0, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(20, 20));
        comboBox->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        qq_level = new QLabel(centralWidget);
        qq_level->setObjectName(QStringLiteral("qq_level"));
        qq_level->setMinimumSize(QSize(30, 20));
        qq_level->setMaximumSize(QSize(30, 20));

        gridLayout_2->addWidget(qq_level, 0, 2, 1, 1);

        statment = new QLineEdit(centralWidget);
        statment->setObjectName(QStringLiteral("statment"));
        statment->setMaximumSize(QSize(300, 20));

        gridLayout_2->addWidget(statment, 1, 0, 1, 4);


        horizontalLayout_2->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(0);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        messageButton = new QPushButton(centralWidget);
        messageButton->setObjectName(QStringLiteral("messageButton"));
        messageButton->setMinimumSize(QSize(0, 38));
        messageButton->setCheckable(true);

        buttonLayout->addWidget(messageButton);

        friendButton = new QPushButton(centralWidget);
        friendButton->setObjectName(QStringLiteral("friendButton"));
        friendButton->setMinimumSize(QSize(0, 38));
        friendButton->setCheckable(true);
        friendButton->setChecked(false);

        buttonLayout->addWidget(friendButton);

        spaceButton = new QPushButton(centralWidget);
        spaceButton->setObjectName(QStringLiteral("spaceButton"));
        spaceButton->setMinimumSize(QSize(0, 38));
        spaceButton->setCheckable(true);

        buttonLayout->addWidget(spaceButton);

        groupButton = new QPushButton(centralWidget);
        groupButton->setObjectName(QStringLiteral("groupButton"));
        groupButton->setEnabled(true);
        groupButton->setMinimumSize(QSize(0, 38));
        groupButton->setCheckable(true);

        buttonLayout->addWidget(groupButton);


        gridLayout_3->addLayout(buttonLayout, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        messagePage = new QWidget();
        messagePage->setObjectName(QStringLiteral("messagePage"));
        gridLayout = new QGridLayout(messagePage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        talkHistory = new MyListWidget(messagePage);
        talkHistory->setObjectName(QStringLiteral("talkHistory"));
        talkHistory->setEnabled(true);
        talkHistory->setFrameShape(QFrame::NoFrame);
        talkHistory->setFrameShadow(QFrame::Sunken);
        talkHistory->setLineWidth(0);

        gridLayout->addWidget(talkHistory, 0, 0, 1, 1);

        stackedWidget->addWidget(messagePage);
        friendPage = new QWidget();
        friendPage->setObjectName(QStringLiteral("friendPage"));
        friendLayout = new QGridLayout(friendPage);
        friendLayout->setSpacing(0);
        friendLayout->setContentsMargins(11, 11, 11, 11);
        friendLayout->setObjectName(QStringLiteral("friendLayout"));
        friendLayout->setContentsMargins(0, 0, 0, 0);
        friend_list = new MyTreeWidget(friendPage);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        friend_list->setHeaderItem(__qtreewidgetitem);
        friend_list->setObjectName(QStringLiteral("friend_list"));
        friend_list->header()->setVisible(false);
        friend_list->header()->setProperty("showSortIndicator", QVariant(false));

        friendLayout->addWidget(friend_list, 0, 0, 1, 1);

        stackedWidget->addWidget(friendPage);
        spacePage = new QWidget();
        spacePage->setObjectName(QStringLiteral("spacePage"));
        stackedWidget->addWidget(spacePage);
        groupPage = new QWidget();
        groupPage->setObjectName(QStringLiteral("groupPage"));
        stackedWidget->addWidget(groupPage);

        gridLayout_3->addWidget(stackedWidget, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ico = new QLabel(centralWidget);
        ico->setObjectName(QStringLiteral("ico"));
        ico->setPixmap(QPixmap(QString::fromUtf8(":/test/Resources/image/head.ico")));

        horizontalLayout->addWidget(ico);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(25, 25));
        pushButton_2->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_2);

        minButton = new QPushButton(centralWidget);
        minButton->setObjectName(QStringLiteral("minButton"));
        minButton->setMinimumSize(QSize(25, 25));
        minButton->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QStringLiteral(":/test/Resources/image/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        minButton->setIcon(icon);

        horizontalLayout->addWidget(minButton);

        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setMinimumSize(QSize(25, 25));
        closeButton->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/test/Resources/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);

        horizontalLayout->addWidget(closeButton);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        testClass->setCentralWidget(centralWidget);

        retranslateUi(testClass);
        QObject::connect(closeButton, SIGNAL(clicked()), testClass, SLOT(close()));
        QObject::connect(minButton, SIGNAL(clicked()), testClass, SLOT(lower()));

        stackedWidget->setCurrentIndex(0);
        talkHistory->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(testClass);
    } // setupUi

    void retranslateUi(QMainWindow *testClass)
    {
        testClass->setWindowTitle(QApplication::translate("testClass", "test", Q_NULLPTR));
        qq_name->setText(QApplication::translate("testClass", "TextLabel", Q_NULLPTR));
        qq_level->setText(QApplication::translate("testClass", "lv101", Q_NULLPTR));
        messageButton->setText(QString());
        friendButton->setText(QString());
        spaceButton->setText(QString());
        groupButton->setText(QString());
        ico->setText(QString());
        pushButton_2->setText(QString());
        minButton->setText(QString());
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class testClass: public Ui_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
