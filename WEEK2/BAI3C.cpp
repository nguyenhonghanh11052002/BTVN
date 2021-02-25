#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 0;
	while (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << ' ';
		}
		for (int j = 0; j <= k; j++)
		{
			cout << "*";
		}
		n--;
		k+=2;
		cout << endl;
	}
	return 0;
}
