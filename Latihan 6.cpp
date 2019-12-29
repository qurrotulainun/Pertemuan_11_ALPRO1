#include<math.h>
#include<iostream>
//Latihan 6 Permutasi
using namespace std;
int faktorial (int a);
int permutasi (int a, int b);
int main()
{	int n,r;
	cout<<"PERHITUNGAN PERMUTASI"<<endl;
	cout<<"masukkan bilangan pertama : ";cin>>n;
	cout<<"masukkan bilangan kedua : ";cin>>r;
	cout<<"permutasi "<<n<<" = "<<permutasi(n,r)<<endl;}
int permutasi (int n, int r)
{	if(n<r)
	return 0;
	else
	return (faktorial (n) / faktorial(n-r) );}
int faktorial (int a)
	{	int hasil;
		if (a<=1)
		hasil=1;
		else
		hasil=a*faktorial(a-1);
		return (hasil);}
