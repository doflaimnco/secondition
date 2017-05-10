/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLabel *RoomID;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *OpenClose;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *CurrentTemp;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *CurrentMode;
    QFrame *CurrentTemp_2;
    QLabel *label_12;
    QLabel *SetTemp;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *IncreaseTemp;
    QPushButton *DecreaseTemp;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *LowWind;
    QPushButton *MidWind;
    QPushButton *HighWind;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *UsedFee;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QLabel *UsedEnergy;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(478, 341);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label);

        RoomID = new QLabel(centralWidget);
        RoomID->setObjectName(QStringLiteral("RoomID"));

        horizontalLayout_7->addWidget(RoomID);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        OpenClose = new QPushButton(centralWidget);
        OpenClose->setObjectName(QStringLiteral("OpenClose"));
        OpenClose->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_7->addWidget(OpenClose);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(label_11);

        CurrentTemp = new QLabel(centralWidget);
        CurrentTemp->setObjectName(QStringLiteral("CurrentTemp"));
        CurrentTemp->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(CurrentTemp);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(label_14);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(label_9);

        CurrentMode = new QLabel(centralWidget);
        CurrentMode->setObjectName(QStringLiteral("CurrentMode"));
        CurrentMode->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(CurrentMode);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_3);

        CurrentTemp_2 = new QFrame(centralWidget);
        CurrentTemp_2->setObjectName(QStringLiteral("CurrentTemp_2"));
        CurrentTemp_2->setFrameShape(QFrame::StyledPanel);
        CurrentTemp_2->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(CurrentTemp_2);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_12);

        SetTemp = new QLabel(centralWidget);
        SetTemp->setObjectName(QStringLiteral("SetTemp"));
        SetTemp->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        SetTemp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(SetTemp);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        IncreaseTemp = new QPushButton(centralWidget);
        IncreaseTemp->setObjectName(QStringLiteral("IncreaseTemp"));
        IncreaseTemp->setEnabled(false);
        IncreaseTemp->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(IncreaseTemp);

        DecreaseTemp = new QPushButton(centralWidget);
        DecreaseTemp->setObjectName(QStringLiteral("DecreaseTemp"));
        DecreaseTemp->setEnabled(false);
        DecreaseTemp->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(DecreaseTemp);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        LowWind = new QPushButton(centralWidget);
        LowWind->setObjectName(QStringLiteral("LowWind"));
        LowWind->setEnabled(false);
        LowWind->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LowWind->setCheckable(true);

        horizontalLayout_4->addWidget(LowWind);

        MidWind = new QPushButton(centralWidget);
        MidWind->setObjectName(QStringLiteral("MidWind"));
        MidWind->setEnabled(false);
        MidWind->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        MidWind->setCheckable(true);

        horizontalLayout_4->addWidget(MidWind);

        HighWind = new QPushButton(centralWidget);
        HighWind->setObjectName(QStringLiteral("HighWind"));
        HighWind->setEnabled(false);
        HighWind->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        HighWind->setCheckable(true);

        horizontalLayout_4->addWidget(HighWind);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_3);

        UsedFee = new QLabel(centralWidget);
        UsedFee->setObjectName(QStringLiteral("UsedFee"));
        UsedFee->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        UsedFee->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(UsedFee);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(label_6);

        UsedEnergy = new QLabel(centralWidget);
        UsedEnergy->setObjectName(QStringLiteral("UsedEnergy"));
        UsedEnergy->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        UsedEnergy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(UsedEnergy);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\346\210\277\351\227\264\345\217\267\357\274\232", 0));
        RoomID->setText(QString());
        OpenClose->setText(QApplication::translate("MainWindow", "\345\274\200\346\234\272", 0));
        label_11->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\270\251\345\272\246\357\274\232", 0));
        CurrentTemp->setText(QApplication::translate("MainWindow", "--", 0));
        label_14->setText(QApplication::translate("MainWindow", "\342\204\203", 0));
        label_9->setText(QApplication::translate("MainWindow", "\346\250\241\345\274\217\357\274\232", 0));
        CurrentMode->setText(QApplication::translate("MainWindow", "----", 0));
        label_12->setText(QApplication::translate("MainWindow", "\350\256\276\345\256\232\346\270\251\345\272\246\357\274\232", 0));
        SetTemp->setText(QApplication::translate("MainWindow", "--", 0));
        label_2->setText(QApplication::translate("MainWindow", "\342\204\203", 0));
        IncreaseTemp->setText(QApplication::translate("MainWindow", "+", 0));
        DecreaseTemp->setText(QApplication::translate("MainWindow", "-", 0));
        LowWind->setText(QApplication::translate("MainWindow", "\344\275\216\351\243\216", 0));
        MidWind->setText(QApplication::translate("MainWindow", "\344\270\255\351\243\216", 0));
        HighWind->setText(QApplication::translate("MainWindow", "\351\253\230\351\243\216", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\267\262\347\224\250\350\264\271\347\224\250\357\274\232", 0));
        UsedFee->setText(QApplication::translate("MainWindow", "-", 0));
        label_7->setText(QApplication::translate("MainWindow", "\345\205\203", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\267\262\347\224\250\350\203\275\351\207\217\357\274\232", 0));
        UsedEnergy->setText(QApplication::translate("MainWindow", "-", 0));
        label_8->setText(QApplication::translate("MainWindow", "J", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
