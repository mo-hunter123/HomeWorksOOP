#include "Complex.h"
#include <stdio.h>
#include <math.h>

//initialisation de la variable static 
int Complex::compteur = 0; 

Complex::Complex(double Re, double Img)
{
	this->Img = Img; 
	this->Re = Re; 
	this->tab = new int[3]; 
	Complex::compteur++;

	for (int i = 0; i < 3; i++)
	{
		this->tab[i] = 0; 
	}
}


void Complex::Affichage() const {
	printf("\n");
	printf("Nombre: %f + (%f)i", this->Re, this->Img); 
	printf("\n");
}

double Complex::module() const
{
	return sqrt(pow(this->Re, 2) + pow(this->Img, 2));
}

Complex Complex::conjugue() const 
{
	Complex con(this->Re, -this->Img);
	return con; 
}

Complex::Complex(const Complex& z)
{
	this->Re = z.Re; 
	this->Img = z.Img; 

	this->tab = new int[3]; 
	for (int i = 0; i < 3; i++)
	{	
		this->tab[i] = z.tab[i]; 
	}


	Complex::compteur++;
	//on ne peut pas modifier les valeurs de z
	//comme il est declare const 
}

//si on fait void instead of Complex on sera interdit de dire 
// z = z1 mais il faut appeler la methode operator 
//z = operator=(z1)
//d 'ou on retourne un Complex pour juste creer z = z1; 
Complex Complex::operator=(const Complex& z)
{
	//to avoid auto affectaion on fait 
	//z1 = z1 c'est pas la peine de refaire le traitement 
	//si on a l'objet lui meme 
	if (this != &z) { //test de l'auto affectation 
		this->Re = z.Re;
		this->Img = z.Img;

		this->tab = new int[3];

		for (int i = 0; i < 3; i++)
			this->tab[i] = z.tab[i];
	}

	//si on retourne directement le constructeur de recopie alors on aurra 
	//un objet de plus sera cree d'ou l'incrementation de compteur 
	return *this;
}

Complex::~Complex() {
	delete this->tab; 
}