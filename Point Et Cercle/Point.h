#pragma once
namespace Geo {
	class Point
	{
		double X, Y;
	public:
		Point(double X = 0, double Y = 0);
		double Distance(const Point&);
		void Print();
	};
}
