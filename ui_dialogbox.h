/********************************************************************************
** Form generated from reading UI file 'dialogbox.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOX_H
#define UI_DIALOGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogBox
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonPorta;
    QPushButton *pushButtonJanela;
    QLabel *label_2;

    void setupUi(QDialog *DialogBox)
    {
        if (DialogBox->objectName().isEmpty())
            DialogBox->setObjectName(QString::fromUtf8("DialogBox"));
        DialogBox->resize(430, 385);
        label = new QLabel(DialogBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 131, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label->setFont(font);
        layoutWidget = new QWidget(DialogBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 150, 231, 131));
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

        label_2 = new QLabel(DialogBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 50, 159, 80));
        label_2->setFont(font);

        retranslateUi(DialogBox);

        QMetaObject::connectSlotsByName(DialogBox);
    } // setupUi

    void retranslateUi(QDialog *DialogBox)
    {
        DialogBox->setWindowTitle(QCoreApplication::translate("DialogBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogBox", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        pushButtonPorta->setText(QCoreApplication::translate("DialogBox", "Box Frontal", nullptr));
        pushButtonJanela->setText(QCoreApplication::translate("DialogBox", "Box de Canto", nullptr));
        label_2->setText(QCoreApplication::translate("DialogBox", "<html><head/><body><p><span style=\" font-size:36pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBox: public Ui_DialogBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOX_H
