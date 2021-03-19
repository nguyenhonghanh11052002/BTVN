#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
void taobando(int** bando , int dong, int cot, int K)
{
    srand(time(NULL));
    while(K > 0)
    {
        int ran1, ran2;
        ran1 = rand() % dong ;
        ran2 = rand() % cot  ;
        bando[ran1][ran2] = -1; // danh dau day la vi tri co bom
        K--;

    }
{
   cout << setw(4) << " ";
   for( int i = 1; i <= cot; i++)
   {
       cout << setw(4) << i;
   }
   cout << endl;
   for( int i = 0; i < dong; i ++)
   {
       cout << setw(4) << i +1 ;
       for(int j = 0; j < cot; j++)
       {
         cout << setw(4) << "-";
       }
       cout << endl;

   }

}
}
void kiemtramin(int** bando, int dong, int cot)
{
   cout << setw(4) << " ";
   for( int i = 1; i <= cot; i++)
   {
       cout << setw(4) << i;
   }
   cout << endl;
   for( int i = 0; i < dong; i ++)
   {
       cout << setw(4) << i +1 ;
       for(int j = 0; j < cot; j++)
       {
         if (bando[i][j] == -1 ) cout << setw(4) << "-";
         else if (bando[i][j] == 1) cout << setw(4) << "o";
         else if (bando[i][j] == 0) cout << setw(4) << "-";
       }
       cout << endl;

   }

   }

void inmin(int** bando, int dong, int cot)
{
   cout << setw(4) << " ";
   for( int i = 1; i <= cot; i++)
   {
       cout << setw(4) << i;
   }
   cout << endl;
   for( int i = 0; i < dong; i ++)
   {
       cout << setw(4) << i +1 ;
       for(int j = 0; j < cot; j++)
       {
         if (bando[i][j] == -1 ) cout << setw(4) << "x";
         else if (bando[i][j] == 1) cout << setw(4) << "o";
         else if (bando[i][j] == 0) cout << setw(4) << "-";
       }
       cout << endl;

   }

   }

void choigame(int** bando, int dong, int cot, int solanchoi)
{
    int mangsong = 1;
    while(mangsong == 1 && solanchoi > 0){
    cout <<"Vui long nhap toa do ma ban muon do: " ;
    int x, y;
    cin >> x >> y;
    while(x > dong || y > cot)


    {
        cout << "Vui long nhap lai toa do: ";
        cin >> x >> y;
    }
    x--; y--;

    if(bando[x][y] == 0)
    {
        bando[x][y] = 1;
        kiemtramin(bando, dong, cot);

    }
    else if(bando[x][y]== 1)
    {
        cout << "Ban da nhap toa do nay mot lan " << endl;
    }

    else if(bando[x][y] == -1)
    {
        cout << "Ban thua roi :<" << endl;
        inmin(bando, dong, cot);
        mangsong = 0;
    }
    solanchoi --;


    if (solanchoi == 0) cout << "Ban da chien thang :>";
    }



}


int main()
{
    int dong, cot, K;
    cout << "Chao mung den voi tro choi Do min: " << endl;
    cout << "Vui long nhap so cot va dong: "  << endl;
    cin >>dong >> cot;
    while(cot <= 0  || dong <= 0)
    {
        cout << "Vui long nhap lai so dong va cot: " << endl;
        cin >> dong >> cot ;
    }
    cout << "Vui long nhap so min ban muon: " << endl;
    cin >> K ;
    while (K > cot * dong )
    {
        cout << "Vui long nhap lai so min: " << endl;
        cin >> K;
    }
    int** bando = new int* [dong];
	for (int i = 0; i < cot; i++)
	{
		bando[i] = new int[cot];
	}

	for(int i = 0 ; i < dong; i ++)
    {
        for(int j = 0; j < cot ; j++)
        {
            bando[i][j] = 0;
        }

    }
    int solanchoi = dong * cot - K;
    taobando(bando, dong, cot, K);
    choigame(bando,dong,cot, solanchoi);


}
