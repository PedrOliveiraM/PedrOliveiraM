/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QAction *actionOr_amentos;
    QAction *actionOr_amentos_2;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonOrcamentoTemperado;
    QPushButton *pushButtonFechamento;
    QPushButton *pushButtonOrcamentoComum;
    QPushButton *pushButtonMoldura;
    QPushButton *pushButtonBOX;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menumenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QString::fromUtf8("TelaPrincipal"));
        TelaPrincipal->resize(430, 427);
        actionOr_amentos = new QAction(TelaPrincipal);
        actionOr_amentos->setObjectName(QString::fromUtf8("actionOr_amentos"));
        actionOr_amentos_2 = new QAction(TelaPrincipal);
        actionOr_amentos_2->setObjectName(QString::fromUtf8("actionOr_amentos_2"));
        centralwidget = new QWidget(TelaPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 90, 231, 231));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        verticalLayoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonOrcamentoTemperado = new QPushButton(verticalLayoutWidget);
        pushButtonOrcamentoTemperado->setObjectName(QString::fromUtf8("pushButtonOrcamentoTemperado"));
        pushButtonOrcamentoTemperado->setFont(font);

        verticalLayout->addWidget(pushButtonOrcamentoTemperado);

        pushButtonFechamento = new QPushButton(verticalLayoutWidget);
        pushButtonFechamento->setObjectName(QString::fromUtf8("pushButtonFechamento"));
        pushButtonFechamento->setFont(font);

        verticalLayout->addWidget(pushButtonFechamento);

        pushButtonOrcamentoComum = new QPushButton(verticalLayoutWidget);
        pushButtonOrcamentoComum->setObjectName(QString::fromUtf8("pushButtonOrcamentoComum"));
        pushButtonOrcamentoComum->setFont(font);

        verticalLayout->addWidget(pushButtonOrcamentoComum);

        pushButtonMoldura = new QPushButton(verticalLayoutWidget);
        pushButtonMoldura->setObjectName(QString::fromUtf8("pushButtonMoldura"));
        pushButtonMoldura->setFont(font);

        verticalLayout->addWidget(pushButtonMoldura);

        pushButtonBOX = new QPushButton(verticalLayoutWidget);
        pushButtonBOX->setObjectName(QString::fromUtf8("pushButtonBOX"));
        pushButtonBOX->setFont(font);

        verticalLayout->addWidget(pushButtonBOX);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 131, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Matura MT Script Capitals")});
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 10, 159, 80));
        label_2->setFont(font1);
        TelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 430, 25));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName(QString::fromUtf8("menumenu"));
        TelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaPrincipal->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menumenu->addSeparator();
        menumenu->addSeparator();
        menumenu->addAction(actionOr_amentos_2);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QCoreApplication::translate("TelaPrincipal", "TelaPrincipal", nullptr));
        actionOr_amentos->setText(QCoreApplication::translate("TelaPrincipal", "Or\303\247amentos", nullptr));
        actionOr_amentos_2->setText(QCoreApplication::translate("TelaPrincipal", "Or\303\247amentos", nullptr));
        pushButtonOrcamentoTemperado->setText(QCoreApplication::translate("TelaPrincipal", "Or\303\247amento Temperado", nullptr));
        pushButtonFechamento->setText(QCoreApplication::translate("TelaPrincipal", "Fechamento De Pia", nullptr));
        pushButtonOrcamentoComum->setText(QCoreApplication::translate("TelaPrincipal", "Or\303\247amento Comum", nullptr));
        pushButtonMoldura->setText(QCoreApplication::translate("TelaPrincipal", "Molduras", nullptr));
        pushButtonBOX->setText(QCoreApplication::translate("TelaPrincipal", "Box", nullptr));
        label->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#0000ff;\">Art</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:36pt; color:#ff0000;\">vidros</span></p></body></html>", nullptr));
        menumenu->setTitle(QCoreApplication::translate("TelaPrincipal", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
