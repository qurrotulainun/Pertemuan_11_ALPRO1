#include <iostream>
//Latihan 3 Iterasi 1 = Faktorial
using namespace std;
long factorial(long a);
int main()
{
	int n;
	long hasil;
	cout<<"Mengihitung N Faktorial (N!) \n";
	cout<<"Masukkan N : ";cin>>n;
	hasil = factorial(n);
	cout<<n<<" = "<<hasil<<endl;
	return 0;
}
long factorial (long a)
{
	long i, hasil1 = 1;
	for(i=1; i<=a; i++)
	hasil1=hasil1*i;
	return (hasil1);
}
