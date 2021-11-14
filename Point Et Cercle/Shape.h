#pragma once
#include"Point.h"
namespace Geo {
	class Shape
	{
	protected:
		Shape();
	public:
		virtual double circumference()const;
		virtual double area()const;
		virtual bool Appartien(const Point&)const;
	};
}