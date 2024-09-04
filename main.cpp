#include <iostream>
#include <time.h>
#include "FilaCircular.h"


using namespace std;

int main() {
    filaCircular<int,100> fila;
    cria(fila);
    int cont = 0;
    for(int i = 0; i < 12; i ++) {
        insereFila(fila,1);
        cont++;
    }

    srand(time(NULL));

    for(int i = 0; i < 45 * 60; i++) {
        if(i % 60 == 0) {
            int x = rand() % 3 + 2;
            for(int j = 0; j < x; j++) {
                insereFila(fila,1);
                cont ++;
            }
            if(i % 30 == 0) {
                recuperaElem(fila);
            }
        }
    }
    cout << "Quantas pessoas vieram ver o filme: " << cont << endl;
    cout << "Quantas pessoas ainda estavam na fila: " <<  retornaCard(fila) << endl;
    cout << "Quantas pessoas realmente viram o filme: " << retornaCard(fila) - cont << endl;
}
