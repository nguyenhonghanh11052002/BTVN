#include<iostream>
using namespace std;
int thaydoi(int &x, int y)
{
	x++;
	cout << &x << endl;
	y++;
	cout << &y << endl;
}
int main()
{
	int m, n;
	cin >> m >> n;
	thaydoi(m, n);
	cout << m << endl;
	cout << &m << endl;
	cout << n << endl;
	cout << &n << endl;
	return 0;
	// dia chi cua tham chieu va doi so la giong nhau (deu la 0x6ffe1c)
	// dia chi cua tham tri va doi so khac nhau 
}
