#include "GC.h"

GC::GC(int i)
{
	this->compt = i;
}

void GC::incre()
{
	this->compt++;
}

int GC::decr()
{
	this->compt--;
	return this->compt;
}
