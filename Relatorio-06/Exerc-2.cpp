#include <iostream>
#include <string>
using namespace std;

// Classe base
class Pessoa {
private:
    string nome;
    int idade;

public:
    // Construtor
    Pessoa(string n = "", int i = 0) : nome(n), idade(i) {}

    // Getters e Setters
    void setNome(string n) {
         nome = n; }
    string getNome() const {
         return nome; }

    void setIdade(int i) {
         idade = i; }
    int getIdade() const {
         return idade; }
};

// Protagonista herdando de Pessoa
class Protagonista : public Pessoa {
private:
    int nivel;

public:
    Protagonista(string n = "", int i = 0, int nv = 1) : Pessoa(n, i), nivel(nv) {}

    void setNivel(int nv) { nivel = nv; }
    int getNivel() const { return nivel; }
};

// Classe Personagem herdando de Pessoa
class Personagem : public Pessoa {
private:
    int rank; // 0 a 10

public:
    Personagem(string n = "", int i = 0, int r = 0) : Pessoa(n, i) {
        setRank(r); // validação
    }

    void setRank(int r) {
        if (r >= 0 && r <= 10)
            rank = r;
        else
            rank = 0; // padrão
    }

    int getRank() const { return rank; }
};

// Função principal
int main() {
    // Criando Protagonista
    Protagonista p1;
    p1.setNome("Ramirez");
    p1.setIdade(23);
    p1.setNivel(7);

    // Criando Personagem
    Personagem npc;
    npc.setNome("Marcelo");
    npc.setIdade(36);
    npc.setRank(9);

    // Mostrando os dados (via métodos)
    cout << "Protagonista: " << p1.getNome() 
         << ", Idade: " << p1.getIdade() 
         << ", Nivel: " << p1.getNivel() << endl;

    cout << "Personagem: " << npc.getNome() 
         << ", Idade: " << npc.getIdade() 
         << ", Rank: " << npc.getRank() << endl;

    return 0;
}
