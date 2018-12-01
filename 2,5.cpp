#include <iostream>
#include <stdio.h>
 
// domyœlam siê, ¿e chodzi³o o zadanie 2.4 a nie 1.4 tak jak by³o w treœci 
 
using namespace std;

int main() {

	int x;
	    
	cout << "Podaj liczbê: "<< endl;
	 
	cin >> x;
	 
	if(x>=0) {
		
			for(int i=x;i>=0;i--) {
				int k = i;
				
				if(!(k/2 == 0)) {
					continue;	
				} else if (i>40){
					break;
				}
				
				cout << i << endl;
				
			}
			
	}  else {
		cout << "Lizba ujemna";
	}
	
	
}
