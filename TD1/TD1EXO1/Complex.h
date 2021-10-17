#pragma once

class Complex
{
	
private:
	double Re; //le constructeur va modifier le Re alors il ne faut pas le declarer const 
	double Img; 

	int* tab; 
	static int compteur; //on cree un compteur qui calcul le nombre des objets crees  


public:
	Complex(double , double);
	void Affichage() const; //methode const pour arreter la modification de l'objet reel a l'interieur de la methode 
	double module() const; 
	Complex conjugue() const;

	//constructeur de recopie 
	Complex(const Complex &z); 
	//si on a Complex z automatiquement il va s'intitialise par 00 comme dans le con 
	//predefinie alors on aurra 3 objets crrees z: cree par le constr z1: la source z2: destination 
	//on peut faire passage par pointeur mais on alloue l'espace pour le pointeur 
	//la methode performante c'est l 'utilistaion de passage par reference 
	//alors on aurra jamais besoin d'allouer d'espace 


	//ls
	Complex operator =(const Complex& z);


	Complex operator + (Complex const& obj) {
		Complex res = Complex(0, 0); 
		res.Re = this->Re + obj.Re; 
		res.Img = this->Img + obj.Img; 

		return res; 
	}

	Complex operator - (Complex const& obj) {
		Complex res = Complex(0, 0); 
		res.Re = (this->Re * obj.Re - this->Img * obj.Img);
		res.Img = (this->Re * obj.Img + this->Img * obj.Re);

		return res; 

	}
	~Complex();

};
