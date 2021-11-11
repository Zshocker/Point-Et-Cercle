#include "Cercle.h"
constexpr auto M_PI = 3.14159265358979323846;
#include<math.h>
#include<assert.h>
#include<iostream>
using namespace std;
Geo::Cercle::Cercle(Point* Center, double ray)
{
	assert(ray >= 0);
	if (Center)this->Center = Center;
	else this->Center = new Point;
	this->ray = ray;
	this->cmp = new GC(1);
}

Geo::Cercle::Cercle(double X, double Y, double ray)
{
	assert(ray >= 0);
	this->Center = new Point(X,Y);
	this->ray = ray;
	this->cmp = new GC(1);
}

Geo::Cercle::Cercle(const Cercle& Cop)
{
	this->Center = Cop.Center;
	this->ray = Cop.ray;
	this->cmp = Cop.cmp;
	this->cmp->incre();
}

bool Geo::Cercle::Appartien(const Point&P) const
{
	double dis = this->Center->Distance(P);
	return dis <= ray;
}

void Geo::Cercle::changeRayon(double Ray)
{
	assert(Ray >= 0);
	ray = Ray;
}

void Geo::Cercle::changeCentre(double X, double Y)
{
	if (cmp->decr() < 1)
	{
		delete this->Center;
		this->Center = NULL;
		delete this->cmp;
		this->cmp = new GC(1);
	}
	this->Center = new Point(X,Y);
}

bool Geo::Cercle::operator==(const Cercle&P)
{
	double dis = Center->Distance(*(P.Center));
	return dis == 0 && P.ray == ray;
}

void Geo::Cercle::changeCentre(Point* Ce)
{
	if (cmp->decr() < 1) 
	{
		delete this->Center;
		this->Center = NULL;
		delete this->cmp;
		this->cmp = new GC(1);
	}
	this->Center = Ce;
}

void Geo::Cercle::Print()
{
	cout << "Center : ", Center->Print(), cout << endl;
	cout << "rayon : "<<ray;
}

Geo::Cercle::~Cercle()
{
	if (this->cmp && this->cmp->decr()<1 && this->Center)
	{
		delete this->Center;
		this->Center = NULL;
		delete this->cmp;
		this->cmp = NULL;
	}
}

double Geo::Cercle::circumference()const
{
	return  2*M_PI*ray;
}

double Geo::Cercle::area()const
{
	return pow(ray,2)*M_PI;
}
