/********************************************************************************
** Form generated from reading UI file 'box.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOX_H
#define UI_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Box
{
public:
    QLabel *label_3;
    QLabel *label_16;
    QComboBox *comboBoxVidros_2;
    QPushButton *pushButtonADD;
    QLineEdit *lineEditAltura_2;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditValor_2;
    QLineEdit *lineEditLargura_2;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *Box)
    {
        if (Box->objectName().isEmpty())
            Box->setObjectName(QString::fromUtf8("Box"));
        Box->resize(623, 530);
        label_3 = new QLabel(Box);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 30, 171, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(26);
        font.setBold(false);
        label_3->setFont(font);
        label_16 = new QLabel(Box);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(90, 170, 111, 36));
        comboBoxVidros_2 = new QComboBox(Box);
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->setObjectName(QString::fromUtf8("comboBoxVidros_2"));
        comboBoxVidros_2->setEnabled(true);
        comboBoxVidros_2->setGeometry(QRect(340, 210, 178, 37));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(80);
        sizePolicy.setHeightForWidth(comboBoxVidros_2->sizePolicy().hasHeightForWidth());
        comboBoxVidros_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        comboBoxVidros_2->setFont(font1);
        pushButtonADD = new QPushButton(Box);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(400, 370, 93, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        pushButtonADD->setFont(font2);
        lineEditAltura_2 = new QLineEdit(Box);
        lineEditAltura_2->setObjectName(QString::fromUtf8("lineEditAltura_2"));
        lineEditAltura_2->setGeometry(QRect(210, 210, 121, 37));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditAltura_2->sizePolicy().hasHeightForWidth());
        lineEditAltura_2->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(16);
        lineEditAltura_2->setFont(font3);
        pushButton = new QPushButton(Box);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 310, 93, 51));
        pushButton->setFont(font1);
        layoutWidget_2 = new QWidget(Box);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(100, 310, 297, 114));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonCalcular_2 = new QPushButton(layoutWidget_2);
        pushButtonCalcular_2->setObjectName(QString::fromUtf8("pushButtonCalcular_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonCalcular_2->sizePolicy().hasHeightForWidth());
        pushButtonCalcular_2->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        pushButtonCalcular_2->setFont(font4);

        verticalLayout_8->addWidget(pushButtonCalcular_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);

        lineEditValor_2 = new QLineEdit(layoutWidget_2);
        lineEditValor_2->setObjectName(QString::fromUtf8("lineEditValor_2"));
        sizePolicy1.setHeightForWidth(lineEditValor_2->sizePolicy().hasHeightForWidth());
        lineEditValor_2->setSizePolicy(sizePolicy1);
        lineEditValor_2->setFont(font3);

        horizontalLayout_4->addWidget(lineEditValor_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        lineEditLargura_2 = new QLineEdit(Box);
        lineEditLargura_2->setObjectName(QString::fromUtf8("lineEditLargura_2"));
        lineEditLargura_2->setGeometry(QRect(70, 210, 131, 37));
        sizePolicy1.setHeightForWidth(lineEditLargura_2->sizePolicy().hasHeightForWidth());
        lineEditLargura_2->setSizePolicy(sizePolicy1);
        lineEditLargura_2->setFont(font3);
        label_21 = new QLabel(Box);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(340, 170, 178, 36));
        label_22 = new QLabel(Box);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(220, 170, 104, 36));
        label_7 = new QLabel(Box);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(500, 450, 101, 80));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font5.setPointSize(7);
        label_7->setFont(font5);
        label_8 = new QLabel(Box);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(540, 450, 61, 80));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_8->setFont(font6);
        QWidget::setTabOrder(lineEditLargura_2, lineEditAltura_2);
        QWidget::setTabOrder(lineEditAltura_2, comboBoxVidros_2);
        QWidget::setTabOrder(comboBoxVidros_2, pushButtonCalcular_2);
        QWidget::setTabOrder(pushButtonCalcular_2, pushButton);
        QWidget::setTabOrder(pushButton, lineEditValor_2);
        QWidget::setTabOrder(lineEditValor_2, pushButtonADD);

        retranslateUi(Box);

        QMetaObject::connectSlotsByName(Box);
    } // setupUi

    void retranslateUi(QDialog *Box)
    {
        Box->setWindowTitle(QCoreApplication::translate("Box", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Box", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700;\">Box</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("Box", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
        comboBoxVidros_2->setItemText(0, QString());
        comboBoxVidros_2->setItemText(1, QCoreApplication::translate("Box", "Incolor", nullptr));
        comboBoxVidros_2->setItemText(2, QCoreApplication::translate("Box", "Fum\303\252", nullptr));
        comboBoxVidros_2->setItemText(3, QCoreApplication::translate("Box", "Acr\303\255lico Branco", nullptr));
        comboBoxVidros_2->setItemText(4, QCoreApplication::translate("Box", "Acr\303\255lio Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros_2->setWhatsThis(QCoreApplication::translate("Box", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("Box", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("Box", "+", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura_2->setWhatsThis(QCoreApplication::translate("Box", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("Box", "-5%", nullptr));
        pushButtonCalcular_2->setText(QCoreApplication::translate("Box", "CALCULAR", nullptr));
        label_14->setText(QCoreApplication::translate("Box", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura_2->setWhatsThis(QCoreApplication::translate("Box", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_21->setText(QCoreApplication::translate("Box", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("Box", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Box", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Box", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Box: public Ui_Box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOX_H
