/********************************************************************************
** Form generated from reading UI file 'portade2folhas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTADE2FOLHAS_H
#define UI_PORTADE2FOLHAS_H

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

class Ui_PortaDe2Folhas
{
public:
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEditAltura;
    QLabel *label_19;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButtonCalcular;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLineEdit *lineEditValor_3;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_9;
    QComboBox *comboBoxPelicula;
    QLabel *label_16;
    QComboBox *comboBoxFechadura;
    QLabel *label_11;
    QLabel *label_8;
    QComboBox *comboBoxKitAluminio;
    QComboBox *comboBoxPuxador;
    QLabel *label_5;
    QLineEdit *lineEditLargura;
    QComboBox *comboBoxTrinco;
    QPushButton *pushButton;
    QComboBox *comboBoxVidros;
    QPushButton *pushButtonADD;

    void setupUi(QDialog *PortaDe2Folhas)
    {
        if (PortaDe2Folhas->objectName().isEmpty())
            PortaDe2Folhas->setObjectName(QString::fromUtf8("PortaDe2Folhas"));
        PortaDe2Folhas->resize(1394, 545);
        label_2 = new QLabel(PortaDe2Folhas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1270, 450, 61, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_2->setFont(font);
        label_4 = new QLabel(PortaDe2Folhas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 30, 61, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font1.setPointSize(36);
        font1.setBold(false);
        label_4->setFont(font1);
        label_3 = new QLabel(PortaDe2Folhas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 40, 471, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(26);
        font2.setBold(false);
        label_3->setFont(font2);
        label = new QLabel(PortaDe2Folhas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1230, 450, 101, 80));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(7);
        label->setFont(font3);
        lineEditAltura = new QLineEdit(PortaDe2Folhas);
        lineEditAltura->setObjectName(QString::fromUtf8("lineEditAltura"));
        lineEditAltura->setGeometry(QRect(150, 230, 121, 37));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(16);
        lineEditAltura->setFont(font4);
        label_19 = new QLabel(PortaDe2Folhas);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(660, 190, 178, 36));
        layoutWidget = new QWidget(PortaDe2Folhas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 320, 297, 114));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButtonCalcular = new QPushButton(layoutWidget);
        pushButtonCalcular->setObjectName(QString::fromUtf8("pushButtonCalcular"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        pushButtonCalcular->setFont(font5);

        verticalLayout_10->addWidget(pushButtonCalcular);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);

        lineEditValor_3 = new QLineEdit(layoutWidget);
        lineEditValor_3->setObjectName(QString::fromUtf8("lineEditValor_3"));
        sizePolicy.setHeightForWidth(lineEditValor_3->sizePolicy().hasHeightForWidth());
        lineEditValor_3->setSizePolicy(sizePolicy);
        lineEditValor_3->setFont(font4);

        horizontalLayout_5->addWidget(lineEditValor_3);


        verticalLayout_10->addLayout(horizontalLayout_5);

        label_10 = new QLabel(PortaDe2Folhas);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1210, 190, 178, 36));
        label_6 = new QLabel(PortaDe2Folhas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 190, 111, 36));
        label_9 = new QLabel(PortaDe2Folhas);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1030, 190, 178, 36));
        comboBoxPelicula = new QComboBox(PortaDe2Folhas);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName(QString::fromUtf8("comboBoxPelicula"));
        comboBoxPelicula->setEnabled(true);
        comboBoxPelicula->setGeometry(QRect(1040, 230, 178, 37));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(80);
        sizePolicy2.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy2);
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        comboBoxPelicula->setFont(font6);
        label_16 = new QLabel(PortaDe2Folhas);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(470, 190, 178, 41));
        comboBoxFechadura = new QComboBox(PortaDe2Folhas);
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->setObjectName(QString::fromUtf8("comboBoxFechadura"));
        comboBoxFechadura->setEnabled(true);
        comboBoxFechadura->setGeometry(QRect(660, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxFechadura->sizePolicy().hasHeightForWidth());
        comboBoxFechadura->setSizePolicy(sizePolicy2);
        comboBoxFechadura->setFont(font6);
        label_11 = new QLabel(PortaDe2Folhas);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(850, 190, 178, 36));
        label_8 = new QLabel(PortaDe2Folhas);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 190, 178, 36));
        comboBoxKitAluminio = new QComboBox(PortaDe2Folhas);
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->setObjectName(QString::fromUtf8("comboBoxKitAluminio"));
        comboBoxKitAluminio->setEnabled(true);
        comboBoxKitAluminio->setGeometry(QRect(850, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxKitAluminio->sizePolicy().hasHeightForWidth());
        comboBoxKitAluminio->setSizePolicy(sizePolicy2);
        comboBoxKitAluminio->setFont(font6);
        comboBoxPuxador = new QComboBox(PortaDe2Folhas);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName(QString::fromUtf8("comboBoxPuxador"));
        comboBoxPuxador->setEnabled(true);
        comboBoxPuxador->setGeometry(QRect(470, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy2);
        comboBoxPuxador->setFont(font6);
        label_5 = new QLabel(PortaDe2Folhas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 190, 104, 36));
        lineEditLargura = new QLineEdit(PortaDe2Folhas);
        lineEditLargura->setObjectName(QString::fromUtf8("lineEditLargura"));
        lineEditLargura->setGeometry(QRect(10, 230, 131, 37));
        sizePolicy.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy);
        lineEditLargura->setFont(font4);
        comboBoxTrinco = new QComboBox(PortaDe2Folhas);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName(QString::fromUtf8("comboBoxTrinco"));
        comboBoxTrinco->setEnabled(true);
        comboBoxTrinco->setGeometry(QRect(1230, 230, 151, 37));
        sizePolicy2.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy2);
        comboBoxTrinco->setFont(font6);
        pushButton = new QPushButton(PortaDe2Folhas);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(790, 320, 93, 51));
        pushButton->setFont(font6);
        comboBoxVidros = new QComboBox(PortaDe2Folhas);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName(QString::fromUtf8("comboBoxVidros"));
        comboBoxVidros->setEnabled(true);
        comboBoxVidros->setGeometry(QRect(280, 230, 178, 37));
        sizePolicy2.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy2);
        comboBoxVidros->setFont(font6);
        pushButtonADD = new QPushButton(PortaDe2Folhas);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(790, 380, 93, 51));
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
        QWidget::setTabOrder(pushButton, lineEditValor_3);
        QWidget::setTabOrder(lineEditValor_3, pushButtonADD);

        retranslateUi(PortaDe2Folhas);

        QMetaObject::connectSlotsByName(PortaDe2Folhas);
    } // setupUi

    void retranslateUi(QDialog *PortaDe2Folhas)
    {
        PortaDe2Folhas->setWindowTitle(QCoreApplication::translate("PortaDe2Folhas", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p><span style=\" font-size:36pt;\">P</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">orta de 2 Folhas</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_19->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Fechadura</span></p></body></html>", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("PortaDe2Folhas", "CALCULAR", nullptr));
        label_15->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());
        comboBoxPelicula->setItemText(1, QCoreApplication::translate("PortaDe2Folhas", "SIM", nullptr));
        comboBoxPelicula->setItemText(2, QCoreApplication::translate("PortaDe2Folhas", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPelicula->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_16->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Puxador</span></p></body></html>", nullptr));
        comboBoxFechadura->setItemText(0, QString());
        comboBoxFechadura->setItemText(1, QCoreApplication::translate("PortaDe2Folhas", "Vidro-Vidro", nullptr));
        comboBoxFechadura->setItemText(2, QCoreApplication::translate("PortaDe2Folhas", "Vidro-Alvenaria", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxFechadura->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit Aluminio</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
        comboBoxKitAluminio->setItemText(0, QString());
        comboBoxKitAluminio->setItemText(1, QCoreApplication::translate("PortaDe2Folhas", "Fosco 8mm", nullptr));
        comboBoxKitAluminio->setItemText(2, QCoreApplication::translate("PortaDe2Folhas", "Preto 8mm", nullptr));
        comboBoxKitAluminio->setItemText(3, QCoreApplication::translate("PortaDe2Folhas", "Fosco 10mm", nullptr));
        comboBoxKitAluminio->setItemText(4, QCoreApplication::translate("PortaDe2Folhas", "Preto 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxKitAluminio->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxPuxador->setItemText(0, QString());
        comboBoxPuxador->setItemText(1, QCoreApplication::translate("PortaDe2Folhas", "Puxador Inox ", nullptr));
        comboBoxPuxador->setItemText(2, QCoreApplication::translate("PortaDe2Folhas", "Puxador Preto ", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPuxador->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_5->setText(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxTrinco->setItemText(0, QString());
        comboBoxTrinco->setItemText(1, QCoreApplication::translate("PortaDe2Folhas", "Trinco Cromado", nullptr));
        comboBoxTrinco->setItemText(2, QCoreApplication::translate("PortaDe2Folhas", "Trinco Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxTrinco->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("PortaDe2Folhas", "-5%", nullptr));
        comboBoxVidros->setItemText(0, QString());
        comboBoxVidros->setItemText(1, QCoreApplication::translate("PortaDe2Folhas", "Incolor 8mm", nullptr));
        comboBoxVidros->setItemText(2, QCoreApplication::translate("PortaDe2Folhas", "Incolor 10mm", nullptr));
        comboBoxVidros->setItemText(3, QCoreApplication::translate("PortaDe2Folhas", "Fum\303\252 8mm", nullptr));
        comboBoxVidros->setItemText(4, QCoreApplication::translate("PortaDe2Folhas", "Fum\303\252 10mm", nullptr));
        comboBoxVidros->setItemText(5, QCoreApplication::translate("PortaDe2Folhas", "Verde 8mm", nullptr));
        comboBoxVidros->setItemText(6, QCoreApplication::translate("PortaDe2Folhas", "Verde 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros->setWhatsThis(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("PortaDe2Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("PortaDe2Folhas", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PortaDe2Folhas: public Ui_PortaDe2Folhas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTADE2FOLHAS_H
