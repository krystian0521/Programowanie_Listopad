#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	float pierwsza;
	float druga;
	char op;
	int i = 1;
	    

	while(i == 1) {
		
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
		
		cout << "\n";
		cout << "chcesz powtorzyc? (1, albo 0)"<< endl;	 
		cin >> i;
		
	}

	
}
