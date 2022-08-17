/********************************************************************************
** Form generated from reading UI file 'dialogfechamentopia.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFECHAMENTOPIA_H
#define UI_DIALOGFECHAMENTOPIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogFechamentoPia
{
public:
    QLabel *label_2;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton2Folhas;

    void setupUi(QDialog *DialogFechamentoPia)
    {
        if (DialogFechamentoPia->objectName().isEmpty())
            DialogFechamentoPia->setObjectName(QString::fromUtf8("DialogFechamentoPia"));
        DialogFechamentoPia->resize(430, 385);
        label_2 = new QLabel(DialogFechamentoPia);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 50, 159, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_2->setFont(font);
        label = new QLabel(DialogFechamentoPia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 131, 80));
        label->setFont(font);
        layoutWidget = new QWidget(DialogFechamentoPia);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 140, 231, 171));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton2Folhas = new QPushButton(layoutWidget);
        pushButton2Folhas->setObjectName(QString::fromUtf8("pushButton2Folhas"));
        pushButton2Folhas->setFont(font1);

        verticalLayout->addWidget(pushButton2Folhas);


        retranslateUi(DialogFechamentoPia);

        QMetaObject::connectSlotsByName(DialogFechamentoPia);
    } // setupUi

    void retranslateUi(QDialog *DialogFechamentoPia)
    {
        DialogFechamentoPia->setWindowTitle(QCoreApplication::translate("DialogFechamentoPia", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogFechamentoPia", "<html><head/><body><p><span style=\" font-size:36pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DialogFechamentoPia", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        pushButton2Folhas->setText(QCoreApplication::translate("DialogFechamentoPia", "Pia de 2 Folhas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFechamentoPia: public Ui_DialogFechamentoPia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFECHAMENTOPIA_H
