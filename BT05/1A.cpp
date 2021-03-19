#include<iostream>
using namespace std;
int main()
{
	int a[3] = {1, 2, 3};
	char b[3] = {'a', 'b', 'c'};
	for (int i = 0; i < 3; i++)
	{
		cout << (void*)&a[i] << ' ';
	}
	cout << endl;
	for (int i = 0;  i < 3; i++)
	{
		cout << (void*)&b[i] << ' ';
	}
	// bien kieu int cho cac dia chi cach nhau 4 don vi (chiem 4 byte)
	// bien kieu char cho cac dia chi cach nhau 1 don vi (chiem 1 byte)
	return 0;
}
