#include <iostream>
using namespace std;
    // Podemos criar fun��es fora do escopo das fun��es mas que
    // serve as fun��es

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
