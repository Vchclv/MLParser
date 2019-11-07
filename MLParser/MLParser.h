#pragma once

#include <QtWidgets/QMainWindow>
#include <QTableWidget>
#include <QVBoxLayout>
#include "ui_MLParser.h"

class MLParser : public QMainWindow
{
	Q_OBJECT

public:
	MLParser(QWidget *parent = Q_NULLPTR);

private:
	Ui::MLParserClass ui;

	QMenu* fileMenu;
	QAction* openAction;
	QTableWidget* syntaxTable;
	QVBoxLayout* mainLayout;

	void initWidgets();

private slots:
	void openSlot();

};
