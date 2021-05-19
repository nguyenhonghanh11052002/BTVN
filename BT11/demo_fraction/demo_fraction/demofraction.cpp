#include"fraction.h"

int main()
{
	Fraction phan_so(4, 6);
	phan_so.print();
	Fraction x(4, 5);
	Fraction y(6, 5);
	Fraction z = x - y;
	z.print();
}