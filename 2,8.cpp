#include <iostream>
#include <stdio.h>

// Jako, ¿e mamy wypisaæ wiêksze ni¿ 0, wiêc na wstêpie odrzucam liczby ujemne 

using namespace std;

int main() {

	int x;
	int y;
	    
	cout << "Podaj liczbê dodatnia : "<< endl;	 
	cin >> x;
	
	x = x-1;
	
	for(x;x>0;x--){
		cout << x << endl;
	}
	 

	
}
