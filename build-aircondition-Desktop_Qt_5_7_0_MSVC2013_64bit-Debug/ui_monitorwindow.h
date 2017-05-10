/********************************************************************************
** Form generated from reading UI file 'monitorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORWINDOW_H
#define UI_MONITORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonitorWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QDoubleSpinBox *updatefrequency;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *infotable;

    void setupUi(QWidget *MonitorWindow)
    {
        if (MonitorWindow->objectName().isEmpty())
            MonitorWindow->setObjectName(QStringLiteral("MonitorWindow"));
        MonitorWindow->resize(631, 300);
        verticalLayout = new QVBoxLayout(MonitorWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(MonitorWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label);

        updatefrequency = new QDoubleSpinBox(MonitorWindow);
        updatefrequency->setObjectName(QStringLiteral("updatefrequency"));
        updatefrequency->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        updatefrequency->setDecimals(1);
        updatefrequency->setMinimum(0.2);
        updatefrequency->setMaximum(10);
        updatefrequency->setSingleStep(0.1);
        updatefrequency->setValue(1);

        horizontalLayout->addWidget(updatefrequency);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        infotable = new QTableWidget(MonitorWindow);
        if (infotable->columnCount() < 6)
            infotable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        infotable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        infotable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        infotable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        infotable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        infotable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        infotable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        infotable->setObjectName(QStringLiteral("infotable"));

        verticalLayout->addWidget(infotable);


        retranslateUi(MonitorWindow);

        QMetaObject::connectSlotsByName(MonitorWindow);
    } // setupUi

    void retranslateUi(QWidget *MonitorWindow)
    {
        MonitorWindow->setWindowTitle(QApplication::translate("MonitorWindow", "Form", 0));
        label->setText(QApplication::translate("MonitorWindow", "\345\210\267\346\226\260\351\242\221\347\216\207", 0));
        QTableWidgetItem *___qtablewidgetitem = infotable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MonitorWindow", "\346\210\277\351\227\264\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = infotable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MonitorWindow", "\345\275\223\345\211\215\346\270\251\345\272\246", 0));
        QTableWidgetItem *___qtablewidgetitem2 = infotable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MonitorWindow", "\350\256\276\345\256\232\346\270\251\345\272\246", 0));
        QTableWidgetItem *___qtablewidgetitem3 = infotable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MonitorWindow", "\351\243\216\351\200\237", 0));
        QTableWidgetItem *___qtablewidgetitem4 = infotable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MonitorWindow", "\345\267\262\347\224\250\350\203\275\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem5 = infotable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MonitorWindow", "\345\267\262\347\224\250\350\264\271\347\224\250", 0));
    } // retranslateUi

};

namespace Ui {
    class MonitorWindow: public Ui_MonitorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORWINDOW_H
