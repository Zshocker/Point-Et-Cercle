#include "Point.h"
#include<cmath>
#include<iostream>
using namespace std;
Geo::Point::Point(double X, double Y)
{
	this->X = X;
	this->Y = Y;
}

double Geo::Point::Distance(const Point&P)
{
	return sqrt(pow(X-P.X,2)+pow(Y-P.Y,2));
}

void Geo::Point::Print()
{
	cout << "X: " << X << " Y: " << Y;
}
