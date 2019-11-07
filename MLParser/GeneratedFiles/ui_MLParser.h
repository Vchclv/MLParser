/********************************************************************************
** Form generated from reading UI file 'MLParser.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MLPARSER_H
#define UI_MLPARSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MLParserClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MLParserClass)
    {
        if (MLParserClass->objectName().isEmpty())
            MLParserClass->setObjectName(QString::fromUtf8("MLParserClass"));
        MLParserClass->resize(600, 400);
        menuBar = new QMenuBar(MLParserClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MLParserClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MLParserClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MLParserClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MLParserClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MLParserClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MLParserClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MLParserClass->setStatusBar(statusBar);

        retranslateUi(MLParserClass);

        QMetaObject::connectSlotsByName(MLParserClass);
    } // setupUi

    void retranslateUi(QMainWindow *MLParserClass)
    {
        MLParserClass->setWindowTitle(QCoreApplication::translate("MLParserClass", "MLParser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MLParserClass: public Ui_MLParserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MLPARSER_H
