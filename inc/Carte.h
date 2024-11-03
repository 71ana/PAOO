#include <string>

class Carte{
    private:
        std::string titlu;
        std::string autor;
        int* anPublicare;

    public:
    //constructor
    Carte(const std::string &titlu, const std::string &autor, int an);

    //destructor
    ~Carte();

    //copy contructor
    Carte(const Carte &c);

    //move constructor
    Carte(Carte &&c);

    //metode pt a accesa atributele
    std::string getTitlu() const;
    std::string getAutor() const;
    int getAnPublicare() const;

};