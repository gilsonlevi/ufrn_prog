#include <iostream>
using namespace std;

int main() {

    int num = 10;

    cout << "Valor da variavel: " << num << "\n";

    cout << "Endereço da variavel: " << &num << "\n";

    int * ptr = nullptr;

    ptr = &num;

    cout << "Endereco apontado: " << ptr << "\n";

    cout << "Valor do endereco apontado: " << *ptr;

    return 0;
}
