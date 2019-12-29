#include <iostream>
#include <conio.h>
//Latihan 2 Rekursif 2 = Faktorial
using namespace std;
int faktorial(int bil)
{
	if (bil==1)
	return 1;
	else 
	//fungsi rekursif
	return bil*faktorial(bil-1);
}
int main ()
{
	int n;
	cout<<"\tFungsi Rekursif - FAKTORIAL"<<endl;
	cout<<"\t==========================="<<endl;
	cout<<"\nMasukkan nilai n = ";cin>>n;
	cout<<"\nFaktorial "<<n<<"!= "<<faktorial(n)<<endl;
	getch();
}
