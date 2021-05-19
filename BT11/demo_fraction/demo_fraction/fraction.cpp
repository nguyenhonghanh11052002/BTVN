#include"fraction.h"

Fraction::Fraction(int n, int d)
{
	denominator = d;
	numerator = n;
}
void Fraction::rutgon()
{
	int ucln = __gcd(denominator, numerator);
	numerator /= ucln;
	denominator /= ucln;
}
void Fraction::print()
{
	if (numerator == denominator)
	{
		cout << "1" << endl;
	}
	else if (numerator == -denominator)
	{
		cout << "-1" << endl;
	}
	else if (denominator == 1)
	{
		cout << numerator << endl;
	}
	else if (denominator == -1)
	{
		cout << "-" << numerator << endl;
	}
	else
	{
		cout << numerator << "/" << denominator << endl;
	}
}
Fraction Fraction::operator+ (const Fraction& other) const
{
	assert(denominator != 0 && other.denominator != 0);
	int mc = denominator * other.denominator;
	Fraction sum(numerator * other.denominator + other.numerator * denominator, mc);
	sum.rutgon();
	return sum;
}
Fraction Fraction::operator- (const Fraction& other) const
{
	assert(denominator != 0 && other.denominator != 0);
	int mc = denominator * other.denominator;
	Fraction minus(numerator * other.denominator - other.numerator * denominator, mc);
	minus.rutgon();
	return minus;
}
Fraction Fraction::operator* (const Fraction& other) const {
	assert(denominator != 0 && other.denominator != 0);
	Fraction multy(numerator * other.numerator, denominator * other.denominator);
	multy.rutgon();
	return multy;
}
Fraction Fraction::operator/(const Fraction& other) const {
	assert(denominator != 0 && other.denominator != 0);
	Fraction divi(numerator / other.numerator, denominator / other.denominator);
	divi.rutgon();
	return divi;
}