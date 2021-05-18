#include<iostream>
using namespace std;

struct Point
{
int x;
int y;	
};
Point mid_point(const Point a, const Point b)
{
	Point trave;
	trave.x = (a.x + b.x)/2;
	trave.y = (a.x + b.y)/2;
	return trave;
}
int main()
{
	Point v1, v2;
	v1.x = 4;
	v1.y = 5;
	v2.x = 6;
	v2.y = 7;
}
