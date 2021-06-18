#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'editclient_widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLIENT_WIDGET_H
#define UI_EDITCLIENT_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "../../mibitWidgets/mibitlineedit.h"
#include "kdatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_clientEditor
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    MibitLineEdit *editClientPhone;
    QLabel *label;
    MibitLineEdit *editClientPoints;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    MibitLineEdit *editClientName;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    MibitLineEdit *editClientCode;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_18;
    MibitLineEdit *editClientCell;
    QLabel *label_2;
    MibitLineEdit *editClientDiscount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_16;
    QTextEdit *editClientAddress;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelClientPhoto;
    QPushButton *btnChangeClientPhoto;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    KDateWidget *sinceDatePicker;

    void setupUi(QWidget *clientEditor)
    {
        if (clientEditor->objectName().isEmpty())
            clientEditor->setObjectName(QString::fromUtf8("clientEditor"));
        clientEditor->resize(450, 242);
        clientEditor->setMinimumSize(QSize(0, 0));
        clientEditor->setMaximumSize(QSize(460, 242));
        gridLayout = new QGridLayout(clientEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_17 = new QLabel(clientEditor);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_6->addWidget(label_17);

        editClientPhone = new MibitLineEdit(clientEditor);
        editClientPhone->setObjectName(QString::fromUtf8("editClientPhone"));
        editClientPhone->setMinimumSize(QSize(0, 0));
        editClientPhone->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(editClientPhone);

        label = new QLabel(clientEditor);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        editClientPoints = new MibitLineEdit(clientEditor);
        editClientPoints->setObjectName(QString::fromUtf8("editClientPoints"));
        editClientPoints->setMinimumSize(QSize(0, 0));
        editClientPoints->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_6->addWidget(editClientPoints);


        gridLayout->addLayout(horizontalLayout_6, 4, 1, 1, 5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(clientEditor);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        editClientName = new MibitLineEdit(clientEditor);
        editClientName->setObjectName(QString::fromUtf8("editClientName"));

        horizontalLayout_3->addWidget(editClientName);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_14 = new QLabel(clientEditor);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout->addWidget(label_14);

        editClientCode = new MibitLineEdit(clientEditor);
        editClientCode->setObjectName(QString::fromUtf8("editClientCode"));

        horizontalLayout->addWidget(editClientCode);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_18 = new QLabel(clientEditor);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_8->addWidget(label_18);

        editClientCell = new MibitLineEdit(clientEditor);
        editClientCell->setObjectName(QString::fromUtf8("editClientCell"));
        editClientCell->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_8->addWidget(editClientCell);

        label_2 = new QLabel(clientEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        editClientDiscount = new MibitLineEdit(clientEditor);
        editClientDiscount->setObjectName(QString::fromUtf8("editClientDiscount"));
        editClientDiscount->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_8->addWidget(editClientDiscount);


        gridLayout->addLayout(horizontalLayout_8, 3, 1, 1, 5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_16 = new QLabel(clientEditor);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_4->addWidget(label_16);

        editClientAddress = new QTextEdit(clientEditor);
        editClientAddress->setObjectName(QString::fromUtf8("editClientAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editClientAddress->sizePolicy().hasHeightForWidth());
        editClientAddress->setSizePolicy(sizePolicy);
        editClientAddress->setMaximumSize(QSize(16777215, 40));
        editClientAddress->setTabChangesFocus(true);
        editClientAddress->setAcceptRichText(false);

        horizontalLayout_4->addWidget(editClientAddress);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelClientPhoto = new QLabel(clientEditor);
        labelClientPhoto->setObjectName(QString::fromUtf8("labelClientPhoto"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelClientPhoto->sizePolicy().hasHeightForWidth());
        labelClientPhoto->setSizePolicy(sizePolicy1);
        labelClientPhoto->setMinimumSize(QSize(128, 128));
        labelClientPhoto->setFrameShape(QFrame::StyledPanel);
        labelClientPhoto->setFrameShadow(QFrame::Sunken);
        labelClientPhoto->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelClientPhoto);

        btnChangeClientPhoto = new QPushButton(clientEditor);
        btnChangeClientPhoto->setObjectName(QString::fromUtf8("btnChangeClientPhoto"));
        btnChangeClientPhoto->setMinimumSize(QSize(130, 0));
        btnChangeClientPhoto->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_4->addWidget(btnChangeClientPhoto);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_4, 0, 7, 5, 2);

        label_3 = new QLabel(clientEditor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_3, 6, 1, 1, 1);

        sinceDatePicker = new KDateWidget(clientEditor);
        sinceDatePicker->setObjectName(QString::fromUtf8("sinceDatePicker"));
        sinceDatePicker->setMinimumSize(QSize(0, 0));
        sinceDatePicker->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(sinceDatePicker, 6, 2, 1, 4);

#ifndef UI_QT_NO_SHORTCUT
        label_17->setBuddy(editClientPhone);
        label_4->setBuddy(editClientName);
        label_14->setBuddy(editClientCode);
        label_18->setBuddy(editClientCell);
        label_16->setBuddy(editClientAddress);
#endif // QT_NO_SHORTCUT

        retranslateUi(clientEditor);

        QMetaObject::connectSlotsByName(clientEditor);
    } // setupUi

    void retranslateUi(QWidget *clientEditor)
    {
        clientEditor->setWindowTitle(tr2i18n("Form", 0));
        label_17->setText(tr2i18n("Phone:", 0));
        label->setText(tr2i18n("Points:", 0));
        label_4->setText(tr2i18n("&Name:", 0));
        label_14->setText(tr2i18n("&Code:", 0));
        label_18->setText(tr2i18n("E-mail:", 0));
        label_2->setText(tr2i18n("Discount:", 0));
        label_16->setText(tr2i18n("&Address:", 0));
        labelClientPhoto->setText(QString());
        btnChangeClientPhoto->setText(tr2i18n("Change &Photo", 0));
        label_3->setText(tr2i18n("Since:", 0));
    } // retranslateUi

};

namespace Ui {
    class clientEditor: public Ui_clientEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITCLIENT_WIDGET_H

