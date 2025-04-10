#include <iostream>
using namespace std;

class Pessoa {
private:
    string nomePessoa;
    int idadePessoa;

public:

    Pessoa(string nome, int idade);

    string getNome(){

        return nomePessoa;
    }

    void setNome(string nome){
        nomePessoa = nome;
    }


};

// Constrtuor membro de classe Pessoa
Pessoa::Pessoa(string nome, int idade): nomePessoa(nome), idadePessoa(idade)
{
}

int main(){

    // Usando o construtor
    Pessoa p1("Levi", 20);
    cout << p1.getNome();


}
