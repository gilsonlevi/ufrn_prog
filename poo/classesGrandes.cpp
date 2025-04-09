#include <iostream>
using namespace std;

    class Pessoa{
    public:
        string nome;
        string endereco;
        int idade;


    };

    // Passando objeto por valor (ou cópia)
    void dadosPorValor(Pessoa pessoa){
        cout << "O nome da pessoa eh: "<< pessoa.nome << " a idade eh: "<< pessoa.idade << " e o endereco eh: "<< pessoa.endereco;
    }

    // Passando objeto por referencia
    void dadosPorReferencia(Pessoa pessoa){
         cout << "O nome da pessoa eh: "<< pessoa.nome << " a idade eh: "<< pessoa.idade << " e o endereco eh: "<< pessoa.endereco;
    }


int main(){

    Pessoa pessoa1;
    pessoa1.nome = "Julia Tavares";
    pessoa1.idade = 20;
    pessoa1.endereco = "Rua";

    dadosPorValor(pessoa1);

    dadosPorReferencia(pessoa1);

}
