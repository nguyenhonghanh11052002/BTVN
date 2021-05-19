#include<iostream>
#include<algorithm>
#include<assert.h>
using namespace std;
class Fraction
{
	public:
	int numerator;
	int denominator;
		Fraction(int n, int d) 
		{
			numerator = n;
			denominator = d;
		}
		void rutgon()
		{
			int ucln = __gcd(denominator, numerator);
			numerator /= ucln;
			denominator /= ucln;
		}
		
		void print()
		{
			if(numerator == denominator)
			{
				cout << "1" << endl;
			}
			else if(numerator == -denominator)
			{
				cout << "-1" << endl;
			}
			else if(denominator == 1)
			{
				cout << numerator << endl;
			}
			else if(denominator == -1)
			{
				cout << "-" << numerator << endl;
			}
			else 
			{
				cout << numerator << "/" << denominator << endl;
			}
		}
		Fraction operator+ (const Fraction& other) const 
		{
			assert(denominator != 0 && other.denominator != 0);
			int mc = denominator*other.denominator;
			Fraction sum(numerator*other.denominator + other.numerator*denominator, mc);
			sum.rutgon();
			return sum;
		}
		Fraction operator- (const Fraction& other) const 
		{
			assert(denominator != 0 && other.denominator != 0);
			int mc = denominator*other.denominator;
			Fraction minus(numerator*other.denominator - other.numerator*denominator, mc);
			minus.rutgon();
			return minus;
		}
		Fraction operator* (const Fraction& other) const 
		{
			assert(denominator != 0 && other.denominator != 0);
			Fraction multy(numerator * other.numerator, denominator * other.denominator);
			multy.rutgon();
			return multy;
		}
		Fraction operator/ (const Fraction& other) const 
		{
			assert(denominator != 0 && other.denominator != 0);
			Fraction divi(numerator / other.numerator, denominator / other.denominator);
			divi.rutgon();
			return divi;
		}
};
int main()
{
	Fraction phan_so(4, 6);
	phan_so.print();
	Fraction x(4, 5);
	Fraction y(6, 5);
	Fraction z = x - y;
	z.print();
}
