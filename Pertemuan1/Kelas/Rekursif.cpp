/*
Nama	: Satrio Sadrakh Allesandro
NPM		: 140810160038
Kelas	: B

Program	: 2 pangkat n Algoritma Rekursif
*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>

using namespace std;

int rekursif (int n){
	if (n>=1){
		rekursif (n-1);
		cout<<pow(2,n)<<" ";
	}
}

int main(){
	int n;
	cout<<"Masukkan n : ";
	cin>>n;
	cout<<endl;
	
	clock_t t1,t2;
    t1=clock();
    
	rekursif (n);
	
    t2=clock();
    float diff ((float)t2-(float)t1);
    cout<<endl<<endl<<"n : "<<n;
    cout<<endl<<"Waktu = "<<diff<<"ms"<<endl;
    system ("pause");
    return 0;
}