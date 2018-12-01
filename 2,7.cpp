#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int x;
	int y;
	    
	cout << "Podaj pierwsza liczbê: "<< endl;	 
	cin >> x;
	
	cout << "Podaj druga wieksza liczbê: "<< endl;	 
	cin >> y;
	
	x = x+1;
	
	for(x;x<y;x++){
		cout << x << endl;
	}
	 

	
}
