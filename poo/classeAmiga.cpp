#include <iostream>
using namespace std;

    // Para acessar dados de uma classe � necess�rio uma fun��o membro

    class Numero{
        private:
            int i;

        public:

        void setNumero(int numero){
            i = numero;
        }

        friend int func(Numero classe);

    };

    // No entanto � poss�vel utilizar uma fun��o classica que pode acessar as
    // os atributos da classe atr�ves do termo (friend)
    int func(Numero classe){
        return classe.i;

    }


int main(){
    Numero numero;

    numero.setNumero(10);

    cout << func(numero);


}
