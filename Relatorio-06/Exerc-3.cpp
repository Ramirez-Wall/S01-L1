#include <iostream>
#include <string>
using namespace std;

// Classe base
class Pessoa {
protected:
    string nome;

public:
    Pessoa(string n) : nome(n) {}

    // Método virtual para polimorfismo
    virtual void apresentar() { 
        cout << "Olá, meu nome é " << nome << " e eu sou uma pessoa." << endl;
    }

    // Virtual destructor
    virtual ~Pessoa() {}
};

// Classe Professor herdando de Pessoa
class Professor : public Pessoa {
private:
    string disciplina;

public:
    Professor(string n, string d) : Pessoa(n), disciplina(d) {}

    // Sobrescrevendo
    void apresentar() override { 
        cout << "Olá, meu nome é " << nome << " e eu sou um professor de " << disciplina << "." << endl;
    }
};

// Classe Aluno herdando de Pessoa
class Aluno : public Pessoa {
private:
    string curso;
    string matricula;

public:
    Aluno(string n, string c, string m) : Pessoa(n), curso(c), matricula(m) {}

    void apresentar() override {
        cout << "Olá, meu nome é " << nome << " e eu sou um aluno de " << curso 
             << ". Minha matrícula é " << matricula << "." << endl;
    }
};

// Função principal
int main() {
    Professor prof("Soned", "Algebra Linear");
    Aluno alu("Ramirez", "Engenharia de Software", "0800");

    Pessoa* p1 = &prof;
    Pessoa* p2 = &alu;

    p1->apresentar();
    p2->apresentar();

    return 0;
}
