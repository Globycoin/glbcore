/********************************************************************************
** Form generated from reading UI file 'zglobycoincontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGLOBYCOINCONTROLDIALOG_H
#define UI_ZGLOBYCOINCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZGlobycoinControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZGlobycoin;
    QLabel *labelZGlobycoin_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZGlobycoinControlDialog)
    {
        if (ZGlobycoinControlDialog->objectName().isEmpty())
            ZGlobycoinControlDialog->setObjectName(QStringLiteral("ZGlobycoinControlDialog"));
        ZGlobycoinControlDialog->resize(681, 384);
        ZGlobycoinControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZGlobycoinControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZGlobycoinControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZGlobycoinControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZGlobycoin = new QLabel(ZGlobycoinControlDialog);
        labelZGlobycoin->setObjectName(QStringLiteral("labelZGlobycoin"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZGlobycoin);

        labelZGlobycoin_int = new QLabel(ZGlobycoinControlDialog);
        labelZGlobycoin_int->setObjectName(QStringLiteral("labelZGlobycoin_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZGlobycoin_int);

        pushButtonAll = new QPushButton(ZGlobycoinControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZGlobycoinControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zGlobycoin Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZGlobycoinControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZGlobycoinControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZGlobycoinControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZGlobycoinControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZGlobycoinControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZGlobycoinControlDialog)
    {
        ZGlobycoinControlDialog->setWindowTitle(QApplication::translate("ZGlobycoinControlDialog", "Select zGlobycoin to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZGlobycoinControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZGlobycoinControlDialog", "0", 0));
        labelZGlobycoin->setText(QApplication::translate("ZGlobycoinControlDialog", "zGlobycoin", 0));
        labelZGlobycoin_int->setText(QApplication::translate("ZGlobycoinControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZGlobycoinControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZGlobycoinControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZGlobycoinControlDialog: public Ui_ZGlobycoinControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGLOBYCOINCONTROLDIALOG_H
