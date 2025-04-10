#include <iostream>
using namespace std;


class Triangulo{
private:
    double base;
    double altura;
public:
     Triangulo() : base(0), altura(0) {}
    Triangulo(double base, double altura);


};

class ListaTriangulos{
private:
    Triangulo * array;
public:
    ListaTriangulos();



};

Triangulo::Triangulo(double base, double altura): base(base), altura(altura)
{


}

ListaTriangulos::ListaTriangulos(int qtd){
    array = new Triangulo[qtd];

}



int main(){


}
