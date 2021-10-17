#include "Pile.h"
#include <iostream>

using namespace std; 

Pile::Pile()
{
	for (int i = 0; i < MAX; i++)
		this->PTab[i] = 0; 
	this->top = -1; 
}

void Pile::Empiler(int val) {
	if (this->top == (MAX - 1)) {
		cout << "stack overflow \n"; 
	}
	else {
		this->top += 1; 
		this->PTab[this->top] = val; 
	}
}
int Pile::Depiler() {
	if (this->top == -1) {
		cout << "\nstack underflow \n";
		return -2; 
	}
	else {
		int val = this->PTab[this->top]; 
		this->top -= 1; 
		return val; 
	}
}
bool Pile::PileVide() {
	return (this->top != -1); 
}
int Pile::Sommet() {
	return this->PTab[this->top]; 
}
void Pile::AfficherPile() {
	Pile PHelper; 
	
	cout << "\nStack's elements\n";
	int aux; 
	while (this->top != -1)
	{
		aux = this->Depiler();
		cout << aux << ","; 
		PHelper.Empiler(aux); 
		 
	}
	while (PHelper.top != -1)
	{
		this->Empiler(PHelper.Depiler()); 

	}
}

