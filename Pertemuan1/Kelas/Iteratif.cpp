/*
Nama	: Satrio Sadrakh Allesandro
NPM		: 140810160038
Kelas	: B

Program	: 2 pangkat n Algoritma Iteratif
*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int iteratif (int n){
	for (int x=1; x<=n; x++){
		cout<<pow(2,x)<<" ";
	}
}

int main(){
	int n;
	cout<<"Masukkan n : ";
	cin>>n;
	cout<<endl;
	
	clock_t t1,t2;
    t1=clock();
    
	iteratif (n);
	
    t2=clock();
    float diff ((float)t2-(float)t1);
    cout<<endl<<endl<<"n : "<<n;
    cout<<endl<<"Waktu = "<<diff<<"ms"<<endl;
    system ("pause");
    return 0;
}
