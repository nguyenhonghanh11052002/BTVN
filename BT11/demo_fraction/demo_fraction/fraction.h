#ifndef FRACTION_H_
#define FRACTION_H_

#include<iostream>
#include<algorithm>
#include<assert.h>
using namespace std;
class Fraction
{
public:
	int numerator;
	int denominator;
	Fraction(int n, int d);
	void rutgon();

	void print();
	Fraction operator+ (const Fraction& other);
	Fraction operator- (const Fraction& other);
	Fraction operator* (const Fraction& other);
	Fraction operator/ (const Fraction& other);
};

#endif // !FRACTION_H_

