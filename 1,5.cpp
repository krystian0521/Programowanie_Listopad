#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	float pierwsza;
	float druga;
	float trzecia;
	    
	cout << "Podaj pierwsza liczbe:"<< endl;	 
	cin >> pierwsza; 
	
	cout << "Podaj druga liczbe:"<< endl;	 
	cin >> druga;
	
	cout << "Podaj trzecia liczbe:"<< endl;	 
	cin >> trzecia;
	
	
	if(pierwsza>druga && pierwsza>trzecia && druga>trzecia) {
		cout<< pierwsza <<endl;
	} else if (pierwsza>druga && pierwsza>trzecia && druga<trzecia) {
		cout<< pierwsza <<endl;
	} else if (druga>pierwsza && druga>trzecia && trzecia<pierwsza) {
		cout<< druga <<endl;
	} else if (druga>pierwsza && druga>trzecia && trzecia>pierwsza) {
		cout<< druga <<endl;
	} else if (trzecia>pierwsza && trzecia>druga && pierwsza>druga) {
		cout<< trzecia <<endl;
	} else if (trzecia>pierwsza && trzecia>druga && pierwsza<druga) {
		cout<< trzecia <<endl;
	}
	
	
	
	
}
