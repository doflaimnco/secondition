/********************************************************************************
** Form generated from reading UI file 'reportwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWINDOW_H
#define UI_REPORTWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *DayFormatButton;
    QRadioButton *MonthFormatButton;
    QRadioButton *WeekFormatButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *UpdateButton;
    QPushButton *ClearButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *SelectStackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *DayChoose;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *MonthChoose;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *WeekChoose;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *RoomNumberCombox;
    QSpacerItem *horizontalSpacer;
    QTableWidget *reporttable;

    void setupUi(QWidget *ReportWindow)
    {
        if (ReportWindow->objectName().isEmpty())
            ReportWindow->setObjectName(QStringLiteral("ReportWindow"));
        ReportWindow->resize(509, 391);
        verticalLayout = new QVBoxLayout(ReportWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(ReportWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        DayFormatButton = new QRadioButton(groupBox);
        DayFormatButton->setObjectName(QStringLiteral("DayFormatButton"));
        DayFormatButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        DayFormatButton->setChecked(true);

        horizontalLayout_4->addWidget(DayFormatButton);

        MonthFormatButton = new QRadioButton(groupBox);
        MonthFormatButton->setObjectName(QStringLiteral("MonthFormatButton"));
        MonthFormatButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(MonthFormatButton);

        WeekFormatButton = new QRadioButton(groupBox);
        WeekFormatButton->setObjectName(QStringLiteral("WeekFormatButton"));
        WeekFormatButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(WeekFormatButton);


        horizontalLayout_2->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        UpdateButton = new QPushButton(ReportWindow);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_7->addWidget(UpdateButton);

        ClearButton = new QPushButton(ReportWindow);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));
        ClearButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_7->addWidget(ClearButton);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        SelectStackedWidget = new QStackedWidget(ReportWindow);
        SelectStackedWidget->setObjectName(QStringLiteral("SelectStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_3 = new QHBoxLayout(page);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        DayChoose = new QDateEdit(page);
        DayChoose->setObjectName(QStringLiteral("DayChoose"));
        DayChoose->setDateTime(QDateTime(QDate(2017, 1, 1), QTime(0, 0, 0)));
        DayChoose->setMaximumDateTime(QDateTime(QDate(2017, 12, 31), QTime(23, 59, 59)));
        DayChoose->setMinimumDateTime(QDateTime(QDate(2017, 1, 1), QTime(0, 0, 0)));
        DayChoose->setMaximumDate(QDate(2017, 12, 31));
        DayChoose->setCurrentSection(QDateTimeEdit::MonthSection);
        DayChoose->setCalendarPopup(true);

        horizontalLayout_3->addWidget(DayChoose);

        SelectStackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_6 = new QHBoxLayout(page_3);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        MonthChoose = new QComboBox(page_3);
        MonthChoose->setObjectName(QStringLiteral("MonthChoose"));

        horizontalLayout_6->addWidget(MonthChoose);

        SelectStackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        horizontalLayout_5 = new QHBoxLayout(page_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        WeekChoose = new QComboBox(page_2);
        WeekChoose->setObjectName(QStringLiteral("WeekChoose"));

        horizontalLayout_5->addWidget(WeekChoose);

        SelectStackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(SelectStackedWidget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_2 = new QLabel(ReportWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(ReportWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label);

        RoomNumberCombox = new QComboBox(ReportWindow);
        RoomNumberCombox->setObjectName(QStringLiteral("RoomNumberCombox"));

        horizontalLayout->addWidget(RoomNumberCombox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        reporttable = new QTableWidget(ReportWindow);
        if (reporttable->columnCount() < 4)
            reporttable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        reporttable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        reporttable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        reporttable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        reporttable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        reporttable->setObjectName(QStringLiteral("reporttable"));
        reporttable->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(reporttable);


        retranslateUi(ReportWindow);

        SelectStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ReportWindow);
    } // setupUi

    void retranslateUi(QWidget *ReportWindow)
    {
        ReportWindow->setWindowTitle(QApplication::translate("ReportWindow", "Form", 0));
        groupBox->setTitle(QApplication::translate("ReportWindow", "\346\212\245\350\241\250\347\261\273\345\236\213", 0));
        DayFormatButton->setText(QApplication::translate("ReportWindow", "\346\227\245\346\212\245\350\241\250", 0));
        MonthFormatButton->setText(QApplication::translate("ReportWindow", "\345\221\250\346\212\245\350\241\250", 0));
        WeekFormatButton->setText(QApplication::translate("ReportWindow", "\346\234\210\346\212\245\350\241\250", 0));
        UpdateButton->setText(QApplication::translate("ReportWindow", "\345\210\267\346\226\260", 0));
        ClearButton->setText(QApplication::translate("ReportWindow", "\346\270\205\347\251\272\346\225\260\346\215\256\345\272\223", 0));
        DayChoose->setDisplayFormat(QApplication::translate("ReportWindow", "MMM/d", 0));
        MonthChoose->clear();
        MonthChoose->insertItems(0, QStringList()
         << QApplication::translate("ReportWindow", "\344\270\200\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\344\272\214\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\344\270\211\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\345\233\233\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\344\272\224\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\345\205\255\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\344\270\203\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\345\205\253\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\344\271\235\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\345\215\201\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\345\215\201\344\270\200\346\234\210", 0)
         << QApplication::translate("ReportWindow", "\345\215\201\344\272\214\346\234\210", 0)
        );
        WeekChoose->clear();
        WeekChoose->insertItems(0, QStringList()
         << QApplication::translate("ReportWindow", "\347\254\2541\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2542\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2543\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2544\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2545\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2546\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2547\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2548\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\2549\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25410\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25411\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25412\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25413\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25414\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25415\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25416\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25417\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25418\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25419\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25420\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25421\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25422\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25423\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25424\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25425\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25426\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25427\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25428\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25429\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25430\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25431\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25432\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25433\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25434\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25435\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25436\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25437\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25438\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25439\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25440\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25441\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25442\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25443\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25444\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25445\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25446\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25447\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25448\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25449\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25450\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25451\345\221\250", 0)
         << QApplication::translate("ReportWindow", "\347\254\25452\345\221\250", 0)
        );
        label_2->setText(QApplication::translate("ReportWindow", "\345\215\225\345\207\273\346\270\251\346\216\247\346\254\241\346\225\260\346\230\276\347\244\272\350\257\246\347\273\206\346\270\251\346\216\247\344\277\241\346\201\257", 0));
        label->setText(QApplication::translate("ReportWindow", "\346\210\277\351\227\264\345\217\267", 0));
        RoomNumberCombox->clear();
        RoomNumberCombox->insertItems(0, QStringList()
         << QApplication::translate("ReportWindow", "\345\205\250\351\203\250", 0)
         << QApplication::translate("ReportWindow", "1", 0)
         << QApplication::translate("ReportWindow", "2", 0)
         << QApplication::translate("ReportWindow", "3", 0)
         << QApplication::translate("ReportWindow", "4", 0)
         << QApplication::translate("ReportWindow", "5", 0)
         << QApplication::translate("ReportWindow", "6", 0)
         << QApplication::translate("ReportWindow", "7", 0)
         << QApplication::translate("ReportWindow", "8", 0)
         << QApplication::translate("ReportWindow", "9", 0)
        );
        QTableWidgetItem *___qtablewidgetitem = reporttable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ReportWindow", "\346\210\277\351\227\264\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = reporttable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ReportWindow", "\345\274\200\345\205\263\346\234\272\346\254\241\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = reporttable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ReportWindow", "\346\270\251\346\216\247\346\254\241\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem3 = reporttable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ReportWindow", "\350\264\271\347\224\250", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportWindow: public Ui_ReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWINDOW_H
