#include <iostream>
#include <stdio.h>

using namespace std;

void WriteBiggerNumber(int x, int y) {
	
	if(x>y) {
		cout << x;
	} else if(x<y) {
		cout << y;
	} else if (x==y) {
		cout << "Liczby rowne";
	}
	
}


int main() {

	int x;
	int y;

	cout << "Podaj liczbe x: " <<endl;
	cin >> x;
	
	cout << "Podaj liczbe y: " <<endl;
	cin >> y;
	
	WriteBiggerNumber(x,y);
	
		
}
