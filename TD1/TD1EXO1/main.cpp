#include "Complex.h"
#include <iostream>

using namespace std; 

int main() {


	int a = 5; //valeur 
	int* p = &a;  //pointeur
	int& R = a;  //reference

	cout << &a << endl;
	cout << &p << endl;
	cout << &R << endl;
	//on observe que 
	printf("\n--------------------\n");

	Complex z1(4, 8);
	Complex moz1(0, 0);

	Complex* z3;
	printf("\nsize de z3: %x\n", &z3); 
	z3 = new Complex(6, 9);

	Complex z4(z1); // constructeur de recopie par defaut qui est predifinie. on est entrein de creer une copie de z1 

	z1.Affichage(); 
	std::cout << "Module: ";

	z3->Affichage(); 
	z4.Affichage(); 

	delete z3; 
	
	return 0; 
}