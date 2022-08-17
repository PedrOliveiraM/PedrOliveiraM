/********************************************************************************
** Form generated from reading UI file 'portadeabrir.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTADEABRIR_H
#define UI_PORTADEABRIR_H

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

class Ui_PortaDeAbrir
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *labelProduto;
    QLabel *label_4;
    QLineEdit *lineEditAltura_2;
    QLabel *label_19;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditValor_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QComboBox *comboBoxPelicula;
    QLabel *label_18;
    QComboBox *comboBoxKit;
    QLabel *label_20;
    QLabel *label_21;
    QComboBox *comboBoxKitCantoneira;
    QComboBox *comboBoxPuxador;
    QLabel *label_22;
    QLineEdit *lineEditLargura_2;
    QComboBox *comboBoxTrinco;
    QPushButton *pushButton;
    QComboBox *comboBoxVidros_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButtonADD;

    void setupUi(QDialog *PortaDeAbrir)
    {
        if (PortaDeAbrir->objectName().isEmpty())
            PortaDeAbrir->setObjectName(QString::fromUtf8("PortaDeAbrir"));
        PortaDeAbrir->resize(1405, 541);
        label = new QLabel(PortaDeAbrir);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(930, 220, 101, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(7);
        label->setFont(font);
        label_2 = new QLabel(PortaDeAbrir);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(970, 220, 61, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_2->setFont(font1);
        labelProduto = new QLabel(PortaDeAbrir);
        labelProduto->setObjectName(QString::fromUtf8("labelProduto"));
        labelProduto->setGeometry(QRect(560, 50, 401, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(26);
        font2.setBold(false);
        labelProduto->setFont(font2);
        label_4 = new QLabel(PortaDeAbrir);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 30, 61, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(36);
        font3.setBold(false);
        label_4->setFont(font3);
        lineEditAltura_2 = new QLineEdit(PortaDeAbrir);
        lineEditAltura_2->setObjectName(QString::fromUtf8("lineEditAltura_2"));
        lineEditAltura_2->setGeometry(QRect(160, 230, 121, 37));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditAltura_2->sizePolicy().hasHeightForWidth());
        lineEditAltura_2->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(16);
        lineEditAltura_2->setFont(font4);
        label_19 = new QLabel(PortaDeAbrir);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(670, 190, 178, 36));
        layoutWidget_2 = new QWidget(PortaDeAbrir);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(500, 320, 297, 114));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonCalcular_2 = new QPushButton(layoutWidget_2);
        pushButtonCalcular_2->setObjectName(QString::fromUtf8("pushButtonCalcular_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonCalcular_2->sizePolicy().hasHeightForWidth());
        pushButtonCalcular_2->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        pushButtonCalcular_2->setFont(font5);

        verticalLayout_8->addWidget(pushButtonCalcular_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);

        lineEditValor_2 = new QLineEdit(layoutWidget_2);
        lineEditValor_2->setObjectName(QString::fromUtf8("lineEditValor_2"));
        sizePolicy.setHeightForWidth(lineEditValor_2->sizePolicy().hasHeightForWidth());
        lineEditValor_2->setSizePolicy(sizePolicy);
        lineEditValor_2->setFont(font4);

        horizontalLayout_4->addWidget(lineEditValor_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        label_15 = new QLabel(PortaDeAbrir);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(1220, 190, 178, 36));
        label_16 = new QLabel(PortaDeAbrir);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(40, 190, 111, 36));
        label_17 = new QLabel(PortaDeAbrir);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(1040, 190, 178, 36));
        comboBoxPelicula = new QComboBox(PortaDeAbrir);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName(QString::fromUtf8("comboBoxPelicula"));
        comboBoxPelicula->setEnabled(true);
        comboBoxPelicula->setGeometry(QRect(1050, 230, 178, 37));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(80);
        sizePolicy2.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy2);
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        comboBoxPelicula->setFont(font6);
        label_18 = new QLabel(PortaDeAbrir);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(480, 190, 178, 41));
        comboBoxKit = new QComboBox(PortaDeAbrir);
        comboBoxKit->addItem(QString());
        comboBoxKit->addItem(QString());
        comboBoxKit->addItem(QString());
        comboBoxKit->setObjectName(QString::fromUtf8("comboBoxKit"));
        comboBoxKit->setEnabled(true);
        comboBoxKit->setGeometry(QRect(670, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxKit->sizePolicy().hasHeightForWidth());
        comboBoxKit->setSizePolicy(sizePolicy2);
        comboBoxKit->setFont(font6);
        label_20 = new QLabel(PortaDeAbrir);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(860, 190, 178, 36));
        label_21 = new QLabel(PortaDeAbrir);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(290, 190, 178, 36));
        comboBoxKitCantoneira = new QComboBox(PortaDeAbrir);
        comboBoxKitCantoneira->addItem(QString());
        comboBoxKitCantoneira->addItem(QString());
        comboBoxKitCantoneira->addItem(QString());
        comboBoxKitCantoneira->setObjectName(QString::fromUtf8("comboBoxKitCantoneira"));
        comboBoxKitCantoneira->setEnabled(true);
        comboBoxKitCantoneira->setGeometry(QRect(860, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxKitCantoneira->sizePolicy().hasHeightForWidth());
        comboBoxKitCantoneira->setSizePolicy(sizePolicy2);
        comboBoxKitCantoneira->setFont(font6);
        comboBoxPuxador = new QComboBox(PortaDeAbrir);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName(QString::fromUtf8("comboBoxPuxador"));
        comboBoxPuxador->setEnabled(true);
        comboBoxPuxador->setGeometry(QRect(480, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy2);
        comboBoxPuxador->setFont(font6);
        label_22 = new QLabel(PortaDeAbrir);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(170, 190, 104, 36));
        lineEditLargura_2 = new QLineEdit(PortaDeAbrir);
        lineEditLargura_2->setObjectName(QString::fromUtf8("lineEditLargura_2"));
        lineEditLargura_2->setGeometry(QRect(20, 230, 131, 37));
        sizePolicy.setHeightForWidth(lineEditLargura_2->sizePolicy().hasHeightForWidth());
        lineEditLargura_2->setSizePolicy(sizePolicy);
        lineEditLargura_2->setFont(font4);
        comboBoxTrinco = new QComboBox(PortaDeAbrir);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName(QString::fromUtf8("comboBoxTrinco"));
        comboBoxTrinco->setEnabled(true);
        comboBoxTrinco->setGeometry(QRect(1240, 230, 151, 37));
        sizePolicy2.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy2);
        comboBoxTrinco->setFont(font6);
        pushButton = new QPushButton(PortaDeAbrir);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(800, 320, 93, 51));
        pushButton->setFont(font6);
        comboBoxVidros_2 = new QComboBox(PortaDeAbrir);
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->setObjectName(QString::fromUtf8("comboBoxVidros_2"));
        comboBoxVidros_2->setEnabled(true);
        comboBoxVidros_2->setGeometry(QRect(290, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxVidros_2->sizePolicy().hasHeightForWidth());
        comboBoxVidros_2->setSizePolicy(sizePolicy2);
        comboBoxVidros_2->setFont(font6);
        label_5 = new QLabel(PortaDeAbrir);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1280, 470, 61, 80));
        label_5->setFont(font1);
        label_6 = new QLabel(PortaDeAbrir);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1240, 470, 101, 80));
        label_6->setFont(font);
        pushButtonADD = new QPushButton(PortaDeAbrir);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(800, 380, 93, 51));
        QFont font7;
        font7.setPointSize(20);
        font7.setBold(true);
        pushButtonADD->setFont(font7);
        QWidget::setTabOrder(lineEditLargura_2, lineEditAltura_2);
        QWidget::setTabOrder(lineEditAltura_2, comboBoxVidros_2);
        QWidget::setTabOrder(comboBoxVidros_2, comboBoxPuxador);
        QWidget::setTabOrder(comboBoxPuxador, comboBoxKit);
        QWidget::setTabOrder(comboBoxKit, comboBoxKitCantoneira);
        QWidget::setTabOrder(comboBoxKitCantoneira, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, pushButtonCalcular_2);
        QWidget::setTabOrder(pushButtonCalcular_2, pushButton);
        QWidget::setTabOrder(pushButton, lineEditValor_2);

        retranslateUi(PortaDeAbrir);

        QMetaObject::connectSlotsByName(PortaDeAbrir);
    } // setupUi

    void retranslateUi(QDialog *PortaDeAbrir)
    {
        PortaDeAbrir->setWindowTitle(QCoreApplication::translate("PortaDeAbrir", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        labelProduto->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">orta de Abrir</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:36pt;\">P</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura_2->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_19->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        pushButtonCalcular_2->setText(QCoreApplication::translate("PortaDeAbrir", "CALCULAR", nullptr));
        label_14->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());
        comboBoxPelicula->setItemText(1, QCoreApplication::translate("PortaDeAbrir", "SIM", nullptr));
        comboBoxPelicula->setItemText(2, QCoreApplication::translate("PortaDeAbrir", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPelicula->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_18->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Puxador</span></p></body></html>", nullptr));
        comboBoxKit->setItemText(0, QString());
        comboBoxKit->setItemText(1, QCoreApplication::translate("PortaDeAbrir", "Kit Leve", nullptr));
        comboBoxKit->setItemText(2, QCoreApplication::translate("PortaDeAbrir", "Kit Refor\303\247ado", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxKit->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_20->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Cantoneira</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
        comboBoxKitCantoneira->setItemText(0, QString());
        comboBoxKitCantoneira->setItemText(1, QCoreApplication::translate("PortaDeAbrir", "SIM", nullptr));
        comboBoxKitCantoneira->setItemText(2, QCoreApplication::translate("PortaDeAbrir", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxKitCantoneira->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxPuxador->setItemText(0, QString());
        comboBoxPuxador->setItemText(1, QCoreApplication::translate("PortaDeAbrir", "Puxador Inox ", nullptr));
        comboBoxPuxador->setItemText(2, QCoreApplication::translate("PortaDeAbrir", "Puxador Preto ", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPuxador->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_22->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura_2->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxTrinco->setItemText(0, QString());
        comboBoxTrinco->setItemText(1, QCoreApplication::translate("PortaDeAbrir", "Trinco Cromado", nullptr));
        comboBoxTrinco->setItemText(2, QCoreApplication::translate("PortaDeAbrir", "Trinco Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxTrinco->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("PortaDeAbrir", "-5%", nullptr));
        comboBoxVidros_2->setItemText(0, QString());
        comboBoxVidros_2->setItemText(1, QCoreApplication::translate("PortaDeAbrir", "Incolor 8mm", nullptr));
        comboBoxVidros_2->setItemText(2, QCoreApplication::translate("PortaDeAbrir", "Incolor 10mm", nullptr));
        comboBoxVidros_2->setItemText(3, QCoreApplication::translate("PortaDeAbrir", "Fum\303\252 8mm", nullptr));
        comboBoxVidros_2->setItemText(4, QCoreApplication::translate("PortaDeAbrir", "Fum\303\252 10mm", nullptr));
        comboBoxVidros_2->setItemText(5, QCoreApplication::translate("PortaDeAbrir", "Verde 8mm", nullptr));
        comboBoxVidros_2->setItemText(6, QCoreApplication::translate("PortaDeAbrir", "Verde 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros_2->setWhatsThis(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_5->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("PortaDeAbrir", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("PortaDeAbrir", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PortaDeAbrir: public Ui_PortaDeAbrir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTADEABRIR_H
