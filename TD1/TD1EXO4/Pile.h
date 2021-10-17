#ifndef PILE_H
#define PILE_H


#define MAX 100

class Pile
{

private:
	int PTab[MAX]; 
	int top; 

public:
	Pile();

	
	void Empiler(int val); 
	int Depiler();
	bool PileVide(); 
	void AfficherPile(); 
	int Sommet(); 
};


#endif