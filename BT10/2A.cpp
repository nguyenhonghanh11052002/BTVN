#include<iostream>
using namespace std;
struct Point
{
  int x;
  int y;	
};
void truyenthamtri(Point a)
{
	cout << "thamtri: " << &a << endl;
}
void truyenthamchieu(Point& b)
{
	cout << "thamchieu: " << &b << endl;
}
int main()
{
	Point v;
	v.x = 4;
	v.y = 5;
	cout << "dia chi cua v: " << &v << endl;
	truyenthamtri(v);
	truyenthamchieu(v);
	
}
