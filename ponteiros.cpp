#include <iostream>

using namespace std;

int main(){

    int num = 5;
    // Mostrando número na tela
    cout << "Valor da variavel: "<< num << "\n";

    // Mostrando endereço da variavel
    cout << "Mostrando o endereço da variavel: "<< &num << "\n";

    int* ptr = &num;

    // Mostrando endereço da variavel do ponteiro
    cout << "Mostrando o endereço do ponteiro: " << ptr << "\n";

    // Mostrando o endereço do ponteiro

    cout << "Mostrando o endereço do ponteiro: "<< &ptr << "\n";

    // Mostrando o valor do endereço

    cout << "Mostrando o valor do endereço: " << *ptr << "\n";

    *ptr = 8;

    cout << "Valor da variavel depois de muda-la: "<< num << "\n";

    ptr += 1;

    // Mostrando endereço da variavel do ponteiro
    cout << "Mostrando o endereço do ponteiro após somar mais 1: " << ptr << "\n";








}
