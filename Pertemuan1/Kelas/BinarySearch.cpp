/*
Nama	: Satrio Sadrakh Allesandro
NPM		: 140810160038
Kelas	: B

Program	: Binary Searching
*/

#include <iostream>
#include <math.h>

using namespace std; 
  
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 

        return binarySearch(arr, mid + 1, r, x); 
    }   
    return -1; 
}

int main(void) 
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

    int result = binarySearch(arr, 0, n, x); 
    
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
