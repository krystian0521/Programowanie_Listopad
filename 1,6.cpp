#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	float pierwsza;
	float druga;
	char op;
	    
	cout << "Podaj pierwsza liczbe:"<< endl;	 
	cin >> pierwsza; 
	
	cout << "Podaj druga liczbe:"<< endl;	 
	cin >> druga;
	
	cout << "Podaj operator (+,-,/,*):"<< endl;	 
	cin >> op;

	switch(op) {
		case '+': cout<< pierwsza+druga; break;
		case '-': cout<< pierwsza-druga; break;
		case '/': cout<< pierwsza/druga; break;
		case '*': cout<< pierwsza*druga; break;
		default: cout<< "podales bledny operator";
	}

	
}
