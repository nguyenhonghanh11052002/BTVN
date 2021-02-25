#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dong = 1;
	for (int i = n; i > 0; i--)
	{
		for (int k = 2; k <= dong; k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i*2 - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
		dong++;
	}
	return 0;
}
