#include <iostream>
using namespace std;

    class Ponto {
        int *x;
        int *y;

        public:

    // Construtor
    Ponto() {
        x = new int[2]; // aloca espaço para 2 inteiros
        y = new int[2];

        x[0] = 0;
        x[1] = 0;
        y[0] = 0;
        y[1] = 0;
    }

    // Construtor com valores
    Ponto(int x0, int x1, int y0, int y1) {
        x = new int[2];
        y = new int[2];

        x[0] = x0;
        x[1] = x1;
        y[0] = y0;
        y[1] = y1;
    }

    // Destrutor (libera memória)
    ~Ponto() {
        delete[] x;
        delete[] y;
    }

    void adicionarPonto(int x1, int y1){



    }


    };


int main(){

    int tamanho = 3;
    int num = 4;
    int * array = new int[tamanho];

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    int * prov = new int[tamanho + 1];

    for(int i = 0;i< tamanho; i++){
        prov[i] = array[i];
    }

    prov[tamanho] = num;

    for(int i = 0;i<= tamanho; i++){
        cout << prov[i] << " ";
    }

    delete[] array;





}
