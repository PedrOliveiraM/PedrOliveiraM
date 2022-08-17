/********************************************************************************
** Form generated from reading UI file 'boxcanto.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXCANTO_H
#define UI_BOXCANTO_H

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

class Ui_BoxCanto
{
public:
    QLabel *label_3;
    QLabel *label_21;
    QPushButton *pushButtonADD;
    QLabel *label_6;
    QLineEdit *lineEditAltura_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_22;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditValor_2;
    QComboBox *comboBoxVidros_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_16;
    QLineEdit *lineEditLargura_2;
    QLabel *label_17;
    QLineEdit *lineEditLargura_3;

    void setupUi(QDialog *BoxCanto)
    {
        if (BoxCanto->objectName().isEmpty())
            BoxCanto->setObjectName(QString::fromUtf8("BoxCanto"));
        BoxCanto->resize(584, 649);
        label_3 = new QLabel(BoxCanto);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 30, 511, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font.setPointSize(26);
        font.setBold(false);
        label_3->setFont(font);
        label_21 = new QLabel(BoxCanto);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(350, 220, 178, 36));
        pushButtonADD = new QPushButton(BoxCanto);
        pushButtonADD->setObjectName(QString::fromUtf8("pushButtonADD"));
        pushButtonADD->setGeometry(QRect(390, 460, 93, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        pushButtonADD->setFont(font1);
        label_6 = new QLabel(BoxCanto);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(450, 560, 101, 80));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font2.setPointSize(7);
        label_6->setFont(font2);
        lineEditAltura_2 = new QLineEdit(BoxCanto);
        lineEditAltura_2->setObjectName(QString::fromUtf8("lineEditAltura_2"));
        lineEditAltura_2->setGeometry(QRect(210, 260, 131, 37));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditAltura_2->sizePolicy().hasHeightForWidth());
        lineEditAltura_2->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(16);
        lineEditAltura_2->setFont(font3);
        label_5 = new QLabel(BoxCanto);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(490, 560, 61, 80));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label_5->setFont(font4);
        pushButton = new QPushButton(BoxCanto);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 400, 93, 51));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        pushButton->setFont(font5);
        label_22 = new QLabel(BoxCanto);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(230, 220, 104, 36));
        layoutWidget_2 = new QWidget(BoxCanto);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(90, 400, 297, 114));
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
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        pushButtonCalcular_2->setFont(font6);

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
        lineEditValor_2->setFont(font3);

        horizontalLayout_4->addWidget(lineEditValor_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        comboBoxVidros_2 = new QComboBox(BoxCanto);
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->addItem(QString());
        comboBoxVidros_2->setObjectName(QString::fromUtf8("comboBoxVidros_2"));
        comboBoxVidros_2->setEnabled(true);
        comboBoxVidros_2->setGeometry(QRect(350, 260, 178, 37));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(80);
        sizePolicy2.setHeightForWidth(comboBoxVidros_2->sizePolicy().hasHeightForWidth());
        comboBoxVidros_2->setSizePolicy(sizePolicy2);
        comboBoxVidros_2->setFont(font5);
        layoutWidget = new QWidget(BoxCanto);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 180, 161, 183));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout->addWidget(label_16);

        lineEditLargura_2 = new QLineEdit(layoutWidget);
        lineEditLargura_2->setObjectName(QString::fromUtf8("lineEditLargura_2"));
        sizePolicy.setHeightForWidth(lineEditLargura_2->sizePolicy().hasHeightForWidth());
        lineEditLargura_2->setSizePolicy(sizePolicy);
        lineEditLargura_2->setFont(font3);

        verticalLayout->addWidget(lineEditLargura_2);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout->addWidget(label_17);

        lineEditLargura_3 = new QLineEdit(layoutWidget);
        lineEditLargura_3->setObjectName(QString::fromUtf8("lineEditLargura_3"));
        sizePolicy.setHeightForWidth(lineEditLargura_3->sizePolicy().hasHeightForWidth());
        lineEditLargura_3->setSizePolicy(sizePolicy);
        lineEditLargura_3->setFont(font3);

        verticalLayout->addWidget(lineEditLargura_3);

        QWidget::setTabOrder(lineEditLargura_2, lineEditLargura_3);
        QWidget::setTabOrder(lineEditLargura_3, lineEditAltura_2);
        QWidget::setTabOrder(lineEditAltura_2, comboBoxVidros_2);
        QWidget::setTabOrder(comboBoxVidros_2, pushButtonCalcular_2);
        QWidget::setTabOrder(pushButtonCalcular_2, pushButton);
        QWidget::setTabOrder(pushButton, lineEditValor_2);
        QWidget::setTabOrder(lineEditValor_2, pushButtonADD);

        retranslateUi(BoxCanto);

        QMetaObject::connectSlotsByName(BoxCanto);
    } // setupUi

    void retranslateUi(QDialog *BoxCanto)
    {
        BoxCanto->setWindowTitle(QCoreApplication::translate("BoxCanto", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700;\">Box de Canto</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Vidros</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonADD->setToolTip(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonADD->setText(QCoreApplication::translate("BoxCanto", "+", nullptr));
        label_6->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditAltura_2->setWhatsThis(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_5->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("BoxCanto", "-5%", nullptr));
        label_22->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Altura</span></p></body></html>", nullptr));
        pushButtonCalcular_2->setText(QCoreApplication::translate("BoxCanto", "CALCULAR", nullptr));
        label_14->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        comboBoxVidros_2->setItemText(0, QString());
        comboBoxVidros_2->setItemText(1, QCoreApplication::translate("BoxCanto", "Incolor", nullptr));
        comboBoxVidros_2->setItemText(2, QCoreApplication::translate("BoxCanto", "Fum\303\252", nullptr));
        comboBoxVidros_2->setItemText(3, QCoreApplication::translate("BoxCanto", "Acr\303\255lico Branco", nullptr));
        comboBoxVidros_2->setItemText(4, QCoreApplication::translate("BoxCanto", "Acr\303\255lio Preto", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxVidros_2->setWhatsThis(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\">pedro</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_16->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura_2->setWhatsThis(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_17->setText(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Largura</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditLargura_3->setWhatsThis(QCoreApplication::translate("BoxCanto", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class BoxCanto: public Ui_BoxCanto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXCANTO_H
