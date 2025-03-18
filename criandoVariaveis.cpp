#include <iostream>
using namespace std;

int main()
{
    // Criando variaveis
    int x = 20;
    int a = 40;
    
    //Somando variaveis
    int soma = x + a;
    
    cout << soma << "\n";
    
    a = x = 30;
    
    cout << &x << "\n";
    
    int lixo;
    
    cout << lixo;
    
    
    return 0;
}