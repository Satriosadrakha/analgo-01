/*
Nama	: Satrio Sadrakh Allesandro
NPM		: 140810160038
Kelas	: B

Program	: Stable Marriage Problem (Algoritma G-S / Gale–Shapley)
*/

#include <iostream> 
#include <string.h> 
#include <stdio.h> 
using namespace std; 

// Jumlah pria dan wanita
#define N 5 

// Returns true jika 'w' lebih suka 'm1' dibanding 'm' 
bool wPrefersM1OverM(int prefer[2*N][N], int w, int m, int m1){ 
	for (int i = 0; i < N; i++){ 
		if (prefer[w][i] == m1) 
			return true;
		if (prefer[w][i] == m) 
    		return false;
	}
}

string nama(int x){
    switch(x) {
        case 0 : return "Victor";
        case 1 : return "Wyat";
        case 2 : return "Xavier";
        case 3 : return "Yancey";
        case 4 : return "Zeus";
        case 5 : return "Amy";
        case 6 : return "Bertha";
        case 7 : return "Clare";
        case 8 : return "Diane";
        case 9 : return "Erika";
    }
}

void stableMarriage(int prefer[2*N][N]){ 
	int wPartner[N]; 
	bool mFree[N]; 

	memset(wPartner, -1, sizeof(wPartner)); 
	memset(mFree, false, sizeof(mFree)); 
	int freeCount = N; 

	while (freeCount > 0){ 
		int m; 
		for (m = 0; m < N; m++) 
			if (mFree[m] == false) 
				break; 

		for (int i = 0; i < N && mFree[m] == false; i++){ 
			int w = prefer[m][i]; 

			if (wPartner[w-N] == -1){ 
				wPartner[w-N] = m; 
				mFree[m] = true; 
				freeCount--; 
			} 

			else { 
				int m1 = wPartner[w-N]; 

				if (wPrefersM1OverM(prefer, w, m, m1) == false){ 
					wPartner[w-N] = m; 
					mFree[m] = true; 
					mFree[m1] = false; 
				} 
			} 
		} 
	}
	cout << "Pasangan:" << endl << endl;
	cout << " Wanita\tPria" << endl; 
	for (int i = 0; i < N; i++) 
	    cout << " " << nama(i+N) << "\t" << nama(wPartner[i]) << endl; 
} 

int main(){ 
	int prefer[2*N][N] = {
	    {6,5,8,9,7}, 
		{8,6,5,7,9}, 
		{6,9,7,8,5}, 
		{5,8,7,6,9}, 
		{6,8,5,9,7},
		{4,0,1,3,2}, 
		{2,1,3,0,4}, 
		{1,2,3,4,0}, 
		{0,4,3,2,1}, 
		{3,1,4,2,0}	
	}; 
	stableMarriage(prefer); 
	return 0; 
} 

