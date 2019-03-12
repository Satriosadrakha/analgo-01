/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
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
    int i;
    bool found;
    
    //Algoritma
    i = 1;
    found = false;
    
    while((i-1) <= (sizeof(x)/sizeof(*x)) and not found){
        if(x[i-1]==y){
            found = true;
        } else{
            i = i + 1;
        }
    }
    
    if(found){
        idx = i;
    } else{
        idx = 0;
    }
    
    cout<<"idx = "<<idx;
    return 0;
}


