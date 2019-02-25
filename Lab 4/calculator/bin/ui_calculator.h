/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *result;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lhs;
    QLabel *operationText;
    QLineEdit *rhs;
    QGridLayout *gridLayout;
    QPushButton *btnMultiply;
    QPushButton *btn5;
    QPushButton *btn4;
    QPushButton *btn7;
    QPushButton *btnDivide;
    QPushButton *btn6;
    QPushButton *btnSqrt;
    QPushButton *btnMinus;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnAdd;
    QPushButton *btn0;
    QPushButton *btnDot;
    QPushButton *btnEquals;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnClear;
    QPushButton *btnDelete;
    QMenuBar *menubar;
    QButtonGroup *inputGroup;
    QButtonGroup *operationGroup;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(353, 242);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        result = new QLCDNumber(centralwidget);
        result->setObjectName(QStringLiteral("result"));
        result->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        result->setFont(font);
        result->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        result->setFrameShape(QFrame::StyledPanel);
        result->setDigitCount(25);
        result->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(result);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lhs = new QLineEdit(centralwidget);
        lhs->setObjectName(QStringLiteral("lhs"));
        lhs->setFocusPolicy(Qt::NoFocus);
        lhs->setFrame(true);
        lhs->setReadOnly(false);

        horizontalLayout->addWidget(lhs);

        operationText = new QLabel(centralwidget);
        operationText->setObjectName(QStringLiteral("operationText"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        operationText->setFont(font1);

        horizontalLayout->addWidget(operationText);

        rhs = new QLineEdit(centralwidget);
        rhs->setObjectName(QStringLiteral("rhs"));
        rhs->setFocusPolicy(Qt::NoFocus);
        rhs->setReadOnly(false);

        horizontalLayout->addWidget(rhs);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        btnMultiply = new QPushButton(centralwidget);
        operationGroup = new QButtonGroup(Calculator);
        operationGroup->setObjectName(QStringLiteral("operationGroup"));
        operationGroup->addButton(btnMultiply);
        btnMultiply->setObjectName(QStringLiteral("btnMultiply"));
        sizePolicy.setHeightForWidth(btnMultiply->sizePolicy().hasHeightForWidth());
        btnMultiply->setSizePolicy(sizePolicy);
        btnMultiply->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnMultiply, 1, 3, 1, 1);

        btn5 = new QPushButton(centralwidget);
        inputGroup = new QButtonGroup(Calculator);
        inputGroup->setObjectName(QStringLiteral("inputGroup"));
        inputGroup->addButton(btn5);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn4 = new QPushButton(centralwidget);
        inputGroup->addButton(btn4);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);
        btn4->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn7 = new QPushButton(centralwidget);
        inputGroup->addButton(btn7);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btnDivide = new QPushButton(centralwidget);
        operationGroup->addButton(btnDivide);
        btnDivide->setObjectName(QStringLiteral("btnDivide"));
        sizePolicy.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy);
        btnDivide->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnDivide, 0, 3, 1, 1);

        btn6 = new QPushButton(centralwidget);
        inputGroup->addButton(btn6);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btnSqrt = new QPushButton(centralwidget);
        operationGroup->addButton(btnSqrt);
        btnSqrt->setObjectName(QStringLiteral("btnSqrt"));
        sizePolicy.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy);
        btnSqrt->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnSqrt, 0, 2, 1, 1);

        btnMinus = new QPushButton(centralwidget);
        operationGroup->addButton(btnMinus);
        btnMinus->setObjectName(QStringLiteral("btnMinus"));
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);
        btnMinus->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnMinus, 2, 3, 1, 1);

        btn1 = new QPushButton(centralwidget);
        inputGroup->addButton(btn1);
        btn1->setObjectName(QStringLiteral("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setMinimumSize(QSize(80, 0));
        btn1->setSizeIncrement(QSize(5, 5));
        btn1->setBaseSize(QSize(10, 10));
        btn1->setFocusPolicy(Qt::NoFocus);
        btn1->setFlat(false);

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        btn2 = new QPushButton(centralwidget);
        inputGroup->addButton(btn2);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btn3 = new QPushButton(centralwidget);
        inputGroup->addButton(btn3);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btnAdd = new QPushButton(centralwidget);
        operationGroup->addButton(btnAdd);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnAdd, 3, 3, 1, 1);

        btn0 = new QPushButton(centralwidget);
        inputGroup->addButton(btn0);
        btn0->setObjectName(QStringLiteral("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn0, 4, 0, 1, 2);

        btnDot = new QPushButton(centralwidget);
        inputGroup->addButton(btnDot);
        btnDot->setObjectName(QStringLiteral("btnDot"));
        sizePolicy.setHeightForWidth(btnDot->sizePolicy().hasHeightForWidth());
        btnDot->setSizePolicy(sizePolicy);
        btnDot->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnDot, 4, 2, 1, 1);

        btnEquals = new QPushButton(centralwidget);
        btnEquals->setObjectName(QStringLiteral("btnEquals"));
        sizePolicy.setHeightForWidth(btnEquals->sizePolicy().hasHeightForWidth());
        btnEquals->setSizePolicy(sizePolicy);
        btnEquals->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnEquals, 4, 3, 1, 1);

        btn8 = new QPushButton(centralwidget);
        inputGroup->addButton(btn8);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btn9 = new QPushButton(centralwidget);
        inputGroup->addButton(btn9);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnClear, 0, 0, 1, 1);

        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btnDelete, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 353, 20));
        Calculator->setMenuBar(menubar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "MainWindow", Q_NULLPTR));
        operationText->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        btnMultiply->setAccessibleName(QApplication::translate("Calculator", "multiplication", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnMultiply->setText(QApplication::translate("Calculator", "\303\227", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnMultiply->setShortcut(QApplication::translate("Calculator", "*", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn5->setShortcut(QApplication::translate("Calculator", "5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn4->setShortcut(QApplication::translate("Calculator", "4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn7->setShortcut(QApplication::translate("Calculator", "7", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_ACCESSIBILITY
        btnDivide->setAccessibleName(QApplication::translate("Calculator", "division", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnDivide->setText(QApplication::translate("Calculator", "\303\267", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnDivide->setShortcut(QApplication::translate("Calculator", "/", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn6->setShortcut(QApplication::translate("Calculator", "6", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_ACCESSIBILITY
        btnSqrt->setAccessibleName(QApplication::translate("Calculator", "square root", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnSqrt->setText(QApplication::translate("Calculator", "\342\210\232", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnSqrt->setShortcut(QApplication::translate("Calculator", "R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_ACCESSIBILITY
        btnMinus->setAccessibleName(QApplication::translate("Calculator", "subtraction", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnMinus->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnMinus->setShortcut(QApplication::translate("Calculator", "-", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn1->setShortcut(QApplication::translate("Calculator", "1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn2->setShortcut(QApplication::translate("Calculator", "2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn3->setShortcut(QApplication::translate("Calculator", "3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_ACCESSIBILITY
        btnAdd->setAccessibleName(QApplication::translate("Calculator", "addition", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnAdd->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnAdd->setShortcut(QApplication::translate("Calculator", "+", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn0->setShortcut(QApplication::translate("Calculator", "0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btnDot->setText(QApplication::translate("Calculator", ".", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnDot->setShortcut(QApplication::translate("Calculator", ".", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_ACCESSIBILITY
        btnEquals->setAccessibleName(QApplication::translate("Calculator", "equals", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnEquals->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnEquals->setShortcut(QApplication::translate("Calculator", "Enter", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        btnEquals->setShortcut(QApplication::translate("Calculator", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn8->setShortcut(QApplication::translate("Calculator", "8", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btn9->setShortcut(QApplication::translate("Calculator", "9", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_ACCESSIBILITY
        btnClear->setAccessibleName(QApplication::translate("Calculator", "clear", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnClear->setText(QApplication::translate("Calculator", "Clear", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnClear->setShortcut(QApplication::translate("Calculator", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_SHORTCUT
        btnClear->setShortcut(QApplication::translate("Calculator", "Ctrl+Backspace", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_ACCESSIBILITY
        btnDelete->setAccessibleName(QApplication::translate("Calculator", "delete", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        btnDelete->setText(QApplication::translate("Calculator", "Del", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        btnDelete->setShortcut(QApplication::translate("Calculator", "Backspace", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
