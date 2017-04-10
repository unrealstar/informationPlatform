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
#include <QtWidgets/QTabWidget>
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *school;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *sex;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *modifyStudent;
    QLineEdit *age;
    QLineEdit *phone;
    QPushButton *addStudent;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableView *student_tableview;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_13;
    QPushButton *addClass;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_12;
    QPushButton *modifyClass;
    QLineEdit *teacherName;
    QLineEdit *value;
    QLineEdit *totalNum;
    QComboBox *grade;
    QLineEdit *classCode;
    QLineEdit *subject;
    QLineEdit *className;
    QLineEdit *assignNum;
    QLineEdit *classNum;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QTableView *class_tableview;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *informationPlatformClass)
    {
        if (informationPlatformClass->objectName().isEmpty())
            informationPlatformClass->setObjectName(QStringLiteral("informationPlatformClass"));
        informationPlatformClass->resize(1483, 954);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        informationPlatformClass->setFont(font);
        centralWidget = new QWidget(informationPlatformClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        school = new QLineEdit(groupBox);
        school->setObjectName(QStringLiteral("school"));

        gridLayout->addWidget(school, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        sex = new QComboBox(groupBox);
        sex->setObjectName(QStringLiteral("sex"));

        gridLayout->addWidget(sex, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        name = new QLineEdit(groupBox);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        modifyStudent = new QPushButton(groupBox);
        modifyStudent->setObjectName(QStringLiteral("modifyStudent"));

        gridLayout->addWidget(modifyStudent, 2, 4, 1, 1);

        age = new QLineEdit(groupBox);
        age->setObjectName(QStringLiteral("age"));

        gridLayout->addWidget(age, 0, 3, 1, 1);

        phone = new QLineEdit(groupBox);
        phone->setObjectName(QStringLiteral("phone"));

        gridLayout->addWidget(phone, 1, 3, 1, 1);

        addStudent = new QPushButton(groupBox);
        addStudent->setObjectName(QStringLiteral("addStudent"));

        gridLayout->addWidget(addStudent, 2, 2, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 2);
        gridLayout->setColumnStretch(4, 2);

        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        student_tableview = new QTableView(groupBox_2);
        student_tableview->setObjectName(QStringLiteral("student_tableview"));

        gridLayout_2->addWidget(student_tableview, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 3, 0, 1, 1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 3, 3, 1, 1);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 4, 0, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 1, 3, 1, 1);

        addClass = new QPushButton(groupBox_3);
        addClass->setObjectName(QStringLiteral("addClass"));

        gridLayout_3->addWidget(addClass, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 3, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 2, 3, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        modifyClass = new QPushButton(groupBox_3);
        modifyClass->setObjectName(QStringLiteral("modifyClass"));

        gridLayout_3->addWidget(modifyClass, 5, 2, 1, 1);

        teacherName = new QLineEdit(groupBox_3);
        teacherName->setObjectName(QStringLiteral("teacherName"));

        gridLayout_3->addWidget(teacherName, 4, 1, 1, 2);

        value = new QLineEdit(groupBox_3);
        value->setObjectName(QStringLiteral("value"));

        gridLayout_3->addWidget(value, 3, 1, 1, 2);

        totalNum = new QLineEdit(groupBox_3);
        totalNum->setObjectName(QStringLiteral("totalNum"));

        gridLayout_3->addWidget(totalNum, 2, 1, 1, 2);

        grade = new QComboBox(groupBox_3);
        grade->setObjectName(QStringLiteral("grade"));

        gridLayout_3->addWidget(grade, 1, 1, 1, 2);

        classCode = new QLineEdit(groupBox_3);
        classCode->setObjectName(QStringLiteral("classCode"));

        gridLayout_3->addWidget(classCode, 0, 1, 1, 2);

        subject = new QLineEdit(groupBox_3);
        subject->setObjectName(QStringLiteral("subject"));

        gridLayout_3->addWidget(subject, 1, 4, 1, 2);

        className = new QLineEdit(groupBox_3);
        className->setObjectName(QStringLiteral("className"));

        gridLayout_3->addWidget(className, 0, 4, 1, 2);

        assignNum = new QLineEdit(groupBox_3);
        assignNum->setObjectName(QStringLiteral("assignNum"));
        assignNum->setEnabled(false);

        gridLayout_3->addWidget(assignNum, 2, 4, 1, 2);

        classNum = new QLineEdit(groupBox_3);
        classNum->setObjectName(QStringLiteral("classNum"));

        gridLayout_3->addWidget(classNum, 3, 4, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(3, 1);
        gridLayout_3->setColumnStretch(4, 1);
        gridLayout_3->setColumnStretch(5, 1);

        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        class_tableview = new QTableView(groupBox_4);
        class_tableview->setObjectName(QStringLiteral("class_tableview"));

        horizontalLayout->addWidget(class_tableview);


        verticalLayout_3->addWidget(groupBox_4);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        informationPlatformClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(informationPlatformClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1483, 26));
        informationPlatformClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(informationPlatformClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        informationPlatformClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(informationPlatformClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        informationPlatformClass->setStatusBar(statusBar);

        retranslateUi(informationPlatformClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(informationPlatformClass);
    } // setupUi

    void retranslateUi(QMainWindow *informationPlatformClass)
    {
        informationPlatformClass->setWindowTitle(QApplication::translate("informationPlatformClass", "informationPlatform", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("informationPlatformClass", "\344\277\241\346\201\257\345\275\225\345\205\245", Q_NULLPTR));
        label_3->setText(QApplication::translate("informationPlatformClass", "\347\224\265\350\257\235", Q_NULLPTR));
        label_4->setText(QApplication::translate("informationPlatformClass", "\345\255\246\346\240\241", Q_NULLPTR));
        sex->clear();
        sex->insertItems(0, QStringList()
         << QApplication::translate("informationPlatformClass", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("informationPlatformClass", "\345\245\263", Q_NULLPTR)
        );
        label->setText(QApplication::translate("informationPlatformClass", "\345\247\223\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("informationPlatformClass", "\345\271\264\351\276\204", Q_NULLPTR));
        label_5->setText(QApplication::translate("informationPlatformClass", "\346\200\247\345\210\253", Q_NULLPTR));
        modifyStudent->setText(QApplication::translate("informationPlatformClass", "\344\277\256\346\224\271", Q_NULLPTR));
        addStudent->setText(QApplication::translate("informationPlatformClass", "\346\217\220\344\272\244", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("informationPlatformClass", "\345\275\225\345\205\245\344\277\241\346\201\257", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("informationPlatformClass", "\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("informationPlatformClass", "\350\257\276\347\250\213\345\275\225\345\205\245", Q_NULLPTR));
        label_10->setText(QApplication::translate("informationPlatformClass", "\346\200\273\344\272\272\346\225\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("informationPlatformClass", "\347\217\255\347\272\247\347\274\226\347\240\201", Q_NULLPTR));
        label_14->setText(QApplication::translate("informationPlatformClass", "\347\217\255\347\272\247\351\207\221\351\242\235", Q_NULLPTR));
        label_15->setText(QApplication::translate("informationPlatformClass", "\350\257\276\346\254\241", Q_NULLPTR));
        label_16->setText(QApplication::translate("informationPlatformClass", "\346\225\231\345\270\210\345\247\223\345\220\215", Q_NULLPTR));
        label_13->setText(QApplication::translate("informationPlatformClass", "\347\247\221\347\233\256", Q_NULLPTR));
        addClass->setText(QApplication::translate("informationPlatformClass", "\346\267\273\345\212\240", Q_NULLPTR));
        label_7->setText(QApplication::translate("informationPlatformClass", "\347\217\255\347\272\247\345\220\215\347\247\260", Q_NULLPTR));
        label_9->setText(QApplication::translate("informationPlatformClass", "\345\267\262\346\212\245\344\272\272\346\225\260", Q_NULLPTR));
        label_12->setText(QApplication::translate("informationPlatformClass", "\345\271\264\347\272\247", Q_NULLPTR));
        modifyClass->setText(QApplication::translate("informationPlatformClass", "\344\277\256\346\224\271", Q_NULLPTR));
        grade->clear();
        grade->insertItems(0, QStringList()
         << QApplication::translate("informationPlatformClass", "\345\210\235\344\270\200", Q_NULLPTR)
         << QApplication::translate("informationPlatformClass", "\345\210\235\344\272\214", Q_NULLPTR)
         << QApplication::translate("informationPlatformClass", "\345\210\235\344\270\211", Q_NULLPTR)
         << QApplication::translate("informationPlatformClass", "\351\253\230\344\270\200", Q_NULLPTR)
         << QApplication::translate("informationPlatformClass", "\351\253\230\344\272\214", Q_NULLPTR)
         << QApplication::translate("informationPlatformClass", "\351\253\230\344\270\211", Q_NULLPTR)
        );
        groupBox_4->setTitle(QApplication::translate("informationPlatformClass", "\350\257\276\347\250\213\344\277\241\346\201\257", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("informationPlatformClass", "\350\257\276\347\250\213\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class informationPlatformClass: public Ui_informationPlatformClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONPLATFORM_H
