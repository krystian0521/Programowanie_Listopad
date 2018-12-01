#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int x;
	    
	cout << "Podaj liczbê: "<< endl;
	 
	cin >> x;
	 
	if(x>=0) {
		
		for(int i=x;i>=0;i--) {
			cout << i << endl;
		}
		
		
	}  else {
		cout << "Lizba ujemna";
	}
	
	
}
