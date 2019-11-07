#include "SyntaxUnit.h"

SyntaxUnit::SyntaxUnit(QObject *parent)
	: QObject(parent)
{
}

SyntaxUnit::SyntaxUnit(int position, QString text, int type)
{
	this->position = position;
	this->text = text;
	this->type = type;
}

SyntaxUnit::~SyntaxUnit()
{
}
