#include "Carte.h"
#include <iostream>

//constructorul
Carte::Carte(const std::string& titlu, const std::string& autor, int an)
    : titlu(titlu), autor(autor), anPublicare(new int(an)) {
        std::cout<<"constructorul a fost apelat!\n";
    }

//destructor
Carte::~Carte() {
    delete anPublicare;
    std::cout<<"destructorul a fost apelat!\n";
}

//copy constructorul
Carte::Carte(const Carte& c)
    :titlu(c.titlu), autor(c.autor), anPublicare(new int(*c.anPublicare)) {
    std::cout<<"copy constructorul a fost apelat!\n";    
}

//move constructorul
Carte::Carte(Carte&& c)
    : titlu(std::move(c.titlu)), autor(std::move(c.autor)), anPublicare(c.anPublicare) {
        c.anPublicare = nullptr;
        std::cout<<"move constructorul a fost apelat!\n";
}

std::string Carte::getTitlu() const {return titlu;}
std::string Carte::getAutor() const {return autor;}
int Carte::getAnPublicare() const {return *anPublicare;}