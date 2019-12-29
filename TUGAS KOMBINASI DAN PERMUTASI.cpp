#include <iostream>
#include <stdlib.h>
using namespace std;
int faktorial(int a);
int kombinasi(int a, int b);
int permutasi (int a, int b);
int faktorial(int a)
	{
		int hasil;
		if(a<=1)
			hasil=1;
		else
			hasil = a*faktorial(a-1);
		return (hasil);		
	}
int permutasi (int n, int r)
	{
		if(n<r)
			return 0;
		else
			return (faktorial (n) / faktorial(n-r) );
	}
int kombinasi (int n, int r)
	{
		if(n<r)
			return 0;
		else
			return(faktorial (n) / (faktorial(r) * faktorial (n-r)));
	}
void eksekusi()
	{
	  
 	int n,r;
 	char status,tmp;
 	do
 	{
 		system ("CLS");
 		cout<<"\t=================================================================";
 		cout<<"\n\t\t    Program Menghitung Permutasi Atau Kombinasi";
 		cout<<"\n\t\t\t     Menggunakan Konsep Rekursif";
 		cout<<"\n\t\tOleh : Qurrotul Ainun Ni'matus Sholihah (193100056)\t";
 		cout<<"\n\t=================================================================";
		cout<<"\n\tMasukan Nilai N = ";cin>>n;
		cout<<"\tMasukan Nilai K = ";cin>>r;
		cout<<"\tPilih P (Permutasi) atau C (Kombinasi) : ";cin>>tmp;
		if(tmp == 'c' || tmp == 'C')
			{
				cout<<"\t"<<n<<"C"<<r<<" = "<<kombinasi(n,r);
				cout<<"\n\tIngin Input lagi [Y/T] : ";cin>>status;
			}
 		else if(tmp == 'p' || tmp == 'P')
			{
 				cout<<"\t"<<n<<"P"<<r<<" = "<<permutasi(n,r);
 				cout<<"\n\tIngin Input lagi [Y/T] : ";cin>>status;
			}
 		else 
 			{	
	 			cout<<"\tInputan Yang Anda Masukkan Salah."<<endl;
	 			cout<<"\n\tIngin Input lagi [Y/T] : ";cin>>status;
			}
	 }
	 while (status == 'Y' || status == 'y');
 	cout<<"\tSemoga Dapat Membantu Menggunakan Konsep Rekursif."<<endl;
	}
int main ()
{
	eksekusi();
	return 0;
}
