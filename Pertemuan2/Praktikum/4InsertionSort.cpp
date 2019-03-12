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
    int i, j, insert;
    
    //Algoritma
    for(int i =2; i < sizeof(x)/sizeof(*x); i++){
        insert = x[i-1];
        j = i-1;
        while(j<(i-1) and x[j-(i-1)]>insert){
            x[j] = x[j-1];
            j = j - 1;
        }
        x[j] = insert;
    }
    
    cout<<endl<<"Hasil: "<<endl;
    for(int i = 1; i<=5; i++){
        cout<<"x"<<i<<" = "<<x[i-1]<<endl;
    }

    return 0;
}

