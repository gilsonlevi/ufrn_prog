#include <iostream>

using namespace std;

int main(){

    string opcao;
    double num1;
    double num2;

    while(true){
        cout << "Digite uma operacao(+, -, /, *): ";
        cin >> opcao;

        cout << "\n";

        if(opcao != "+" && opcao != "-" && opcao != "/" && opcao != "*" ){
            break;
        }

        cout << "Digite o primeiro numero: ";
        cin >> num1;

        cout << "Digite o segundo numero: ";
        cin >> num2;

        if(opcao == "+"){
            cout << "Valor da operacao: "<< num1 << " + " << num1 << " = "<< num1 + num2 << "\n";
        }else if (opcao == "-"){
            cout << "Valor da operacao: "<< num1 << " - " << num1 << " = "<< num1 - num2 << "\n";
        }else if (opcao == "/"){
            cout << "Valor da operacao: "<< num1 << " / " << num1 << " = "<< num1 / num2 << "\n";
        }else {
            cout << "Valor da operacao: "<< num1 << " * " << num1 << " = "<< num1 * num2 << "\n";
        }
    }

}
