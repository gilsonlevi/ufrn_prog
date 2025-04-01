#include <iostream>

using namespace std;

int main(){

    double soma = 0;
    double num = 0;
    double contador = 0;
    double media;

    while(true){

    cout << "Digite um número: ";
    cin >> num;



    if(num < 0){
        break;
    }
    contador++;
    soma = soma+ num;

    }

    media = soma/contador;

    cout << "A média dos números é: " << media;


}
