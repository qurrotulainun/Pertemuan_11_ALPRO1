#include<math.h>
#include<iostream>
//Latihan 7 Kombinasi
using namespace std;

int faktorial(int a);
int kombinasi(int a, int b);
int main()
{	int n,r;
	cout<<"PERHITUNGAN KOMBINASI" <<endl;
	cout<<"masukkan bilangan pertama : ";cin>>n;
	cout<<"masukkan bilangan kedua : "; cin>>r;
	cout<<"\nHasil kombinasi = "<<kombinasi(n,r)<<endl;}
int kombinasi (int n, int r)
{	if(n<r)
	return 0;
	else
	return(faktorial (n) / (faktorial(r) * faktorial (n-r)));}
int faktorial (int a)
	{	int hasil;
		if(a<=1)
			hasil=1;
		else
			hasil = a*faktorial(a-1);
		return (hasil);}
