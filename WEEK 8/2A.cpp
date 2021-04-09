#include<iostream>
using namespace std;
int main( )
{
 char a[4] = "abc";
 for (char *cp = a; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 int x = 123;
 int *cp = &x;
 cout << (int*) cp << " : " << (*cp) << endl;
 double y = 12.3;
 double *cp1 = &y;
 cout << (double*) cp1 << " : " << (*cp1) << endl;
 return 0;
}
