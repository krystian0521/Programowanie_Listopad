#include <iostream>
#include <stdio.h>

// Jako, �e mamy wypisa� wi�ksze ni� 0, wi�c na wst�pie odrzucam liczby ujemne 

using namespace std;

int main() {

	int x;
	int y;
	    
	cout << "Podaj liczb� dodatnia : "<< endl;	 
	cin >> x;
	
	x = x-1;
	
	for(x;x>0;x--){
		cout << x << endl;
	}
	 

	
}
