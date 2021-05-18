#include<iostream>
using namespace std;
struct Point
{
int x;
int y;

};
void print(Point v)
{
	cout << "(" << v.x << ", " << v.y << ")"; 
}
int main()
{
	Point a;
	a.x = 5;
	a.y = 6;
	print(a);
	return 0;
}
