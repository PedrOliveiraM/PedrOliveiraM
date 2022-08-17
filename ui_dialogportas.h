/********************************************************************************
** Form generated from reading UI file 'dialogportas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPORTAS_H
#define UI_DIALOGPORTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPortas
{
public:
    QLabel *label_2;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonAbrir;
    QPushButton *pushButtonCorrer1F;
    QPushButton *pushButton2Folhas;
    QPushButton *pushButton4folhas;

    void setupUi(QDialog *DialogPortas)
    {
        if (DialogPortas->objectName().isEmpty())
            DialogPortas->setObjectName(QString::fromUtf8("DialogPortas"));
        DialogPortas->resize(430, 385);
        label_2 = new QLabel(DialogPortas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 10, 159, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_2->setFont(font);
        label = new QLabel(DialogPortas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 131, 80));
        label->setFont(font);
        layoutWidget = new QWidget(DialogPortas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 100, 231, 171));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAbrir = new QPushButton(layoutWidget);
        pushButtonAbrir->setObjectName(QString::fromUtf8("pushButtonAbrir"));
        pushButtonAbrir->setFont(font1);

        verticalLayout->addWidget(pushButtonAbrir);

        pushButtonCorrer1F = new QPushButton(layoutWidget);
        pushButtonCorrer1F->setObjectName(QString::fromUtf8("pushButtonCorrer1F"));
        pushButtonCorrer1F->setFont(font1);

        verticalLayout->addWidget(pushButtonCorrer1F);

        pushButton2Folhas = new QPushButton(layoutWidget);
        pushButton2Folhas->setObjectName(QString::fromUtf8("pushButton2Folhas"));
        pushButton2Folhas->setFont(font1);

        verticalLayout->addWidget(pushButton2Folhas);

        pushButton4folhas = new QPushButton(layoutWidget);
        pushButton4folhas->setObjectName(QString::fromUtf8("pushButton4folhas"));
        pushButton4folhas->setFont(font1);

        verticalLayout->addWidget(pushButton4folhas);


        retranslateUi(DialogPortas);

        QMetaObject::connectSlotsByName(DialogPortas);
    } // setupUi

    void retranslateUi(QDialog *DialogPortas)
    {
        DialogPortas->setWindowTitle(QCoreApplication::translate("DialogPortas", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogPortas", "<html><head/><body><p><span style=\" font-size:36pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DialogPortas", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        pushButtonAbrir->setText(QCoreApplication::translate("DialogPortas", "Porta de Abrir", nullptr));
        pushButtonCorrer1F->setText(QCoreApplication::translate("DialogPortas", "Porta 1 Folha Correr", nullptr));
        pushButton2Folhas->setText(QCoreApplication::translate("DialogPortas", "Porta de 2 Folhas", nullptr));
        pushButton4folhas->setText(QCoreApplication::translate("DialogPortas", "Porta de 4 Folhas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPortas: public Ui_DialogPortas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPORTAS_H
