#include<iostream>
using namespace std;
struct Point
{
int x;
int y;	
};
void print(Point a)
{
	cout << "dia chi a.x: "<< &a.x << endl;
	cout << "dia chi a.y: "<< &a.y << endl;
	cout << "dia chi a: "<< &a << endl;
}
int main()
{
	Point v;
	v.x = 9; 
	v.y = 10;
	print(v);
}
//bien kieu point va va truong x co chung dia chi
// truong y nam tai o lien ke, cach 4 byte
//dia chi cua bien point tinh tu dia chi cua bien dau tien
