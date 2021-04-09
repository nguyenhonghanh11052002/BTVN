#include<iostream>
using namespace std;
void f(int xval)
{
 int x;
 x = xval;
 cout << &x << endl;
 // in dia chi cua x tai dây
}
void g(int yval)
{
 int y;
 cout << &y;
 // in dia chi cua y tai dây
}
int main()
{
 f(7);
 g(11);
 return 0;
}
// dia chi cua x va y giong nhau
// do x va y la hai bien cuc bo nen khi thoat ra khoi ham thi bien x bi xoa di va thay vao bang bien y
