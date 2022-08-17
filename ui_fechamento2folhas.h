/********************************************************************************
** Form generated from reading UI file 'fechamento2folhas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FECHAMENTO2FOLHAS_H
#define UI_FECHAMENTO2FOLHAS_H

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

class Ui_Fechamento2Folhas
{
public:
    QComboBox *comboBoxVidros_2;
    QPushButton *pushButtonADD;
    QLineEdit *lineEditLargura_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditValor_2;
    QLabel *label_16;
    QLabel *label_21;
    QLineEdit *lineEditAltura_2;
    QLabel *label_22;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QPushButton *pushButtonDesconto;
    QLabel *label_4;
    QLabel *label_9;
    QComboBox *comboBoxPelicula;

    void setupUi(QDialog *Fechamento2Folhas)
    {
        if (Fechamento2Folhas->objectName().isEmpty())
            Fechamento2Folhas->setObjectName(QString::fromUtf8("Fechamento2Folhas"));
        Fechamento2Folhas->resize(815, 580);
        comboBoxVidros_2 = new QComboBox(Fechamento2Folhas);
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->setObjectName(QString::fromUtf8("comboBoxVidros_2"));
        comboBoxVidros_2->setEnabled(true);
        comboBoxVidros_2->setGeometry(QRect(350, 260, 178, 37));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(80);
        sizePolicy.setHeightForWidth(comboBoxVidros_2->sizePolicy().hasHeightForWidth());
        comboBoxVidros_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        comboBoxVidros_2->setFont(font);
        pushButtonADD = new QPushButton(Fechamento2Folhas);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(500, 420, 93, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        pushButtonADD->setFont(font1);
        lineEditLargura_2 = new QLineEdit(Fechamento2Folhas);
        lineEditLargura_2->setObjectName(QString::fromUtf8("lineEditLargura_2"));
        lineEditLargura_2->setGeometry(QRect(80, 260, 131, 37));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditLargura_2->sizePolicy().hasHeightForWidth());
        lineEditLargura_2->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(16);
        lineEditLargura_2->setFont(font2);
        layoutWidget_2 = new QWidget(Fechamento2Folhas);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(200, 360, 297, 114));
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
        sizePolicy1.setHeightForWidth(lineEditValor_2->sizePolicy().hasHeightForWidth());
        lineEditValor_2->setSizePolicy(sizePolicy1);
        lineEditValor_2->setFont(font2);

        horizontalLayout_4->addWidget(lineEditValor_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        label_16 = new QLabel(Fechamento2Folhas);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(100, 220, 111, 36));
        label_21 = new QLabel(Fechamento2Folhas);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(350, 220, 178, 36));
        lineEditAltura_2 = new QLineEdit(Fechamento2Folhas);
        lineEditAltura_2->setObjectName(QString::fromUtf8("lineEditAltura_2"));
        lineEditAltura_2->setGeometry(QRect(220, 260, 121, 37));
        sizePolicy1.setHeightForWidth(lineEditAltura_2->sizePolicy().hasHeightForWidth());
        lineEditAltura_2->setSizePolicy(sizePolicy1);
        lineEditAltura_2->setFont(font2);
        label_22 = new QLabel(Fechamento2Folhas);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(230, 220, 104, 36));
        label_5 = new QLabel(Fechamento2Folhas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(730, 500, 61, 80));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_5->setFont(font4);
        label_6 = new QLabel(Fechamento2Folhas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(690, 500, 101, 80));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font5.setPointSize(7);
        label_6->setFont(font5);
        label_3 = new QLabel(Fechamento2Folhas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 0, 721, 161));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font6.setPointSize(26);
        font6.setBold(false);
        label_3->setFont(font6);
        pushButtonDesconto = new QPushButton(Fechamento2Folhas);
        pushButtonDesconto->setObjectName(QString::fromUtf8("pushButtonDesconto"));
        pushButtonDesconto->setGeometry(QRect(500, 360, 93, 51));
        pushButtonDesconto->setFont(font);
        label_4 = new QLabel(Fechamento2Folhas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 110, 271, 101));
        label_4->setFont(font6);
        label_9 = new QLabel(Fechamento2Folhas);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(530, 220, 178, 36));
        comboBoxPelicula = new QComboBox(Fechamento2Folhas);
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->addItem(QString());
        comboBoxPelicula->setObjectName(QString::fromUtf8("comboBoxPelicula"));
        comboBoxPelicula->setEnabled(true);
        comboBoxPelicula->setGeometry(QRect(540, 260, 178, 37));
        sizePolicy.setHeightForWidth(comboBoxPelicula->sizePolicy().hasHeightForWidth());
        comboBoxPelicula->setSizePolicy(sizePolicy);
        comboBoxPelicula->setFont(font);
        QWidget::setTabOrder(lineEditLargura_2, lineEditAltura_2);
        QWidget::setTabOrder(lineEditAltura_2, comboBoxVidros_2);
        QWidget::setTabOrder(comboBoxVidros_2, pushButtonCalcular_2);
        QWidget::setTabOrder(pushButtonCalcular_2, pushButtonDesconto);
        QWidget::setTabOrder(pushButtonDesconto, lineEditValor_2);
        QWidget::setTabOrder(lineEditValor_2, pushButtonADD);

        retranslateUi(Fechamento2Folhas);

        QMetaObject::connectSlotsByName(Fechamento2Folhas);
    } // setupUi

    void retranslateUi(QDialog *Fechamento2Folhas)
    {
        Fechamento2Folhas->setWindowTitle(QCoreApplication::translate("Fechamento2Folhas", "Dialog", nullptr));
        comboBoxVidros_2->setItemText(0, QString());
        comboBoxVidros_2->setItemText(1, QCoreApplication::translate("Fechamento2Folhas", "Incolor 8mm", nullptr));
        comboBoxVidros_2->setItemText(2, QCoreApplication::translate("Fechamento2Folhas", "Fum\303\252 8mm", nullptr));
        comboBoxVidros_2->setItemText(3, QCoreApplication::translate("Fechamento2Folhas", "Acr\303\255lico Branco", nullptr));
        comboBoxVidros_2->setItemText(4, QCoreApplication::translate("Fechamento2Folhas", "Acr\303\255lico Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros_2->setWhatsThis(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("Fechamento2Folhas", "+", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura_2->setWhatsThis(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonCalcular_2->setText(QCoreApplication::translate("Fechamento2Folhas", "CALCULAR", nullptr));
        label_14->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura_2->setWhatsThis(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_22->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700;\">Fechamento de Pia</span></p></body></html>", nullptr));
        pushButtonDesconto->setText(QCoreApplication::translate("Fechamento2Folhas", "-5%", nullptr));
        label_4->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">2 Folhas</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Pel\303\255cula</span></p></body></html>", nullptr));
        comboBoxPelicula->setItemText(0, QString());
        comboBoxPelicula->setItemText(1, QCoreApplication::translate("Fechamento2Folhas", "SIM", nullptr));
        comboBoxPelicula->setItemText(2, QCoreApplication::translate("Fechamento2Folhas", "N\303\203O", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxPelicula->setWhatsThis(QCoreApplication::translate("Fechamento2Folhas", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class Fechamento2Folhas: public Ui_Fechamento2Folhas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FECHAMENTO2FOLHAS_H
