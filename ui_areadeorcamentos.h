/********************************************************************************
** Form generated from reading UI file 'areadeorcamentos.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREADEORCAMENTOS_H
#define UI_AREADEORCAMENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AreaDeOrcamentos
{
public:
    QLabel *label;
    QTableWidget *tableWidgetA;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAlterar;
    QPushButton *pushButtonExcluir;
    QPushButton *pushButtonSoma;
    QPushButton *pushButtonVer;

    void setupUi(QDialog *AreaDeOrcamentos)
    {
        if (AreaDeOrcamentos->objectName().isEmpty())
            AreaDeOrcamentos->setObjectName(QString::fromUtf8("AreaDeOrcamentos"));
        AreaDeOrcamentos->resize(850, 524);
        label = new QLabel(AreaDeOrcamentos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 441, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(36);
        label->setFont(font);
        tableWidgetA = new QTableWidget(AreaDeOrcamentos);
        if (tableWidgetA->columnCount() < 4)
            tableWidgetA->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetA->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetA->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetA->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetA->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetA->setObjectName(QString::fromUtf8("tableWidgetA"));
        tableWidgetA->setGeometry(QRect(170, 220, 505, 271));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        tableWidgetA->setFont(font1);
        comboBox = new QComboBox(AreaDeOrcamentos);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 140, 321, 28));
        comboBox->setFont(font1);
        layoutWidget = new QWidget(AreaDeOrcamentos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 180, 501, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAlterar = new QPushButton(layoutWidget);
        pushButtonAlterar->setObjectName(QString::fromUtf8("pushButtonAlterar"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pushButtonAlterar->setFont(font2);

        horizontalLayout->addWidget(pushButtonAlterar);

        pushButtonExcluir = new QPushButton(layoutWidget);
        pushButtonExcluir->setObjectName(QString::fromUtf8("pushButtonExcluir"));
        pushButtonExcluir->setFont(font2);

        horizontalLayout->addWidget(pushButtonExcluir);

        pushButtonSoma = new QPushButton(layoutWidget);
        pushButtonSoma->setObjectName(QString::fromUtf8("pushButtonSoma"));
        pushButtonSoma->setFont(font2);

        horizontalLayout->addWidget(pushButtonSoma);

        pushButtonVer = new QPushButton(AreaDeOrcamentos);
        pushButtonVer->setObjectName(QString::fromUtf8("pushButtonVer"));
        pushButtonVer->setGeometry(QRect(520, 140, 131, 32));
        pushButtonVer->setFont(font2);

        retranslateUi(AreaDeOrcamentos);

        QMetaObject::connectSlotsByName(AreaDeOrcamentos);
    } // setupUi

    void retranslateUi(QDialog *AreaDeOrcamentos)
    {
        AreaDeOrcamentos->setWindowTitle(QCoreApplication::translate("AreaDeOrcamentos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AreaDeOrcamentos", "<html><head/><body><p><span style=\" font-size:48pt;\">Or\303\247amentos</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetA->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AreaDeOrcamentos", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetA->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AreaDeOrcamentos", "Quantidades", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetA->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AreaDeOrcamentos", "Produto", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetA->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AreaDeOrcamentos", "Valor", nullptr));
        pushButtonAlterar->setText(QCoreApplication::translate("AreaDeOrcamentos", "Alterar", nullptr));
        pushButtonExcluir->setText(QCoreApplication::translate("AreaDeOrcamentos", "Excluir", nullptr));
        pushButtonSoma->setText(QCoreApplication::translate("AreaDeOrcamentos", "Soma", nullptr));
        pushButtonVer->setText(QCoreApplication::translate("AreaDeOrcamentos", "Ver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AreaDeOrcamentos: public Ui_AreaDeOrcamentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREADEORCAMENTOS_H
