/********************************************************************************
** Form generated from reading UI file 'janelade4folhas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELADE4FOLHAS_H
#define UI_JANELADE4FOLHAS_H

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

class Ui_JanelaDe4Folhas
{
public:
    QComboBox *comboBoxPelicula;
    QLabel *label_11;
    QLabel *label_16;
    QLineEdit *lineEditLargura;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_3;
    QComboBox *comboBoxTrinco;
    QLabel *label_5;
    QLineEdit *lineEditAltura;
    QLabel *label;
    QPushButton *pushButtonDesconto;
    QLabel *label_2;
    QLabel *label_9;
    QComboBox *comboBoxKitAluminio;
    QComboBox *comboBoxBateFecha;
    QComboBox *comboBoxVidros;
    QLabel *label_10;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButtonCalcular;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLineEdit *lineEditValor_3;
    QPushButton *pushButtonADD;

    void setupUi(QDialog *JanelaDe4Folhas)
    {
        if (JanelaDe4Folhas->objectName().isEmpty())
            JanelaDe4Folhas->setObjectName(QString::fromUtf8("JanelaDe4Folhas"));
        JanelaDe4Folhas->resize(1240, 545);
        comboBoxPelicula = new QComboBox(JanelaDe4Folhas);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName(QString::fromUtf8("comboBoxPelicula"));
        comboBoxPelicula->setEnabled(true);
        comboBoxPelicula->setGeometry(QRect(870, 240, 178, 37));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(80);
        sizePolicy.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        comboBoxPelicula->setFont(font);
        label_11 = new QLabel(JanelaDe4Folhas);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(680, 200, 178, 36));
        label_16 = new QLabel(JanelaDe4Folhas);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(490, 200, 178, 41));
        lineEditLargura = new QLineEdit(JanelaDe4Folhas);
        lineEditLargura->setObjectName(QString::fromUtf8("lineEditLargura"));
        lineEditLargura->setGeometry(QRect(30, 240, 131, 37));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditLargura->sizePolicy().hasHeightForWidth());
        lineEditLargura->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        lineEditLargura->setFont(font1);
        label_6 = new QLabel(JanelaDe4Folhas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 200, 111, 36));
        label_8 = new QLabel(JanelaDe4Folhas);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(300, 200, 178, 36));
        label_3 = new QLabel(JanelaDe4Folhas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 50, 571, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(26);
        font2.setBold(false);
        label_3->setFont(font2);
        comboBoxTrinco = new QComboBox(JanelaDe4Folhas);
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->addItem(QString());
        comboBoxTrinco->setObjectName(QString::fromUtf8("comboBoxTrinco"));
        comboBoxTrinco->setEnabled(true);
        comboBoxTrinco->setGeometry(QRect(1060, 240, 151, 37));
        sizePolicy.setHeightForWidth(comboBoxTrinco->sizePolicy().hasHeightForWidth());
        comboBoxTrinco->setSizePolicy(sizePolicy);
        comboBoxTrinco->setFont(font);
        label_5 = new QLabel(JanelaDe4Folhas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 200, 104, 36));
        lineEditAltura = new QLineEdit(JanelaDe4Folhas);
        lineEditAltura->setObjectName(QString::fromUtf8("lineEditAltura"));
        lineEditAltura->setGeometry(QRect(170, 240, 121, 37));
        sizePolicy1.setHeightForWidth(lineEditAltura->sizePolicy().hasHeightForWidth());
        lineEditAltura->setSizePolicy(sizePolicy1);
        lineEditAltura->setFont(font1);
        label = new QLabel(JanelaDe4Folhas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1110, 460, 101, 80));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font3.setPointSize(7);
        label->setFont(font3);
        pushButtonDesconto = new QPushButton(JanelaDe4Folhas);
        pushButtonDesconto->setObjectName(QString::fromUtf8("pushButtonDesconto"));
        pushButtonDesconto->setGeometry(QRect(760, 350, 93, 51));
        pushButtonDesconto->setFont(font);
        label_2 = new QLabel(JanelaDe4Folhas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1150, 460, 61, 80));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_2->setFont(font4);
        label_9 = new QLabel(JanelaDe4Folhas);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(860, 200, 178, 36));
        comboBoxKitAluminio = new QComboBox(JanelaDe4Folhas);
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->addItem(QString());
        comboBoxKitAluminio->setObjectName(QString::fromUtf8("comboBoxKitAluminio"));
        comboBoxKitAluminio->setEnabled(true);
        comboBoxKitAluminio->setGeometry(QRect(680, 240, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxKitAluminio->sizePolicy().hasHeightForWidth());
        comboBoxKitAluminio->setSizePolicy(sizePolicy);
        comboBoxKitAluminio->setFont(font);
        comboBoxBateFecha = new QComboBox(JanelaDe4Folhas);
        comboBoxBateFecha->addItem(QString());
        comboBoxBateFecha->addItem(QString());
        comboBoxBateFecha->addItem(QString());
        comboBoxBateFecha->setObjectName(QString::fromUtf8("comboBoxBateFecha"));
        comboBoxBateFecha->setEnabled(true);
        comboBoxBateFecha->setGeometry(QRect(490, 240, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxBateFecha->sizePolicy().hasHeightForWidth());
        comboBoxBateFecha->setSizePolicy(sizePolicy);
        comboBoxBateFecha->setFont(font);
        comboBoxVidros = new QComboBox(JanelaDe4Folhas);
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->addItem(QString());
        comboBoxVidros->setObjectName(QString::fromUtf8("comboBoxVidros"));
        comboBoxVidros->setEnabled(true);
        comboBoxVidros->setGeometry(QRect(300, 240, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxVidros->sizePolicy().hasHeightForWidth());
        comboBoxVidros->setSizePolicy(sizePolicy);
        comboBoxVidros->setFont(font);
        label_10 = new QLabel(JanelaDe4Folhas);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1040, 200, 178, 36));
        layoutWidget = new QWidget(JanelaDe4Folhas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(460, 350, 297, 114));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButtonCalcular = new QPushButton(layoutWidget);
        pushButtonCalcular->setObjectName(QString::fromUtf8("pushButtonCalcular"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonCalcular->sizePolicy().hasHeightForWidth());
        pushButtonCalcular->setSizePolicy(sizePolicy2);
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
        sizePolicy1.setHeightForWidth(lineEditValor_3->sizePolicy().hasHeightForWidth());
        lineEditValor_3->setSizePolicy(sizePolicy1);
        lineEditValor_3->setFont(font1);

        horizontalLayout_5->addWidget(lineEditValor_3);


        verticalLayout_10->addLayout(horizontalLayout_5);

        pushButtonADD = new QPushButton(JanelaDe4Folhas);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(760, 410, 93, 51));
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(true);
        pushButtonADD->setFont(font6);
        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, comboBoxVidros);
        QWidget::setTabOrder(comboBoxVidros, comboBoxBateFecha);
        QWidget::setTabOrder(comboBoxBateFecha, comboBoxKitAluminio);
        QWidget::setTabOrder(comboBoxKitAluminio, comboBoxPelicula);
        QWidget::setTabOrder(comboBoxPelicula, comboBoxTrinco);
        QWidget::setTabOrder(comboBoxTrinco, pushButtonCalcular);
        QWidget::setTabOrder(pushButtonCalcular, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, lineEditValor_3);
        QWidget::setTabOrder(lineEditValor_3, pushButtonADD);

        retranslateUi(JanelaDe4Folhas);

        QMetaObject::connectSlotsByName(JanelaDe4Folhas);
    } // setupUi

    void retranslateUi(QDialog *JanelaDe4Folhas)
    {
        JanelaDe4Folhas->setWindowTitle(QCoreApplication::translate("JanelaDe4Folhas", "Dialog", nullptr));
        comboBoxPelicula->setItemText(0, QString());
        comboBoxPelicula->setItemText(1, QCoreApplication::translate("JanelaDe4Folhas", "SIM", nullptr));
        comboBoxPelicula->setItemText(2, QCoreApplication::translate("JanelaDe4Folhas", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPelicula->setWhatsThis(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Kit Aluminio</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Bate-Fecha</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura->setWhatsThis(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_6->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">Janela de 4 Folhas</span></p></body></html>", nullptr));
        comboBoxTrinco->setItemText(0, QString());
        comboBoxTrinco->setItemText(1, QCoreApplication::translate("JanelaDe4Folhas", "Trinco Cromado", nullptr));
        comboBoxTrinco->setItemText(2, QCoreApplication::translate("JanelaDe4Folhas", "Trinco Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxTrinco->setWhatsThis(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_5->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura->setWhatsThis(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        pushButtonDesconto->setText(QCoreApplication::translate("JanelaDe4Folhas", "-5%", nullptr));
        label_2->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxKitAluminio->setItemText(0, QString());
        comboBoxKitAluminio->setItemText(1, QCoreApplication::translate("JanelaDe4Folhas", "Fosco 8mm", nullptr));
        comboBoxKitAluminio->setItemText(2, QCoreApplication::translate("JanelaDe4Folhas", "Preto 8mm", nullptr));
        comboBoxKitAluminio->setItemText(3, QCoreApplication::translate("JanelaDe4Folhas", "Fosco 10mm", nullptr));
        comboBoxKitAluminio->setItemText(4, QCoreApplication::translate("JanelaDe4Folhas", "Preto 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxKitAluminio->setWhatsThis(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxBateFecha->setItemText(0, QString());
        comboBoxBateFecha->setItemText(1, QCoreApplication::translate("JanelaDe4Folhas", "Vidro-Alvenaria", nullptr));
        comboBoxBateFecha->setItemText(2, QCoreApplication::translate("JanelaDe4Folhas", "Vidro-Vidro", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxBateFecha->setWhatsThis(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxVidros->setItemText(0, QString());
        comboBoxVidros->setItemText(1, QCoreApplication::translate("JanelaDe4Folhas", "Incolor 8mm", nullptr));
        comboBoxVidros->setItemText(2, QCoreApplication::translate("JanelaDe4Folhas", "Incolor 10mm", nullptr));
        comboBoxVidros->setItemText(3, QCoreApplication::translate("JanelaDe4Folhas", "Fum\303\252 8mm", nullptr));
        comboBoxVidros->setItemText(4, QCoreApplication::translate("JanelaDe4Folhas", "Fum\303\252 10mm", nullptr));
        comboBoxVidros->setItemText(5, QCoreApplication::translate("JanelaDe4Folhas", "Verde 8mm", nullptr));
        comboBoxVidros->setItemText(6, QCoreApplication::translate("JanelaDe4Folhas", "Verde 10mm", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros->setWhatsThis(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_10->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Trinco</span></p></body></html>", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("JanelaDe4Folhas", "CALCULAR", nullptr));
        label_15->setText(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("JanelaDe4Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("JanelaDe4Folhas", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaDe4Folhas: public Ui_JanelaDe4Folhas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELADE4FOLHAS_H
