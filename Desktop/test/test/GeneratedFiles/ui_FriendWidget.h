/********************************************************************************
** Form generated from reading UI file 'FriendWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDWIDGET_H
#define UI_FRIENDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "roundlabel.hpp"

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QGridLayout *gridLayout_2;
    roundLabel *image;
    QGridLayout *gridLayout;
    QLabel *name;
    QSpacerItem *horizontalSpacer;
    QLabel *statment;
    QLabel *timer;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->resize(377, 65);
        gridLayout_2 = new QGridLayout(mainWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        image = new roundLabel(mainWidget);
        image->setObjectName(QStringLiteral("image"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);
        image->setMinimumSize(QSize(30, 30));
        image->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(image, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        name = new QLabel(mainWidget);
        name->setObjectName(QStringLiteral("name"));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMinimumSize(QSize(50, 15));
        name->setMaximumSize(QSize(15, 15));

        gridLayout->addWidget(name, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(272, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        statment = new QLabel(mainWidget);
        statment->setObjectName(QStringLiteral("statment"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statment->sizePolicy().hasHeightForWidth());
        statment->setSizePolicy(sizePolicy1);
        statment->setMinimumSize(QSize(150, 10));
        statment->setMaximumSize(QSize(300, 10));

        gridLayout->addWidget(statment, 1, 0, 1, 2);

        timer = new QLabel(mainWidget);
        timer->setObjectName(QStringLiteral("timer"));
        timer->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(timer->sizePolicy().hasHeightForWidth());
        timer->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(timer, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "Form", Q_NULLPTR));
        image->setText(QApplication::translate("mainWidget", "TextLabel", Q_NULLPTR));
        name->setText(QApplication::translate("mainWidget", "TextLabel", Q_NULLPTR));
        statment->setText(QApplication::translate("mainWidget", "TextLabel", Q_NULLPTR));
        timer->setText(QApplication::translate("mainWidget", "10:20", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDWIDGET_H
