#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 1;
	int dong = 1;
	int dem = 0;
	for (int i = 1; i <= n*n; i++)
	{
		if ( k == n + 1)
		{
			k = 1;
		}
		cout << k << ' ';
		dem++;
		if (n == dem)
		{
			k = dong;
			dong++;
			cout << endl;
			dem = 0;
		}
		k++;
	}
	return 0;
}
