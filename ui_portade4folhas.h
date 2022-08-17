/********************************************************************************
** Form generated from reading UI file 'portade4folhas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTADE4FOLHAS_H
#define UI_PORTADE4FOLHAS_H

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

class Ui_PortaDe4Folhas
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *lineEditValor;
    QLabel *label_8;
    QComboBox *comboBoxVidros;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBoxPuxador;
    QLabel *label_14;
    QLabel *label_19;
    QComboBox *comboBoxFechadura;
    QLabel *label_11;
    QComboBox *comboBoxKitAluminio;
    QLabel *label_9;
    QComboBox *comboBoxPelicula;
    QLabel *label_10;
    QComboBox *comboBoxTrinco;
    QLabel *label_5;
    QLineEdit *lineEditAltura;
    QLabel *label_6;
    QLineEdit *lineEditLargura;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_12;
    QComboBox *comboBoxTrinco_2;
    QPushButton *pushButtonADD;

    void setupUi(QDialog *PortaDe4Folhas)
    {
        if (PortaDe4Folhas->objectName().isEmpty())
            PortaDe4Folhas->setObjectName(QString::fromUtf8("PortaDe4Folhas"));
        PortaDe4Folhas->resize(1403, 560);
        layoutWidget = new QWidget(PortaDe4Folhas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 330, 297, 114));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonCalcular = new QPushButton(layoutWidget);
        pushButtonCalcular->setObjectName(QString::fromUtf8("pushButtonCalcular"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButtonCalcular->setFont(font);

        verticalLayout_8->addWidget(pushButtonCalcular);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        lineEditValor = new QLineEdit(layoutWidget);
        lineEditValor->setObjectName(QString::fromUtf8("lineEditValor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditValor->sizePolicy().hasHeightForWidth());
        lineEditValor->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        lineEditValor->setFont(font1);

        horizontalLayout_3->addWidget(lineEditValor);


        verticalLayout_8->addLayout(horizontalLayout_3);

        label_8 = new QLabel(PortaDe4Folhas);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 200, 178, 36));
        comboBoxVidros = new QComboBox(PortaDe4Folhas);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName(QString::fromUtf8("comboBoxVidros"));
        comboBoxVidros->setEnabled(true);
        comboBoxVidros->setGeometry(QRect(280, 240, 178, 37));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(80);
        sizePolicy2.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        comboBoxVidros->setFont(font2);
        label_4 = new QLabel(PortaDe4Folhas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 60, 61, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(36);
        font3.setBold(false);
        label_4->setFont(font3);
        label_2 = new QLabel(PortaDe4Folhas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1330, 500, 61, 80));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_2->setFont(font4);
        label_3 = new QLabel(PortaDe4Folhas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 70, 471, 81));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font5.setPointSize(26);
        font5.setBold(false);
        label_3->setFont(font5);
        comboBoxPuxador = new QComboBox(PortaDe4Folhas);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName(QString::fromUtf8("comboBoxPuxador"));
        comboBoxPuxador->setEnabled(true);
        comboBoxPuxador->setGeometry(QRect(470, 240, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy2);
        comboBoxPuxador->setFont(font2);
        label_14 = new QLabel(PortaDe4Folhas);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(470, 200, 178, 41));
        label_19 = new QLabel(PortaDe4Folhas);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(660, 200, 178, 36));
        comboBoxFechadura = new QComboBox(PortaDe4Folhas);
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->setObjectName(QString::fromUtf8("comboBoxFechadura"));
        comboBoxFechadura->setEnabled(true);
        comboBoxFechadura->setGeometry(QRect(660, 240, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxFechadura->sizePolicy().hasHeightForWidth());
        comboBoxFechadura->setSizePolicy(sizePolicy2);
        comboBoxFechadura->setFont(font2);
        label_11 = new QLabel(PortaDe4Folhas);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(850, 200, 178, 36));
        comboBoxKitAluminio = new QComboBox(PortaDe4Folhas);
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->setObjectName(QString::fromUtf8("comboBoxKitAluminio"));
        comboBoxKitAluminio->setEnabled(true);
        comboBoxKitAluminio->setGeometry(QRect(850, 240, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxKitAluminio->sizePolicy().hasHeightForWidth());
        comboBoxKitAluminio->setSizePolicy(sizePolicy2);
        comboBoxKitAluminio->setFont(font2);
        label_9 = new QLabel(PortaDe4Folhas);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1030, 200, 178, 36));
        comboBoxPelicula = new QComboBox(PortaDe4Folhas);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName(QString::fromUtf8("comboBoxPelicula"));
        comboBoxPelicula->setEnabled(true);
        comboBoxPelicula->setGeometry(QRect(1040, 240, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy2);
        comboBoxPelicula->setFont(font2);
        label_10 = new QLabel(PortaDe4Folhas);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1210, 200, 178, 36));
        comboBoxTrinco = new QComboBox(PortaDe4Folhas);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName(QString::fromUtf8("comboBoxTrinco"));
        comboBoxTrinco->setEnabled(true);
        comboBoxTrinco->setGeometry(QRect(1230, 240, 151, 37));
        sizePolicy2.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy2);
        comboBoxTrinco->setFont(font2);
        label_5 = new QLabel(PortaDe4Folhas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 200, 104, 36));
        lineEditAltura = new QLineEdit(PortaDe4Folhas);
        lineEditAltura->setObjectName(QString::fromUtf8("lineEditAltura"));
        lineEditAltura->setGeometry(QRect(150, 240, 121, 37));
        sizePolicy1.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy1);
        lineEditAltura->setFont(font1);
        label_6 = new QLabel(PortaDe4Folhas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 200, 111, 36));
        lineEditLargura = new QLineEdit(PortaDe4Folhas);
        lineEditLargura->setObjectName(QString::fromUtf8("lineEditLargura"));
        lineEditLargura->setGeometry(QRect(10, 240, 131, 37));
        sizePolicy1.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy1);
        lineEditLargura->setFont(font1);
        label = new QLabel(PortaDe4Folhas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1290, 500, 101, 80));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font6.setPointSize(7);
        label->setFont(font6);
        pushButton = new QPushButton(PortaDe4Folhas);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(790, 330, 93, 51));
        pushButton->setFont(font2);
        label_12 = new QLabel(PortaDe4Folhas);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(1440, 290, 178, 36));
        comboBoxTrinco_2 = new QComboBox(PortaDe4Folhas);
        comboBoxTrinco_2->addItem(QString());
        comboBoxTrinco_2->addItem(QString());
        comboBoxTrinco_2->addItem(QString());
        comboBoxTrinco_2->setObjectName(QString::fromUtf8("comboBoxTrinco_2"));
        comboBoxTrinco_2->setEnabled(true);
        comboBoxTrinco_2->setGeometry(QRect(1460, 330, 151, 37));
        sizePolicy2.setHeightForWidth(comboBoxTrinco_2->sizePolicy().hasHeightForWidth());
        comboBoxTrinco_2->setSizePolicy(sizePolicy2);
        comboBoxTrinco_2->setFont(font2);
        pushButtonADD = new QPushButton(PortaDe4Folhas);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(790, 390, 93, 51));
        QFont font7;
        font7.setPointSize(20);
        font7.setBold(true);
        pushButtonADD->setFont(font7);
        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxPuxador);
        QWidget::setTabOrder(comboBoxPuxador, comboBoxFechadura);
        QWidget::setTabOrder(comboBoxFechadura, comboBoxKitAluminio);
        QWidget::setTabOrder(comboBoxKitAluminio, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButton);
        QWidget::setTabOrder(pushButton, lineEditValor);
        QWidget::setTabOrder(lineEditValor, pushButtonADD);
        QWidget::setTabOrder(pushButtonADD, comboBoxTrinco_2);

        retranslateUi(PortaDe4Folhas);

        QMetaObject::connectSlotsByName(PortaDe4Folhas);
    } // setupUi

    void retranslateUi(QDialog *PortaDe4Folhas)
    {
        PortaDe4Folhas->setWindowTitle(QCoreApplication::translate("PortaDe4Folhas", "Dialog", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("PortaDe4Folhas", "CALCULAR", nullptr));
        label_13->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
        comboBoxVidros->setItemText(0, QString());
        comboBoxVidros->setItemText(1, QCoreApplication::translate("PortaDe4Folhas", "Incolor 8mm", nullptr));
        comboBoxVidros->setItemText(2, QCoreApplication::translate("PortaDe4Folhas", "Incolor 10mm", nullptr));
        comboBoxVidros->setItemText(3, QCoreApplication::translate("PortaDe4Folhas", "Fum\303\252 8mm", nullptr));
        comboBoxVidros->setItemText(4, QCoreApplication::translate("PortaDe4Folhas", "Fum\303\252 10mm", nullptr));
        comboBoxVidros->setItemText(5, QCoreApplication::translate("PortaDe4Folhas", "Verde 8mm", nullptr));
        comboBoxVidros->setItemText(6, QCoreApplication::translate("PortaDe4Folhas", "Verde 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p><span style=\" font-size:36pt;\">P</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">orta de 4 Folhas</span></p></body></html>", nullptr));
        comboBoxPuxador->setItemText(0, QString());
        comboBoxPuxador->setItemText(1, QCoreApplication::translate("PortaDe4Folhas", "Puxador Inox ", nullptr));
        comboBoxPuxador->setItemText(2, QCoreApplication::translate("PortaDe4Folhas", "Puxador Preto ", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPuxador->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_14->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Puxador</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Fechadura</span></p></body></html>", nullptr));
        comboBoxFechadura->setItemText(0, QString());
        comboBoxFechadura->setItemText(1, QCoreApplication::translate("PortaDe4Folhas", "Vidro-Vidro", nullptr));
        comboBoxFechadura->setItemText(2, QCoreApplication::translate("PortaDe4Folhas", "Vidro-Alvenaria", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxFechadura->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit Aluminio</span></p></body></html>", nullptr));
        comboBoxKitAluminio->setItemText(0, QString());
        comboBoxKitAluminio->setItemText(1, QCoreApplication::translate("PortaDe4Folhas", "Fosco 8mm", nullptr));
        comboBoxKitAluminio->setItemText(2, QCoreApplication::translate("PortaDe4Folhas", "Preto 8mm", nullptr));
        comboBoxKitAluminio->setItemText(3, QCoreApplication::translate("PortaDe4Folhas", "Fosco 10mm", nullptr));
        comboBoxKitAluminio->setItemText(4, QCoreApplication::translate("PortaDe4Folhas", "Preto 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxKitAluminio->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_9->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());
        comboBoxPelicula->setItemText(1, QCoreApplication::translate("PortaDe4Folhas", "SIM", nullptr));
        comboBoxPelicula->setItemText(2, QCoreApplication::translate("PortaDe4Folhas", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPelicula->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_10->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());
        comboBoxTrinco->setItemText(1, QCoreApplication::translate("PortaDe4Folhas", "Trinco Cromado", nullptr));
        comboBoxTrinco->setItemText(2, QCoreApplication::translate("PortaDe4Folhas", "Trinco Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxTrinco->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_5->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_6->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("PortaDe4Folhas", "-5%", nullptr));
        label_12->setText(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        comboBoxTrinco_2->setItemText(0, QString());
        comboBoxTrinco_2->setItemText(1, QCoreApplication::translate("PortaDe4Folhas", "Trinco Cromado", nullptr));
        comboBoxTrinco_2->setItemText(2, QCoreApplication::translate("PortaDe4Folhas", "Trinco Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxTrinco_2->setWhatsThis(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("PortaDe4Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("PortaDe4Folhas", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PortaDe4Folhas: public Ui_PortaDe4Folhas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTADE4FOLHAS_H
