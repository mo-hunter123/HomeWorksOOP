#include "Cercle.h"
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    Cercle C1({9,2}, 5); 
    C1.AffichCercle(); 

    Point p = {5, 2}; 

    Cercle C2({9,2}, 5); 
    cout << "\n" << (C1==C2) << "\n"; 
    cout << "\n" << (C1 < p) << "\n"; //si p est appartient a C1
    cout << "\n" << C1.perimetre() << "\n"; 
    cout << "\n" << C2.surface() << "\n";


    
    return 0;
}
