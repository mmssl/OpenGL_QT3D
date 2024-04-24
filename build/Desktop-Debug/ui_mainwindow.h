/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *X;
    QDoubleSpinBox *Y;
    QDoubleSpinBox *Z;
    QLabel *label_2;
    QDoubleSpinBox *R;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    GLWidget *GLwidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        X = new QDoubleSpinBox(centralwidget);
        X->setObjectName("X");
        X->setMinimum(-99.000000000000000);

        horizontalLayout_2->addWidget(X);

        Y = new QDoubleSpinBox(centralwidget);
        Y->setObjectName("Y");
        Y->setMinimum(-99.000000000000000);

        horizontalLayout_2->addWidget(Y);

        Z = new QDoubleSpinBox(centralwidget);
        Z->setObjectName("Z");
        Z->setMinimum(-99.000000000000000);

        horizontalLayout_2->addWidget(Z);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        R = new QDoubleSpinBox(centralwidget);
        R->setObjectName("R");
        R->setValue(1.000000000000000);

        verticalLayout->addWidget(R);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        GLwidget = new GLWidget(centralwidget);
        GLwidget->setObjectName("GLwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GLwidget->sizePolicy().hasHeightForWidth());
        GLwidget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(GLwidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::released, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QT + OpenGL", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Position", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Wireframe", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
