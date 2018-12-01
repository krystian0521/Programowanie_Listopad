#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int i;
	int x;
	    
	cout << "Podaj liczbê: "<< endl;
	 
	cin >> x;
	 
	    
	for(i=x;i<=100000;){
		cout << i << endl;
		i = i*x;	
	}
	
}
