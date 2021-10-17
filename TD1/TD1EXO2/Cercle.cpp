#include "Cercle.h"
#include <math.h>
#include <stdio.h>

Cercle::Cercle(Point Centre, double Rayon)
{
    this->Rayon = Rayon; 
    this->Centre.x = Centre.x; 
    this->Centre.y = Centre.y; 
    
}

Cercle::Cercle()
{
    this->Rayon = 0.0; 
    this->Centre.x = 0.0; 
    this->Centre.y = 0.0; 
}

Cercle Cercle::changeRayon(const double &newRayon){
    this->Rayon = newRayon; 
    return *this; 
}

void Cercle::AffichCercle(){
    printf("\n");
    printf("Centre: {%f, %f}, Rayon: %f", this->Centre.x, Centre.y, this->Rayon); 
    printf("\n");
}

bool Cercle::operator < (Point const &pt) {
    return(
        (this->Centre.x - this->Rayon) < pt.x && pt.x < (this->Centre.x + this->Rayon)
        &&
        (this->Centre.y - this->Rayon) < pt.y && pt.y < (this->Centre.y + this->Rayon)
    );
}

bool Cercle::operator==(Cercle const& c) {
    return ((this->Rayon == c.Rayon)&&(this->Centre.x == c.Centre.x && this->Centre.y == c.Centre.y)); 
}


double Cercle::perimetre() const {
    return 2.0 * M_PI * this->Rayon; //M_PI constante pi from math.h  
}

double Cercle::surface() const {
    return M_PI * pow(this->Rayon, 2); 
}