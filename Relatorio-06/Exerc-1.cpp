#include <iostream>
#include <string>
using namespace std;

class Personagem {
public:
    string nome;
    int nivel;
    int dano;
    int vida;

    Personagem(string n, int nv, int d, int v) {
        nome = n;
        nivel = nv;
        dano = d;
        vida = v;
    }

    void atacar(Personagem &alvo) {
        cout << nome << " atacou " << alvo.nome 
             << " causando " << dano << " de dano!" << endl;

        alvo.vida -= dano;
        if (alvo.vida < 0) alvo.vida = 0;
    }

    void mostrarInfo() {
        cout << "Nome: " << nome 
             << "Nivel: " << nivel 
             << "Dano: " << dano 
             << "Vida: " << vida << endl;
    }
};

int main() {
    // Criando personagens
    Personagem p1("Billi", 5, 20, 100);
    Personagem p2("Dinn", 6, 15, 120);

    cout << "Estado inicial" << endl;
    p1.mostrarInfo();
    p2.mostrarInfo();
    cout << endl;

    int escolha;
    cout << "Quem vai atacar?" << endl;
    cout << "1 - " << p1.nome << endl;
    cout << "2 - " << p2.nome << endl;
    cout << "Escolha: ";
    cin >> escolha;

    if (escolha == 1) {
        p1.atacar(p2);
    } else if (escolha == 2) {
        p2.atacar(p1);
    } else {
        cout << "Invalido!" << endl;
    }

    cout << "\nStatus após o combate" << endl;
    p1.mostrarInfo();
    p2.mostrarInfo();

    return 0;
}
