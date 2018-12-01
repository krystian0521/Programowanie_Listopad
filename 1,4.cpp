#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int i;
	    
	cout << "Podaj liczbe:"<< endl;
	 
	cin >> i; 
	    
	if( i<0 ){
		cout << "Liczba mniejsza ni¿ 0";
	}else if( i==0 ) {
		cout << "Liczba równa 0";	
	}else if( i>0 ) {
		cout << "Liczba wieksza niz 0";	
	}
	
	
}
