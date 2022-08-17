/********************************************************************************
** Form generated from reading UI file 'moldura.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOLDURA_H
#define UI_MOLDURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Moldura
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEditAltura;
    QFrame *line;
    QLabel *label_7;
    QComboBox *comboBoxEspessura;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEditValor;
    QComboBox *comboBoxAcabamento;
    QLabel *label_10;
    QLabel *label_6;
    QLineEdit *lineEditLargura;
    QLabel *label_11;
    QComboBox *comboBoxSuporte;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonCalcular_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEditValorFinal;
    QComboBox *comboBoxQuantidade;
    QLabel *label_12;
    QLabel *label_4;
    QLabel *label_13;

    void setupUi(QDialog *Moldura)
    {
        if (Moldura->objectName().isEmpty())
            Moldura->setObjectName(QString::fromUtf8("Moldura"));
        Moldura->resize(1085, 612);
        label = new QLabel(Moldura);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 20, 411, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label->setFont(font);
        label_2 = new QLabel(Moldura);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, 0, 1135, 621));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Users/Pedro/Downloads/papel de fundo artlaser.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Moldura);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 230, 211, 311));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Users/Pedro/Downloads/pngwing.com.png")));
        label_3->setScaledContents(true);
        label_5 = new QLabel(Moldura);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 360, 121, 41));
        label_5->setFont(font);
        lineEditAltura = new QLineEdit(Moldura);
        lineEditAltura->setObjectName(QString::fromUtf8("lineEditAltura"));
        lineEditAltura->setGeometry(QRect(270, 400, 113, 28));
        QFont font1;
        font1.setPointSize(11);
        lineEditAltura->setFont(font1);
        line = new QFrame(Moldura);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(410, 150, 251, 61));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(Moldura);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 130, 141, 41));
        label_7->setFont(font);
        comboBoxEspessura = new QComboBox(Moldura);
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->addItem(QString());
        comboBoxEspessura->setObjectName(QString::fromUtf8("comboBoxEspessura"));
        comboBoxEspessura->setGeometry(QRect(440, 330, 191, 28));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        comboBoxEspessura->setFont(font2);
        label_8 = new QLabel(Moldura);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(450, 280, 161, 41));
        label_8->setFont(font);
        label_9 = new QLabel(Moldura);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 190, 291, 41));
        label_9->setFont(font);
        lineEditValor = new QLineEdit(Moldura);
        lineEditValor->setObjectName(QString::fromUtf8("lineEditValor"));
        lineEditValor->setGeometry(QRect(440, 240, 191, 28));
        lineEditValor->setFont(font2);
        comboBoxAcabamento = new QComboBox(Moldura);
        comboBoxAcabamento->addItem(QString());
        comboBoxAcabamento->addItem(QString());
        comboBoxAcabamento->addItem(QString());
        comboBoxAcabamento->addItem(QString());
        comboBoxAcabamento->setObjectName(QString::fromUtf8("comboBoxAcabamento"));
        comboBoxAcabamento->setGeometry(QRect(440, 420, 191, 28));
        comboBoxAcabamento->setFont(font2);
        label_10 = new QLabel(Moldura);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(440, 370, 191, 41));
        label_10->setFont(font);
        label_6 = new QLabel(Moldura);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 160, 141, 41));
        label_6->setFont(font);
        lineEditLargura = new QLineEdit(Moldura);
        lineEditLargura->setObjectName(QString::fromUtf8("lineEditLargura"));
        lineEditLargura->setGeometry(QRect(90, 200, 141, 28));
        lineEditLargura->setFont(font1);
        label_11 = new QLabel(Moldura);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(470, 460, 171, 41));
        label_11->setFont(font);
        comboBoxSuporte = new QComboBox(Moldura);
        comboBoxSuporte->addItem(QString());
        comboBoxSuporte->addItem(QString());
        comboBoxSuporte->addItem(QString());
        comboBoxSuporte->addItem(QString());
        comboBoxSuporte->addItem(QString());
        comboBoxSuporte->setObjectName(QString::fromUtf8("comboBoxSuporte"));
        comboBoxSuporte->setGeometry(QRect(460, 510, 171, 28));
        comboBoxSuporte->setFont(font2);
        layoutWidget_2 = new QWidget(Moldura);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(730, 290, 297, 114));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonCalcular_2 = new QPushButton(layoutWidget_2);
        pushButtonCalcular_2->setObjectName(QString::fromUtf8("pushButtonCalcular_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonCalcular_2->sizePolicy().hasHeightForWidth());
        pushButtonCalcular_2->setSizePolicy(sizePolicy);
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

        lineEditValorFinal = new QLineEdit(layoutWidget_2);
        lineEditValorFinal->setObjectName(QString::fromUtf8("lineEditValorFinal"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditValorFinal->sizePolicy().hasHeightForWidth());
        lineEditValorFinal->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setPointSize(16);
        lineEditValorFinal->setFont(font4);

        horizontalLayout_4->addWidget(lineEditValorFinal);


        verticalLayout_8->addLayout(horizontalLayout_4);

        comboBoxQuantidade = new QComboBox(Moldura);
        comboBoxQuantidade->addItem(QString());
        comboBoxQuantidade->addItem(QString());
        comboBoxQuantidade->addItem(QString());
        comboBoxQuantidade->addItem(QString());
        comboBoxQuantidade->addItem(QString());
        comboBoxQuantidade->addItem(QString());
        comboBoxQuantidade->setObjectName(QString::fromUtf8("comboBoxQuantidade"));
        comboBoxQuantidade->setGeometry(QRect(410, 507, 41, 31));
        comboBoxQuantidade->setFont(font2);
        label_12 = new QLabel(Moldura);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(400, 460, 71, 41));
        label_12->setFont(font);
        label_4 = new QLabel(Moldura);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(960, 530, 101, 80));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        font5.setPointSize(7);
        label_4->setFont(font5);
        label_13 = new QLabel(Moldura);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(1000, 530, 61, 80));
        label_13->setFont(font);
        label_2->raise();
        label->raise();
        label_3->raise();
        label_5->raise();
        lineEditAltura->raise();
        line->raise();
        label_7->raise();
        comboBoxEspessura->raise();
        label_8->raise();
        label_9->raise();
        lineEditValor->raise();
        comboBoxAcabamento->raise();
        label_10->raise();
        label_6->raise();
        lineEditLargura->raise();
        label_11->raise();
        comboBoxSuporte->raise();
        layoutWidget_2->raise();
        comboBoxQuantidade->raise();
        label_12->raise();
        label_4->raise();
        label_13->raise();
        QWidget::setTabOrder(lineEditLargura, lineEditAltura);
        QWidget::setTabOrder(lineEditAltura, lineEditValor);
        QWidget::setTabOrder(lineEditValor, comboBoxEspessura);
        QWidget::setTabOrder(comboBoxEspessura, comboBoxAcabamento);
        QWidget::setTabOrder(comboBoxAcabamento, comboBoxQuantidade);
        QWidget::setTabOrder(comboBoxQuantidade, comboBoxSuporte);
        QWidget::setTabOrder(comboBoxSuporte, pushButtonCalcular_2);
        QWidget::setTabOrder(pushButtonCalcular_2, lineEditValorFinal);

        retranslateUi(Moldura);

        QMetaObject::connectSlotsByName(Moldura);
    } // setupUi

    void retranslateUi(QDialog *Moldura)
    {
        Moldura->setWindowTitle(QCoreApplication::translate("Moldura", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700; color:#000000;\">Molduras</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Altura:</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Ajustes</span></p></body></html>", nullptr));
        comboBoxEspessura->setItemText(0, QString());
        comboBoxEspessura->setItemText(1, QCoreApplication::translate("Moldura", "Fina", nullptr));
        comboBoxEspessura->setItemText(2, QCoreApplication::translate("Moldura", "M\303\251dia", nullptr));
        comboBoxEspessura->setItemText(3, QCoreApplication::translate("Moldura", "Grossa", nullptr));
        comboBoxEspessura->setItemText(4, QCoreApplication::translate("Moldura", "Muito Grossa", nullptr));

        label_8->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Espessura</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Valor da Moldura</span></p></body></html>", nullptr));
        comboBoxAcabamento->setItemText(0, QString());
        comboBoxAcabamento->setItemText(1, QCoreApplication::translate("Moldura", "Fundo", nullptr));
        comboBoxAcabamento->setItemText(2, QCoreApplication::translate("Moldura", "Vidro", nullptr));
        comboBoxAcabamento->setItemText(3, QCoreApplication::translate("Moldura", "Fundo e Vidro", nullptr));

        label_10->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Acabamento</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Largura:</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Pendurador</span></p></body></html>", nullptr));
        comboBoxSuporte->setItemText(0, QString());
        comboBoxSuporte->setItemText(1, QCoreApplication::translate("Moldura", "Triangulo 1", nullptr));
        comboBoxSuporte->setItemText(2, QCoreApplication::translate("Moldura", "Triangulo 2", nullptr));
        comboBoxSuporte->setItemText(3, QCoreApplication::translate("Moldura", "Triangulo 3", nullptr));
        comboBoxSuporte->setItemText(4, QCoreApplication::translate("Moldura", "Pezin", nullptr));

        pushButtonCalcular_2->setText(QCoreApplication::translate("Moldura", "CALCULAR", nullptr));
        label_14->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">VALOR</span></p></body></html>", nullptr));
        comboBoxQuantidade->setItemText(0, QString());
        comboBoxQuantidade->setItemText(1, QCoreApplication::translate("Moldura", "1", nullptr));
        comboBoxQuantidade->setItemText(2, QCoreApplication::translate("Moldura", "2", nullptr));
        comboBoxQuantidade->setItemText(3, QCoreApplication::translate("Moldura", "3", nullptr));
        comboBoxQuantidade->setItemText(4, QCoreApplication::translate("Moldura", "4", nullptr));
        comboBoxQuantidade->setItemText(5, QCoreApplication::translate("Moldura", "5", nullptr));

        label_12->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">N \302\272</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("Moldura", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Moldura: public Ui_Moldura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOLDURA_H
