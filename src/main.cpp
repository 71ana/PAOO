#include "Carte.h"
#include <iostream>

int main() {

    //initializare folosind constructorul
    Carte carte1("Ion", "Liviu Rebreanu", 1920);
    std::cout<<"Cartea 1: "<< carte1.getTitlu() << " de " << carte1.getAutor() << " publicat in " << carte1.getAnPublicare() << std::endl;

    //utilizare copy constructor
    Carte carte2 = carte1;
    std::cout<<"Cartea 2 (copiata): "<< carte2.getTitlu() << " de " << carte2.getAutor() << " publicat in " << carte2.getAnPublicare() << std::endl;

    //utilizare move constructor
    Carte carte3 = std::move(carte1);
    std::cout<<"Cartea 3 (mutata): "<< carte3.getTitlu() << " de " << carte3.getAutor() << " publicat in " << carte3.getAnPublicare() << std::endl;

    return 0;
}