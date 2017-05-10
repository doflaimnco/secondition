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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *TLabel;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *IncreaseTButton;
    QPushButton *DecreaseTButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *OpenCloseButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ColdModeButton;
    QPushButton *WarmModeButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *MonitorButton;
    QPushButton *ReportButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        TLabel = new QLabel(centralWidget);
        TLabel->setObjectName(QStringLiteral("TLabel"));
        TLabel->setEnabled(true);
        TLabel->setStyleSheet(QStringLiteral("font: 25pt \"Consolas\";"));
        TLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(TLabel);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 25pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(label_2);


        horizontalLayout->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        IncreaseTButton = new QPushButton(centralWidget);
        IncreaseTButton->setObjectName(QStringLiteral("IncreaseTButton"));
        IncreaseTButton->setEnabled(false);
        IncreaseTButton->setMaximumSize(QSize(35, 35));
        IncreaseTButton->setFlat(false);

        verticalLayout_2->addWidget(IncreaseTButton);

        DecreaseTButton = new QPushButton(centralWidget);
        DecreaseTButton->setObjectName(QStringLiteral("DecreaseTButton"));
        DecreaseTButton->setEnabled(false);
        DecreaseTButton->setMaximumSize(QSize(35, 35));

        verticalLayout_2->addWidget(DecreaseTButton);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        OpenCloseButton = new QPushButton(centralWidget);
        OpenCloseButton->setObjectName(QStringLiteral("OpenCloseButton"));
        OpenCloseButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(OpenCloseButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ColdModeButton = new QPushButton(centralWidget);
        ColdModeButton->setObjectName(QStringLiteral("ColdModeButton"));
        ColdModeButton->setEnabled(false);
        ColdModeButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        ColdModeButton->setCheckable(true);
        ColdModeButton->setChecked(true);
        ColdModeButton->setAutoExclusive(true);

        horizontalLayout_2->addWidget(ColdModeButton);

        WarmModeButton = new QPushButton(centralWidget);
        WarmModeButton->setObjectName(QStringLiteral("WarmModeButton"));
        WarmModeButton->setEnabled(false);
        WarmModeButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        WarmModeButton->setCheckable(true);
        WarmModeButton->setAutoExclusive(true);

        horizontalLayout_2->addWidget(WarmModeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        MonitorButton = new QPushButton(centralWidget);
        MonitorButton->setObjectName(QStringLiteral("MonitorButton"));
        MonitorButton->setEnabled(false);
        MonitorButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(MonitorButton);

        ReportButton = new QPushButton(centralWidget);
        ReportButton->setObjectName(QStringLiteral("ReportButton"));
        ReportButton->setEnabled(false);
        ReportButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(ReportButton);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        ColdModeButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        TLabel->setText(QApplication::translate("MainWindow", "--", 0));
        label_2->setText(QApplication::translate("MainWindow", "\342\204\203", 0));
        IncreaseTButton->setText(QApplication::translate("MainWindow", "+", 0));
        DecreaseTButton->setText(QApplication::translate("MainWindow", "-", 0));
        OpenCloseButton->setText(QApplication::translate("MainWindow", "\345\274\200\346\234\272", 0));
        ColdModeButton->setText(QApplication::translate("MainWindow", "\345\210\266\345\206\267", 0));
        WarmModeButton->setText(QApplication::translate("MainWindow", "\345\210\266\347\203\255", 0));
        MonitorButton->setText(QApplication::translate("MainWindow", "\344\273\216\346\216\247\346\234\272\350\277\220\350\241\214\347\212\266\345\206\265", 0));
        ReportButton->setText(QApplication::translate("MainWindow", "\346\212\245\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
