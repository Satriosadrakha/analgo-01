/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Input
    int x[5];
    int y;
    cout<<"Input: "<<endl;
    for(int i = 0; i<5; i++){
        cin >> x[i];
    }
    
    //Output
    int max;

    //Deklarasi
    int i;
    
    //Algoritma
    int maks = x[0];
    i = 2;
    
    while ((i-1) < sizeof(x)/sizeof(*x)){
        if (x[i-1]>maks){
    		maks = x[i-1];
        }
    	i=i+1;
    }
    
    cout<<"Maks = "<<maks<<endl;

    return 0;
}
