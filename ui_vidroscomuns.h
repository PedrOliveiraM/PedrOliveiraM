/********************************************************************************
** Form generated from reading UI file 'vidroscomuns.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDROSCOMUNS_H
#define UI_VIDROSCOMUNS_H

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

class Ui_VidrosComuns
{
public:
    QLineEdit *lineEditLargura;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *lineEditAltura;
    QComboBox *comboBoxVidros;
    QLabel *label;
    QLabel *label_9;
    QComboBox *comboBoxPolido;
    QComboBox *comboBoxBotaoFrances;
    QLabel *label_10;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditValor_2;
    QLabel *label_11;
    QComboBox *comboBoxBocaJacare;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *VidrosComuns)
    {
        if (VidrosComuns->objectName().isEmpty())
            VidrosComuns->setObjectName(QString::fromUtf8("VidrosComuns"));
        VidrosComuns->resize(1188, 515);
        lineEditLargura = new QLineEdit(VidrosComuns);
        lineEditLargura->setObjectName(QString::fromUtf8("lineEditLargura"));
        lineEditLargura->setGeometry(QRect(30, 230, 131, 37));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        lineEditLargura->setFont(font);
        label_6 = new QLabel(VidrosComuns);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 190, 111, 36));
        label_8 = new QLabel(VidrosComuns);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(340, 190, 178, 36));
        label_5 = new QLabel(VidrosComuns);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 190, 104, 36));
        lineEditAltura = new QLineEdit(VidrosComuns);
        lineEditAltura->setObjectName(QString::fromUtf8("lineEditAltura"));
        lineEditAltura->setGeometry(QRect(180, 230, 121, 37));
        sizePolicy.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy);
        lineEditAltura->setFont(font);
        comboBoxVidros = new QComboBox(VidrosComuns);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName(QString::fromUtf8("comboBoxVidros"));
        comboBoxVidros->setEnabled(true);
        comboBoxVidros->setGeometry(QRect(310, 230, 241, 37));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(80);
        sizePolicy1.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        comboBoxVidros->setFont(font1);
        label = new QLabel(VidrosComuns);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 50, 611, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label->setFont(font2);
        label_9 = new QLabel(VidrosComuns);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(550, 190, 178, 36));
        comboBoxPolido = new QComboBox(VidrosComuns);
        comboBoxPolido->addItem(QString());
        comboBoxPolido->addItem(QString());
        comboBoxPolido->addItem(QString());
        comboBoxPolido->setObjectName(QString::fromUtf8("comboBoxPolido"));
        comboBoxPolido->setEnabled(true);
        comboBoxPolido->setGeometry(QRect(560, 230, 171, 37));
        sizePolicy1.setHeightForWidth(comboBoxPolido->sizePolicy().hasHeightForWidth());
        comboBoxPolido->setSizePolicy(sizePolicy1);
        comboBoxPolido->setFont(font1);
        comboBoxBotaoFrances = new QComboBox(VidrosComuns);
        comboBoxBotaoFrances->addItem(QString());
        comboBoxBotaoFrances->addItem(QString());
        comboBoxBotaoFrances->addItem(QString());
        comboBoxBotaoFrances->addItem(QString());
        comboBoxBotaoFrances->addItem(QString());
        comboBoxBotaoFrances->addItem(QString());
        comboBoxBotaoFrances->addItem(QString());
        comboBoxBotaoFrances->setObjectName(QString::fromUtf8("comboBoxBotaoFrances"));
        comboBoxBotaoFrances->setEnabled(true);
        comboBoxBotaoFrances->setGeometry(QRect(750, 230, 181, 37));
        sizePolicy1.setHeightForWidth(comboBoxBotaoFrances->sizePolicy().hasHeightForWidth());
        comboBoxBotaoFrances->setSizePolicy(sizePolicy1);
        comboBoxBotaoFrances->setFont(font1);
        label_10 = new QLabel(VidrosComuns);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(750, 190, 191, 36));
        pushButton = new QPushButton(VidrosComuns);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 340, 93, 51));
        pushButton->setFont(font1);
        layoutWidget_2 = new QWidget(VidrosComuns);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(400, 340, 297, 114));
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
        sizePolicy.setHeightForWidth(lineEditValor_2->sizePolicy().hasHeightForWidth());
        lineEditValor_2->setSizePolicy(sizePolicy);
        lineEditValor_2->setFont(font);

        horizontalLayout_4->addWidget(lineEditValor_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        label_11 = new QLabel(VidrosComuns);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(950, 190, 211, 36));
        comboBoxBocaJacare = new QComboBox(VidrosComuns);
        comboBoxBocaJacare->addItem(QString());
        comboBoxBocaJacare->addItem(QString());
        comboBoxBocaJacare->addItem(QString());
        comboBoxBocaJacare->addItem(QString());
        comboBoxBocaJacare->addItem(QString());
        comboBoxBocaJacare->addItem(QString());
        comboBoxBocaJacare->addItem(QString());
        comboBoxBocaJacare->setObjectName(QString::fromUtf8("comboBoxBocaJacare"));
        comboBoxBocaJacare->setEnabled(true);
        comboBoxBocaJacare->setGeometry(QRect(960, 230, 181, 37));
        sizePolicy1.setHeightForWidth(comboBoxBocaJacare->sizePolicy().hasHeightForWidth());
        comboBoxBocaJacare->setSizePolicy(sizePolicy1);
        comboBoxBocaJacare->setFont(font1);
        label_2 = new QLabel(VidrosComuns);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1070, 440, 101, 80));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font4.setPointSize(7);
        label_2->setFont(font4);
        label_3 = new QLabel(VidrosComuns);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1110, 440, 61, 80));
        label_3->setFont(font2);

        retranslateUi(VidrosComuns);

        QMetaObject::connectSlotsByName(VidrosComuns);
    } // setupUi

    void retranslateUi(QDialog *VidrosComuns)
    {
        VidrosComuns->setWindowTitle(QCoreApplication::translate("VidrosComuns", "Dialog", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura->setWhatsThis(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_6->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura->setWhatsThis(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxVidros->setItemText(0, QString());
        comboBoxVidros->setItemText(1, QCoreApplication::translate("VidrosComuns", "Incolor 2MM", nullptr));
        comboBoxVidros->setItemText(2, QCoreApplication::translate("VidrosComuns", "Incolor 3MM", nullptr));
        comboBoxVidros->setItemText(3, QCoreApplication::translate("VidrosComuns", "Incolor 4MM", nullptr));
        comboBoxVidros->setItemText(4, QCoreApplication::translate("VidrosComuns", "Incolor 5MM", nullptr));
        comboBoxVidros->setItemText(5, QCoreApplication::translate("VidrosComuns", "Incolor 6MM", nullptr));
        comboBoxVidros->setItemText(6, QCoreApplication::translate("VidrosComuns", "Fum\303\252 3MM", nullptr));
        comboBoxVidros->setItemText(7, QCoreApplication::translate("VidrosComuns", "Fum\303\252 Plus 3MM", nullptr));
        comboBoxVidros->setItemText(8, QCoreApplication::translate("VidrosComuns", "Fum\303\252 4MM", nullptr));
        comboBoxVidros->setItemText(9, QCoreApplication::translate("VidrosComuns", "Fum\303\252 5MM", nullptr));
        comboBoxVidros->setItemText(10, QCoreApplication::translate("VidrosComuns", "Fum\303\252 6MM", nullptr));
        comboBoxVidros->setItemText(11, QCoreApplication::translate("VidrosComuns", "Espelho 3MM", nullptr));
        comboBoxVidros->setItemText(12, QCoreApplication::translate("VidrosComuns", "Fantasia 3MM", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros->setWhatsThis(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">Vidros Comuns</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Polido</span></p></body></html>", nullptr));
        comboBoxPolido->setItemText(0, QString());
        comboBoxPolido->setItemText(1, QCoreApplication::translate("VidrosComuns", "SIM", nullptr));
        comboBoxPolido->setItemText(2, QCoreApplication::translate("VidrosComuns", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPolido->setWhatsThis(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxBotaoFrances->setItemText(0, QString());
        comboBoxBotaoFrances->setItemText(1, QCoreApplication::translate("VidrosComuns", "1", nullptr));
        comboBoxBotaoFrances->setItemText(2, QCoreApplication::translate("VidrosComuns", "2", nullptr));
        comboBoxBotaoFrances->setItemText(3, QCoreApplication::translate("VidrosComuns", "3", nullptr));
        comboBoxBotaoFrances->setItemText(4, QCoreApplication::translate("VidrosComuns", "4", nullptr));
        comboBoxBotaoFrances->setItemText(5, QCoreApplication::translate("VidrosComuns", "5", nullptr));
        comboBoxBotaoFrances->setItemText(6, QCoreApplication::translate("VidrosComuns", "6", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxBotaoFrances->setWhatsThis(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_10->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Bot\303\243o Franc\303\252s</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("VidrosComuns", "-5%", nullptr));
        pushButtonCalcular_2->setText(QCoreApplication::translate("VidrosComuns", "CALCULAR", nullptr));
        label_14->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Boca de Jacar\303\251</span></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p></body></html>", nullptr));
        comboBoxBocaJacare->setItemText(0, QString());
        comboBoxBocaJacare->setItemText(1, QCoreApplication::translate("VidrosComuns", "1", nullptr));
        comboBoxBocaJacare->setItemText(2, QCoreApplication::translate("VidrosComuns", "2", nullptr));
        comboBoxBocaJacare->setItemText(3, QCoreApplication::translate("VidrosComuns", "3", nullptr));
        comboBoxBocaJacare->setItemText(4, QCoreApplication::translate("VidrosComuns", "4", nullptr));
        comboBoxBocaJacare->setItemText(5, QCoreApplication::translate("VidrosComuns", "5", nullptr));
        comboBoxBocaJacare->setItemText(6, QCoreApplication::translate("VidrosComuns", "6", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxBocaJacare->setWhatsThis(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("VidrosComuns", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VidrosComuns: public Ui_VidrosComuns {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDROSCOMUNS_H
