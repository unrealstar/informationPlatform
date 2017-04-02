/********************************************************************************
** Form generated from reading UI file 'informationplatform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONPLATFORM_H
#define UI_INFORMATIONPLATFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_informationPlatformClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *age;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *school;
    QLineEdit *phone;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *sex;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QTableView *student_tableview;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *informationPlatformClass)
    {
        if (informationPlatformClass->objectName().isEmpty())
            informationPlatformClass->setObjectName(QStringLiteral("informationPlatformClass"));
        informationPlatformClass->resize(785, 707);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        informationPlatformClass->setFont(font);
        centralWidget = new QWidget(informationPlatformClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        name = new QLineEdit(groupBox);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        age = new QLineEdit(groupBox);
        age->setObjectName(QStringLiteral("age"));

        gridLayout->addWidget(age, 0, 3, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 3, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        school = new QLineEdit(groupBox);
        school->setObjectName(QStringLiteral("school"));

        gridLayout->addWidget(school, 2, 1, 1, 1);

        phone = new QLineEdit(groupBox);
        phone->setObjectName(QStringLiteral("phone"));

        gridLayout->addWidget(phone, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        sex = new QComboBox(groupBox);
        sex->setObjectName(QStringLiteral("sex"));

        gridLayout->addWidget(sex, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        student_tableview = new QTableView(groupBox_2);
        student_tableview->setObjectName(QStringLiteral("student_tableview"));

        horizontalLayout->addWidget(student_tableview);


        verticalLayout->addWidget(groupBox_2);

        informationPlatformClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(informationPlatformClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 785, 26));
        informationPlatformClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(informationPlatformClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        informationPlatformClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(informationPlatformClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        informationPlatformClass->setStatusBar(statusBar);

        retranslateUi(informationPlatformClass);

        QMetaObject::connectSlotsByName(informationPlatformClass);
    } // setupUi

    void retranslateUi(QMainWindow *informationPlatformClass)
    {
        informationPlatformClass->setWindowTitle(QApplication::translate("informationPlatformClass", "informationPlatform", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("informationPlatformClass", "\344\277\241\346\201\257\345\275\225\345\205\245", Q_NULLPTR));
        label->setText(QApplication::translate("informationPlatformClass", "\345\247\223\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("informationPlatformClass", "\345\271\264\351\276\204", Q_NULLPTR));
        pushButton->setText(QApplication::translate("informationPlatformClass", "\346\217\220\344\272\244", Q_NULLPTR));
        label_4->setText(QApplication::translate("informationPlatformClass", "\345\255\246\346\240\241", Q_NULLPTR));
        label_3->setText(QApplication::translate("informationPlatformClass", "\347\224\265\350\257\235", Q_NULLPTR));
        label_5->setText(QApplication::translate("informationPlatformClass", "\346\200\247\345\210\253", Q_NULLPTR));
        sex->clear();
        sex->insertItems(0, QStringList()
         << QApplication::translate("informationPlatformClass", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("informationPlatformClass", "\345\245\263", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("informationPlatformClass", "\344\277\241\346\201\257\346\230\276\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class informationPlatformClass: public Ui_informationPlatformClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONPLATFORM_H
