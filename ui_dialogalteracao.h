/********************************************************************************
** Form generated from reading UI file 'dialogalteracao.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGALTERACAO_H
#define UI_DIALOGALTERACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAlteracao
{
public:
    QLineEdit *lineEditnNome;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *lineEditnQuantidade;
    QLabel *label_2;
    QLineEdit *lineEditProduto;
    QPushButton *pushButton;
    QLineEdit *lineEditnValor;
    QLabel *label_3;

    void setupUi(QDialog *DialogAlteracao)
    {
        if (DialogAlteracao->objectName().isEmpty())
            DialogAlteracao->setObjectName(QString::fromUtf8("DialogAlteracao"));
        DialogAlteracao->resize(659, 342);
        lineEditnNome = new QLineEdit(DialogAlteracao);
        lineEditnNome->setObjectName(QString::fromUtf8("lineEditnNome"));
        lineEditnNome->setGeometry(QRect(40, 120, 421, 28));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        lineEditnNome->setFont(font);
        label_4 = new QLabel(DialogAlteracao);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(530, 160, 61, 31));
        label_5 = new QLabel(DialogAlteracao);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, -20, 311, 101));
        label = new QLabel(DialogAlteracao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 182, 31));
        lineEditnQuantidade = new QLineEdit(DialogAlteracao);
        lineEditnQuantidade->setObjectName(QString::fromUtf8("lineEditnQuantidade"));
        lineEditnQuantidade->setGeometry(QRect(40, 200, 81, 28));
        lineEditnQuantidade->setFont(font);
        label_2 = new QLabel(DialogAlteracao);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 160, 135, 31));
        lineEditProduto = new QLineEdit(DialogAlteracao);
        lineEditProduto->setObjectName(QString::fromUtf8("lineEditProduto"));
        lineEditProduto->setGeometry(QRect(160, 200, 301, 28));
        lineEditProduto->setFont(font);
        pushButton = new QPushButton(DialogAlteracao);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 260, 131, 41));
        lineEditnValor = new QLineEdit(DialogAlteracao);
        lineEditnValor->setObjectName(QString::fromUtf8("lineEditnValor"));
        lineEditnValor->setGeometry(QRect(490, 200, 141, 28));
        lineEditnValor->setFont(font);
        label_3 = new QLabel(DialogAlteracao);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 160, 101, 31));

        retranslateUi(DialogAlteracao);

        QMetaObject::connectSlotsByName(DialogAlteracao);
    } // setupUi

    void retranslateUi(QDialog *DialogAlteracao)
    {
        DialogAlteracao->setWindowTitle(QCoreApplication::translate("DialogAlteracao", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("DialogAlteracao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Valor</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("DialogAlteracao", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700;\">Tela De Altera\303\247\303\243o</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DialogAlteracao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nome</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogAlteracao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Quantidade</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogAlteracao", "Alterar", nullptr));
        label_3->setText(QCoreApplication::translate("DialogAlteracao", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Produto</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAlteracao: public Ui_DialogAlteracao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGALTERACAO_H
