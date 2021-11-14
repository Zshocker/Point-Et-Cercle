#pragma once
#include"Point.h"
#include"GC.h"
#include"Shape.h"
namespace Geo {
	class Cercle :public Shape
	{
		Point* Center;
		GC* cmp;
		double ray;
	public:
		Cercle(Point* Center=nullptr, double ray = 0);
		Cercle(double X,double Y, double ray = 0);
		Cercle(const Cercle&Cop);
		double circumference()const;
		double area()const;
		bool Appartien(const Point&)const;
		void changeRayon(double Ray);
		void changeCentre(double X,double Y);
		bool operator==(const Cercle&);
		void changeCentre(Point*Ce);
		void Print();
		~Cercle();
	};
}