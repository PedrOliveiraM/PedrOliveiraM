/********************************************************************************
** Form generated from reading UI file 'dialoginclusao.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINCLUSAO_H
#define UI_DIALOGINCLUSAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogInclusao
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditnNome;
    QLineEdit *lineEditProduto;
    QLineEdit *lineEditnQuantidade;
    QLineEdit *lineEditnValor;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogInclusao)
    {
        if (DialogInclusao->objectName().isEmpty())
            DialogInclusao->setObjectName(QString::fromUtf8("DialogInclusao"));
        DialogInclusao->resize(642, 342);
        label_2 = new QLabel(DialogInclusao);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 170, 135, 31));
        label_3 = new QLabel(DialogInclusao);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 170, 101, 31));
        label = new QLabel(DialogInclusao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 182, 31));
        label_4 = new QLabel(DialogInclusao);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 170, 61, 31));
        label_5 = new QLabel(DialogInclusao);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, -10, 311, 101));
        lineEditnNome = new QLineEdit(DialogInclusao);
        lineEditnNome->setObjectName(QString::fromUtf8("lineEditnNome"));
        lineEditnNome->setGeometry(QRect(30, 130, 421, 28));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        lineEditnNome->setFont(font);
        lineEditProduto = new QLineEdit(DialogInclusao);
        lineEditProduto->setObjectName(QString::fromUtf8("lineEditProduto"));
        lineEditProduto->setGeometry(QRect(150, 210, 301, 28));
        lineEditProduto->setFont(font);
        lineEditnQuantidade = new QLineEdit(DialogInclusao);
        lineEditnQuantidade->setObjectName(QString::fromUtf8("lineEditnQuantidade"));
        lineEditnQuantidade->setGeometry(QRect(30, 210, 81, 28));
        lineEditnQuantidade->setFont(font);
        lineEditnValor = new QLineEdit(DialogInclusao);
        lineEditnValor->setObjectName(QString::fromUtf8("lineEditnValor"));
        lineEditnValor->setGeometry(QRect(480, 210, 141, 28));
        lineEditnValor->setFont(font);
        pushButton = new QPushButton(DialogInclusao);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 270, 131, 41));

        retranslateUi(DialogInclusao);

        QMetaObject::connectSlotsByName(DialogInclusao);
    } // setupUi

    void retranslateUi(QDialog *DialogInclusao)
    {
        DialogInclusao->setWindowTitle(QCoreApplication::translate("DialogInclusao", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogInclusao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Quantidade</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("DialogInclusao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Produto</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DialogInclusao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nome</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DialogInclusao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Valor</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("DialogInclusao", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700;\">Tela De Inclus\303\243o</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogInclusao", "Incluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogInclusao: public Ui_DialogInclusao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINCLUSAO_H
