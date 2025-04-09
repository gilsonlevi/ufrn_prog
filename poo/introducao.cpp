#include <iostream>
using namespace std;

    //Criando uma classe Pessoa
    class Pessoa {
        private:
            string nome;
            int idade;
            string endereco;

        public:
            void setNome(string nomePessoa){
                nome = nomePessoa;
            }

            string getNome(){
                return nome;
            }

            void setIdade(int idadePessoa){
                idade = idadePessoa;
            }

            int getIdade(){
                return idade;
            }

            void setEndereco(string enderecoPessoa){
                endereco = enderecoPessoa;
            }

            string getEndereco(){
                return endereco;
            }



    };

int main()
{
    Pessoa pessoa;

    pessoa.setNome("Levi");
    pessoa.setIdade(20);
    pessoa.setEndereco("Baker Street");

    cout << pessoa.getNome();
    cout << pessoa.getIdade();
    cout << pessoa.getEndereco();



    return 0;
}
