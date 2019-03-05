/*
Nama	: Satrio Sadrakh Allesandro
NPM		: 140810160038
Kelas	: B

Program	: Linear Searching
*/

#include <iostream> 
#include <math.h>

using namespace std; 
 
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i <= n; i++){ 
        if (arr[i] == x){ 
            return i;
        }
    }
    return -1; 
} 
  
int main() 
{ 
    int n, x;
    cout<<"Masukkan jumlah bilangan : ";
	cin>>n;
	cout<<"Masukkan angka yang dicari : ";
	cin>>x;
	int arr[n];
	cout<<"Elemen array: "<<endl;
	for(int x=1; x<=n; x++){
	    arr[x]=x;
	    cout<<arr[x]<<" ";
	}
	cout<<endl<<endl;
    
    clock_t t1,t2;
    t1=clock();
    
    cout<<"Jumlah bilangan: "<<n<<endl;
	cout<<"Angka yang dicari: "<<x<<endl;
    int result = search(arr, n, x); 
    if (result == -1)
        cout<<"Elemen Tidak Ditemukan";
    else
        cout<<"Elemen berada di urutan ke: " <<result; 
    t2=clock();
    float diff ((float)t2-(float)t1);
    cout<<endl<<"Waktu = "<<diff<<"ms"<<endl;
    system ("pause");
    return 0;
}