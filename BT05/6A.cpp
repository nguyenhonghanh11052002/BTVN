#include<iostream>
using namespace std;
bool vonglap(int key, int a[], int low, int high)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == key) return 1;
		else if (a[mid] < key)
		{
			low = mid + 1;
		}
		else if (a[mid] > key)
		{
			high = mid - 1;
		}
	}
	return 0;
}
int dequy(int key, int a[], int low, int high)
{
	if (low > high) return -1;
	int mid  = (low + high) / 2;
	if (a[mid] == key) return 1;
	else if (a[mid] < key)
	{
		return dequy(key, a, mid + 1, high);
	} 
	 else if (a[mid] > key)
	 {
	 	return dequy(key, a, low, mid - 1);
	 }
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k;
	cin >> k;
	if (vonglap(k, a, 1, 10) == 1) cout << "ton tai" << endl;
	else cout << "khong ton tai" << endl;
	if (dequy(k, a, 1, 10) == 1) cout << "ton tai" << endl;
	else cout << "khong ton tai" << endl;	
	return 0;
}
