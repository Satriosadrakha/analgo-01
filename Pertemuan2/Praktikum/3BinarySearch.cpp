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
    //Input
    int x[5];
    int y;
    
    cout<<"Input: "<<endl;
    for(int i = 0; i<5; i++){
        cin >> x[i];
    }
    
    cout<<"Y: ";
    cin>>y;

    //Output
    int idx;

    //Deklarasi
    int i, j, mid;
    bool found;
    
    //Algoritma
    i = 1;
    j = sizeof(x)/sizeof(*x);
    found = false;
    
    while (not found && (i-1)<j){
        mid = ((i-1)+j)/2;
        if (x[mid] = y){
            found = true;
        } else{
            if(x[mid]<y){
                i = mid + 1;
            } else{
                j = mid - 1;
            }
        }
    }
    
    if(found){
        idx = mid;
    } else{
        idx = 0;
    }
    
    cout<<"idx = "<<idx;
    
    
    
    return 0;
}
