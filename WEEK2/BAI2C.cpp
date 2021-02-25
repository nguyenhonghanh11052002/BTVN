#include<iostream>
using namespace std;
int main()
{
	int n;
	int dong = 1;
	cout << "nhap n: ";
	cin >> n;
	for (int i = n; i >= 0; i--)
	{
		for (int k = 2; k <= dong; k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
		dong ++;
	}
	return 0;
}
