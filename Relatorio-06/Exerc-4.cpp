#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Classe base
class SerVivo {
protected:
    string nome;

public:
    SerVivo(string n) : nome(n) {}

    virtual void apresentar() {
        cout << "Olá, eu sou um ser vivo chamado " << nome << "." << endl;
    }

    virtual ~SerVivo() {}
};

// Classes filhas
class Humano : public SerVivo {
public:
    Humano(string n) : SerVivo(n) {}

    void apresentar() override {
        cout << "Eu sou um humano " << nome << ", Eae beleza ?" << endl;
    }
};

class Elfo : public SerVivo {
public:
    Elfo(string n) : SerVivo(n) {}

    void apresentar() override {
        cout << "Saudações, eu sou um elfo " << nome << ", Viva la Nature" << endl;
    }
};

class Fada : public SerVivo {
public:
    Fada(string n) : SerVivo(n) {}

    void apresentar() override {
        cout << "Eu sou uma fada " << nome << ", Eu sei voar, diferente de vcs" << endl;
    }
};

int main() {
    // Lista de ponteiros para SerVivo
    vector<SerVivo*> seres;

    // Criando instâncias e adicionando na lista
    seres.push_back(new Humano("Ramirez"));
    seres.push_back(new Elfo("Caiox"));
    seres.push_back(new Fada("Vini JR"));

    // Percorrendo a lista e chamando apresentar()
    for (size_t i = 0; i < seres.size(); i++) {
        seres[i]->apresentar();
    }

    // Liberando memória
    for (size_t i = 0; i < seres.size(); i++) {
        delete seres[i];
    }

    return 0;
}
