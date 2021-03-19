#include<iostream>
using namespace std;
int main()
{
	int n = 10;
	cout << &n << endl;
	int &ref = n;
	cout << ref << endl;
	// bien tham chieu va bien ma no chieu toi la cung mot bien
	// int &b; error
	// khong the khai bao mot tham chieu ma chua chieu ngay no toi mot bien thuong
	int c = 9;
	//int &ref = c;
	// khong the chieu mot tham chieu toi mot bien khac voi dich ban dau cua no
	return 0;
}
