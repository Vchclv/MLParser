#pragma once

#include <QObject>

class SyntaxUnit : public QObject
{
	Q_OBJECT

public:
	SyntaxUnit(QObject *parent);
	SyntaxUnit(int position, QString text, int type);
	~SyntaxUnit();

	int position;//Position of first char unit in file;
	QString text;
	int type;//index type of unit - tag, comment, value etc.
	QStringList attributes;//List of attributes

};
