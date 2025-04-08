#include <iostream>
using namespace std;
    // Podemos criar funções fora do escopo das funções mas que
    // serve as funções

    class Cachorro {
    private:
        string nomeCachorro;
        int idadeCachorro;

    public:
        void latir();
        void andar();

        string getNome(){
            return nomeCachorro;
        }

        void setNome(string nome){
            nomeCachorro = nome;
        }

    };

    void Cachorro::latir(){
        cout << "AUAU!!";

    }

    void Cachorro::andar(){
    cout << "Cachorro andando!!";

    }

int main(){

    Cachorro dog;

    dog.setNome("Paulo");

}
