#include <iostream>
using namespace std;

    // Para acessar dados de uma classe é necessário uma função membro

    class Numero{
        private:
            int i;

        public:

        void setNumero(int numero){
            i = numero;
        }

        friend int func(Numero classe);

    };

    // No entanto é possível utilizar uma função classica que pode acessar as
    // os atributos da classe atráves do termo (friend)
    int func(Numero classe){
        return classe.i;

    }


int main(){
    Numero numero;

    numero.setNumero(10);

    cout << func(numero);


}
