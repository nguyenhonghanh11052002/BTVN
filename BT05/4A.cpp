#include<iostream>
using namespace std;
void arr(int array[])
{
	for (int i = 0; i < 4; i++)
	{
		cout << &array[i] << ' ';
	}
	cout << endl;
}
void arr_(int ar[])
{
	ar[0] = 6;
	for (int i = 0; i < 4; i++)
	{
		cout << &ar[i] << ' ';
	}
	cout << endl;
}
void str(string s)
{
	cout << &s << endl;
}
void str_(string &s)
{
	cout << &s << endl;
}
int main()
{
	int a[4] = {1, 2, 3, 4};
	for (int i = 0; i < 4; i++)
	{
		cout << &a[i] << ' ';
	}
	cout << endl;
	arr(a);
	arr_(a);
	string s = "hdgfjhgfj"; 
	cout << &s << endl;
	str(s); 
	str_(s);
	return 0;
	// string co the truyen duoc theo hai co che tham chieu va tham tri
	// mag chi co the truyen theo co che tham tri
}
