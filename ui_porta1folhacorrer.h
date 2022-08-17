/********************************************************************************
** Form generated from reading UI file 'porta1folhacorrer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTA1FOLHACORRER_H
#define UI_PORTA1FOLHACORRER_H

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

class Ui_Porta1FolhaCorrer
{
public:
    QLabel *label_2;
    QLabel *label_6;
    QComboBox *comboBoxVidros_2;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditValor_2;
    QLabel *label_4;
    QLabel *label_17;
    QLabel *label_22;
    QLabel *label;
    QLineEdit *lineEditAltura_2;
    QLabel *label_20;
    QLabel *label_5;
    QComboBox *comboBoxPuxador;
    QLabel *labelProduto;
    QComboBox *comboBoxPelicula;
    QLabel *label_21;
    QComboBox *comboBoxTrinco;
    QLabel *label_19;
    QLabel *label_15;
    QPushButton *pushButtonADD;
    QLineEdit *lineEditLargura_2;
    QLabel *label_18;
    QLabel *label_16;
    QComboBox *comboBoxKitCantoneira;
    QComboBox *comboBoxFechadura;
    QComboBox *comboBoxKitAluminio;
    QLabel *label_11;
    QLabel *label_23;
    QComboBox *comboBoxTubo;

    void setupUi(QDialog *Porta1FolhaCorrer)
    {
        if (Porta1FolhaCorrer->objectName().isEmpty())
            Porta1FolhaCorrer->setObjectName(QString::fromUtf8("Porta1FolhaCorrer"));
        Porta1FolhaCorrer->resize(1403, 581);
        label_2 = new QLabel(Porta1FolhaCorrer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1140, 240, 61, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_2->setFont(font);
        label_6 = new QLabel(Porta1FolhaCorrer);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1270, 500, 101, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font1.setPointSize(7);
        label_6->setFont(font1);
        comboBoxVidros_2 = new QComboBox(Porta1FolhaCorrer);
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->setObjectName(QString::fromUtf8("comboBoxVidros_2"));
        comboBoxVidros_2->setEnabled(true);
        comboBoxVidros_2->setGeometry(QRect(300, 250, 178, 37));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(80);
        sizePolicy.setHeightForWidth(comboBoxVidros_2->sizePolicy().hasHeightForWidth());
        comboBoxVidros_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        comboBoxVidros_2->setFont(font2);
        pushButton = new QPushButton(Porta1FolhaCorrer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(850, 370, 93, 51));
        pushButton->setFont(font2);
        layoutWidget_2 = new QWidget(Porta1FolhaCorrer);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(550, 370, 297, 114));
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
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        pushButtonCalcular_2->setFont(font3);

        verticalLayout_8->addWidget(pushButtonCalcular_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);

        lineEditValor_2 = new QLineEdit(layoutWidget_2);
        lineEditValor_2->setObjectName(QString::fromUtf8("lineEditValor_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditValor_2->sizePolicy().hasHeightForWidth());
        lineEditValor_2->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(16);
        lineEditValor_2->setFont(font4);

        horizontalLayout_4->addWidget(lineEditValor_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        label_4 = new QLabel(Porta1FolhaCorrer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 50, 61, 81));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font5.setPointSize(36);
        font5.setBold(false);
        label_4->setFont(font5);
        label_17 = new QLabel(Porta1FolhaCorrer);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(1200, 210, 178, 36));
        label_22 = new QLabel(Porta1FolhaCorrer);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(180, 210, 104, 36));
        label = new QLabel(Porta1FolhaCorrer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1100, 240, 101, 80));
        label->setFont(font1);
        lineEditAltura_2 = new QLineEdit(Porta1FolhaCorrer);
        lineEditAltura_2->setObjectName(QString::fromUtf8("lineEditAltura_2"));
        lineEditAltura_2->setGeometry(QRect(170, 250, 121, 37));
        sizePolicy2.setHeightForWidth(lineEditAltura_2->sizePolicy().hasHeightForWidth());
        lineEditAltura_2->setSizePolicy(sizePolicy2);
        lineEditAltura_2->setFont(font4);
        label_20 = new QLabel(Porta1FolhaCorrer);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(1020, 210, 178, 36));
        label_5 = new QLabel(Porta1FolhaCorrer);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1310, 500, 61, 80));
        label_5->setFont(font);
        comboBoxPuxador = new QComboBox(Porta1FolhaCorrer);
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->addItem(QString());
        comboBoxPuxador->setObjectName(QString::fromUtf8("comboBoxPuxador"));
        comboBoxPuxador->setEnabled(true);
        comboBoxPuxador->setGeometry(QRect(480, 250, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxPuxador->sizePolicy().hasHeightForWidth());
        comboBoxPuxador->setSizePolicy(sizePolicy);
        comboBoxPuxador->setFont(font2);
        labelProduto = new QLabel(Porta1FolhaCorrer);
        labelProduto->setObjectName(QString::fromUtf8("labelProduto"));
        labelProduto->setGeometry(QRect(450, 70, 601, 81));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font6.setPointSize(26);
        font6.setBold(false);
        labelProduto->setFont(font6);
        comboBoxPelicula = new QComboBox(Porta1FolhaCorrer);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName(QString::fromUtf8("comboBoxPelicula"));
        comboBoxPelicula->setEnabled(true);
        comboBoxPelicula->setGeometry(QRect(1200, 250, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy);
        comboBoxPelicula->setFont(font2);
        label_21 = new QLabel(Porta1FolhaCorrer);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(300, 210, 178, 36));
        comboBoxTrinco = new QComboBox(Porta1FolhaCorrer);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName(QString::fromUtf8("comboBoxTrinco"));
        comboBoxTrinco->setEnabled(true);
        comboBoxTrinco->setGeometry(QRect(1200, 340, 171, 37));
        sizePolicy.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy);
        comboBoxTrinco->setFont(font2);
        label_19 = new QLabel(Porta1FolhaCorrer);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(660, 210, 178, 36));
        label_15 = new QLabel(Porta1FolhaCorrer);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(1200, 300, 178, 36));
        pushButtonADD = new QPushButton(Porta1FolhaCorrer);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(850, 430, 93, 51));
        QFont font7;
        font7.setPointSize(20);
        font7.setBold(true);
        pushButtonADD->setFont(font7);
        lineEditLargura_2 = new QLineEdit(Porta1FolhaCorrer);
        lineEditLargura_2->setObjectName(QString::fromUtf8("lineEditLargura_2"));
        lineEditLargura_2->setGeometry(QRect(30, 250, 131, 37));
        sizePolicy2.setHeightForWidth(lineEditLargura_2->sizePolicy().hasHeightForWidth());
        lineEditLargura_2->setSizePolicy(sizePolicy2);
        lineEditLargura_2->setFont(font4);
        label_18 = new QLabel(Porta1FolhaCorrer);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(480, 210, 178, 41));
        label_16 = new QLabel(Porta1FolhaCorrer);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(50, 210, 111, 36));
        comboBoxKitCantoneira = new QComboBox(Porta1FolhaCorrer);
        comboBoxKitCantoneira->addItem(QString());
        comboBoxKitCantoneira->addItem(QString());
        comboBoxKitCantoneira->addItem(QString());
        comboBoxKitCantoneira->setObjectName(QString::fromUtf8("comboBoxKitCantoneira"));
        comboBoxKitCantoneira->setEnabled(true);
        comboBoxKitCantoneira->setGeometry(QRect(1020, 250, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxKitCantoneira->sizePolicy().hasHeightForWidth());
        comboBoxKitCantoneira->setSizePolicy(sizePolicy);
        comboBoxKitCantoneira->setFont(font2);
        comboBoxFechadura = new QComboBox(Porta1FolhaCorrer);
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->addItem(QString());
        comboBoxFechadura->setObjectName(QString::fromUtf8("comboBoxFechadura"));
        comboBoxFechadura->setEnabled(true);
        comboBoxFechadura->setGeometry(QRect(660, 250, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxFechadura->sizePolicy().hasHeightForWidth());
        comboBoxFechadura->setSizePolicy(sizePolicy);
        comboBoxFechadura->setFont(font2);
        comboBoxKitAluminio = new QComboBox(Porta1FolhaCorrer);
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->setObjectName(QString::fromUtf8("comboBoxKitAluminio"));
        comboBoxKitAluminio->setEnabled(true);
        comboBoxKitAluminio->setGeometry(QRect(840, 250, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxKitAluminio->sizePolicy().hasHeightForWidth());
        comboBoxKitAluminio->setSizePolicy(sizePolicy);
        comboBoxKitAluminio->setFont(font2);
        label_11 = new QLabel(Porta1FolhaCorrer);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(840, 210, 178, 36));
        label_23 = new QLabel(Porta1FolhaCorrer);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(1200, 390, 178, 36));
        comboBoxTubo = new QComboBox(Porta1FolhaCorrer);
        comboBoxTubo->addItem(QString());
        comboBoxTubo->addItem(QString());
        comboBoxTubo->addItem(QString());
        comboBoxTubo->setObjectName(QString::fromUtf8("comboBoxTubo"));
        comboBoxTubo->setEnabled(true);
        comboBoxTubo->setGeometry(QRect(1200, 430, 171, 37));
        sizePolicy.setHeightForWidth(comboBoxTubo->sizePolicy().hasHeightForWidth());
        comboBoxTubo->setSizePolicy(sizePolicy);
        comboBoxTubo->setFont(font2);
        QWidget::setTabOrder(lineEditLargura_2, lineEditAltura_2);
        QWidget::setTabOrder(lineEditAltura_2, comboBoxVidros_2);
        QWidget::setTabOrder(comboBoxVidros_2, comboBoxPuxador);
        QWidget::setTabOrder(comboBoxPuxador, comboBoxKitCantoneira);
        QWidget::setTabOrder(comboBoxKitCantoneira, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, pushButtonCalcular_2);
        QWidget::setTabOrder(pushButtonCalcular_2, pushButton);
        QWidget::setTabOrder(pushButton, lineEditValor_2);
        QWidget::setTabOrder(lineEditValor_2, pushButtonADD);

        retranslateUi(Porta1FolhaCorrer);

        QMetaObject::connectSlotsByName(Porta1FolhaCorrer);
    } // setupUi

    void retranslateUi(QDialog *Porta1FolhaCorrer)
    {
        Porta1FolhaCorrer->setWindowTitle(QCoreApplication::translate("Porta1FolhaCorrer", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        comboBoxVidros_2->setItemText(0, QString());
        comboBoxVidros_2->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "Incolor 8mm", nullptr));
        comboBoxVidros_2->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "Incolor 10mm", nullptr));
        comboBoxVidros_2->setItemText(3, QCoreApplication::translate("Porta1FolhaCorrer", "Fum\303\252 8mm", nullptr));
        comboBoxVidros_2->setItemText(4, QCoreApplication::translate("Porta1FolhaCorrer", "Fum\303\252 10mm", nullptr));
        comboBoxVidros_2->setItemText(5, QCoreApplication::translate("Porta1FolhaCorrer", "Verde 8mm", nullptr));
        comboBoxVidros_2->setItemText(6, QCoreApplication::translate("Porta1FolhaCorrer", "Verde 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros_2->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("Porta1FolhaCorrer", "-5%", nullptr));
        pushButtonCalcular_2->setText(QCoreApplication::translate("Porta1FolhaCorrer", "CALCULAR", nullptr));
        label_14->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p><span style=\" font-size:36pt;\">P</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura_2->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_20->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Cantoneira</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        comboBoxPuxador->setItemText(0, QString());
        comboBoxPuxador->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "Puxador Inox ", nullptr));
        comboBoxPuxador->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "Puxador Preto ", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPuxador->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelProduto->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">orta 1 folha de Correr</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());
        comboBoxPelicula->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "SIM", nullptr));
        comboBoxPelicula->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPelicula->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_21->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());
        comboBoxTrinco->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "Trinco Cromado", nullptr));
        comboBoxTrinco->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "Trinco Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxTrinco->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_19->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Fechadura</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("Porta1FolhaCorrer", "+", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura_2->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_18->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Puxador</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
        comboBoxKitCantoneira->setItemText(0, QString());
        comboBoxKitCantoneira->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "SIM", nullptr));
        comboBoxKitCantoneira->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxKitCantoneira->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxFechadura->setItemText(0, QString());
        comboBoxFechadura->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "Vidro-Vidro", nullptr));
        comboBoxFechadura->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "Vidro-Alvenaria", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxFechadura->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxKitAluminio->setItemText(0, QString());
        comboBoxKitAluminio->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "Fosco 8mm", nullptr));
        comboBoxKitAluminio->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "Preto 8mm", nullptr));
        comboBoxKitAluminio->setItemText(3, QCoreApplication::translate("Porta1FolhaCorrer", "Fosco 10mm", nullptr));
        comboBoxKitAluminio->setItemText(4, QCoreApplication::translate("Porta1FolhaCorrer", "Preto 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxKitAluminio->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit Aluminio</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Tubo</span></p></body></html>", nullptr));
        comboBoxTubo->setItemText(0, QString());
        comboBoxTubo->setItemText(1, QCoreApplication::translate("Porta1FolhaCorrer", "SIM", nullptr));
        comboBoxTubo->setItemText(2, QCoreApplication::translate("Porta1FolhaCorrer", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxTubo->setWhatsThis(QCoreApplication::translate("Porta1FolhaCorrer", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class Porta1FolhaCorrer: public Ui_Porta1FolhaCorrer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTA1FOLHACORRER_H
