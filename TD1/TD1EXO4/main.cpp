#include <iostream>
#include "Pile.h"

using namespace std; 

int main() {


	Pile stack; 
	stack.Empiler(5);
	stack.Empiler(1);
	stack.Empiler(98);
	stack.Empiler(23);

	stack.AfficherPile(); 

	stack.Empiler(25); 
	stack.AfficherPile(); 
	cout << "\n"; 
	return 0; 
}