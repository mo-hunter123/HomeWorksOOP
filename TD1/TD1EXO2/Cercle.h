#pragma once
//comme un point c'est un cercle de rayon = 0
//alors on peut heriter pour avec le cas de rayon = 0

// pourquoi dans l'heritage dans java par exemple on accede 
//aux attributs privee meme si on est on dehors de la classe 
//mais dans cpp non par exemple 

// We can override a methode inherited from a super class in the subclass 
// so the methode even if it has the same name or parameters 
// the implementation in the sub class can be different 


//j'ai choisi d'implementer le point sous forme de Point car on ne peut pas 
//acceder aux attributs prive de la class Cercle 
typedef struct Point
{
    double x; 
    double y; 
};


class Cercle
{
private:
    Point Centre; 
    double Rayon; 


public:
    Cercle(Point Centre, double Rayon);
    Cercle();
    void AffichCercle(); 
    Cercle changeRayon(const double &newRayon); 
    double surface() const; 
    double perimetre() const; 
    // bool isSame(const Cercle &c); 
    bool operator == (Cercle const& c); 
    bool operator < (Point const &pt); 
};
