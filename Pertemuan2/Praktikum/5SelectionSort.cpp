/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Input & Output
    int x[5];

    cout<<"Input: "<<endl;
    for(int i = 0; i<5; i++){
        cin >> x[i];
    }
    
    //Deklarasi
    int i, j, imaks, temp;
    
    //Algoritma
    for(i = sizeof(x)/sizeof(*x); i >= 2 ; i--){
        imaks = 1 - 1;
        for(j = 2 - 1; j<=i; j++){
            if(x[i]>x[imaks]){
                imaks = j;
            }
        }
        temp = x[i];
        x[i] = x[imaks];
        x[imaks] = temp;
    }
    
    cout<<endl<<"Hasil: "<<endl;
    for(int i = 1; i<=5; i++){
        cout<<"x"<<i<<" = "<<x[i-1]<<endl;
    }

    return 0;
}


