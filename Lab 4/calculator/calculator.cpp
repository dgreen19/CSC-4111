#include <QtWidgets>
#include <cmath>

#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent): QMainWindow(parent) {
	setWindowRole("pop-up");
	ui = new Ui::Calculator;
	ui->setupUi(this);

	ui->Input1->setValidator(new QDoubleValidator(this));
	ui->Input2->setValidator(new QDoubleValidator(this));

	clear();

	foreach(QAbstractButton * btn, ui->inputGroup->buttons()) {
		connect(btn, &QAbstractButton::clicked, this, &Calculator::insertText);
	}

	foreach(QAbstractButton * btn, ui->operationGroup->buttons()) {
		connect(btn, &QAbstractButton::clicked, this, &Calculator::setOperation);
	}

	connect(ui->btnDelete, &QAbstractButton::clicked, this, &Calculator::deleteText);
	connect(ui->btnClear, &QAbstractButton::clicked, this, &Calculator::clear);
	connect(ui->btnEquals, &QAbstractButton::clicked, this, &Calculator::calculate);
}

Calculator::~Calculator() {
	delete activeInput;
	delete ui;
}

void Calculator::calculate() {
	double Input1 = ui->Input1->text().toDouble();
	double Input2 = ui->Input2->text().toDouble();
	QLCDNumber *result = ui->result;
	switch (operation) {
		case Operation::ADD:
			result->display(Input1 + Input2);
			break;
		case Operation::SUBTRACT:
			result->display(Input1 - Input2);
			break;
		case Operation::MULTIPLY:
			result->display(Input1 * Input2);
			break;
		case Operation::DIVIDE:
			result->display(Input1 / Input2);
			break;
		case Operation::SQRT:
			result->display(std::sqrt(Input1));
		default:
			return;
	}
}

void Calculator::clear() {
	ui->Input1->clear();
	setOperation();
	ui->Input2->clear();
	ui->result->display(0);
	activeInput = ui->Input1;
}

void Calculator::deleteText() {
	activeInput->backspace();
}

void Calculator::insertText() {
	QPushButton *btn = qobject_cast<QPushButton*>(sender());
	if (btn) {
		activeInput->insert(btn->text());
	}
}

void Calculator::setOperation() {
	QPushButton *btn = qobject_cast<QPushButton*>(sender());
	QString op = btn ? btn->text() : " ";
	bool carryOp = true;
	if (op == "+") {
		operation = Operation::ADD;
	}
	else if (op == "÷") {
		operation = Operation::DIVIDE;
	}
	else if (op == "×") {
		operation = Operation::MULTIPLY;
	}
	else if (op == "√") {
		operation = Operation::SQRT;
		carryOp = false;
	}
	else if (op == "-") {
		operation = Operation::SUBTRACT;
	}
	else {
		op = " ";
		carryOp = false;
		operation = Operation::NONE;
	}
	
	//ui->operationText->setText(op);
	ui->operrand->setText(op);


	if (activeInput == ui->Input2 && carryOp && ui->result->value()) {
		ui->Input1->setText(QString::number(ui->result->value()));
		ui->Input2->clear();
	}

	if (op == "√") {
		ui->Input2->hide();
	}
	else {
		ui->Input2->show();
		activeInput = ui->Input2;
	}
}
