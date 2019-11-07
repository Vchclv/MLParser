#include "MLParser.h"

MLParser::MLParser(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initWidgets();
	

}


void MLParser::openSlot() 
{

}

void MLParser::initWidgets()
{
	//Menu
	fileMenu = ui.menuBar->addMenu("File");
	openAction = new QAction("Open",this);
	fileMenu->addAction(openAction);
	connect(openAction, SIGNAL(triggered()), this, SLOT(openSlot()));
	//Main Layout
	mainLayout = new QVBoxLayout(this);
	ui.centralWidget->setLayout(mainLayout);
	//Table syntax
	syntaxTable = new QTableWidget(this);
	syntaxTable->setColumnCount(3);
	QStringList tableHeaders;
	tableHeaders << "Position" << "Type" << "Text";
	syntaxTable->setHorizontalHeaderLabels(tableHeaders);
	mainLayout->addWidget(syntaxTable);
	syntaxTable->setColumnWidth(2, 400);
}
