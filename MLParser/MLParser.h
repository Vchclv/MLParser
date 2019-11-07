#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MLParser.h"

class MLParser : public QMainWindow
{
	Q_OBJECT

public:
	MLParser(QWidget *parent = Q_NULLPTR);

private:
	Ui::MLParserClass ui;
};
