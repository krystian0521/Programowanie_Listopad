#include <iostream>
#include <stdio.h>

using namespace std;

int Multiply(int x, int y) {

	return x*y;
}


int main() {

	int x;
	int y;

	cout << "Podaj liczbe x: " <<endl;
	cin >> x;
	
	cout << "Podaj liczbe y: " <<endl;
	cin >> y;
	
	return Multiply(x,y);
	
		
}
