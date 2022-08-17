/********************************************************************************
** Form generated from reading UI file 'dialogtemperado.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEMPERADO_H
#define UI_DIALOGTEMPERADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTemperado
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonPorta;
    QPushButton *pushButtonJanela;

    void setupUi(QDialog *DialogTemperado)
    {
        if (DialogTemperado->objectName().isEmpty())
            DialogTemperado->setObjectName(QString::fromUtf8("DialogTemperado"));
        DialogTemperado->resize(430, 385);
        label = new QLabel(DialogTemperado);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 131, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label->setFont(font);
        label_2 = new QLabel(DialogTemperado);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 10, 159, 80));
        label_2->setFont(font);
        layoutWidget = new QWidget(DialogTemperado);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 110, 231, 131));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonPorta = new QPushButton(layoutWidget);
        pushButtonPorta->setObjectName(QString::fromUtf8("pushButtonPorta"));
        pushButtonPorta->setFont(font1);

        verticalLayout->addWidget(pushButtonPorta);

        pushButtonJanela = new QPushButton(layoutWidget);
        pushButtonJanela->setObjectName(QString::fromUtf8("pushButtonJanela"));
        pushButtonJanela->setFont(font1);

        verticalLayout->addWidget(pushButtonJanela);


        retranslateUi(DialogTemperado);

        QMetaObject::connectSlotsByName(DialogTemperado);
    } // setupUi

    void retranslateUi(QDialog *DialogTemperado)
    {
        DialogTemperado->setWindowTitle(QCoreApplication::translate("DialogTemperado", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogTemperado", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogTemperado", "<html><head/><body><p><span style=\" font-size:36pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        pushButtonPorta->setText(QCoreApplication::translate("DialogTemperado", "Porta", nullptr));
        pushButtonJanela->setText(QCoreApplication::translate("DialogTemperado", "Janela", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTemperado: public Ui_DialogTemperado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEMPERADO_H
