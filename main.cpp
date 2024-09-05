#include <iostream>
#include <time.h>
#include "FilaCircular.h"


using namespace std;

int main() {
    filaCircular<int,200> fila;
    cria(fila);
    int cont = 0;
    for(int i = 0; i < 12; i ++) {
        try {
            insereFila(fila,1);
            cont++;
        }catch(const char* msg) {
            cout << msg << endl;
        }
    }

    srand(time(NULL));

    for(int i = 0; i < 45 * 60; i++) {
        if(i % 60 == 0) {
            int x = rand() % 3 + 2;
            for(int j = 0; j < x; j++) {
                try {
                    insereFila(fila,1);
                    cont ++;
                }catch(const char* msg){
                    cout << msg << endl;
                }

            }
            if(i % 30 == 0) {
                recuperaElem(fila);
            }
        }
    }
    cout << "Quantas pessoas vieram ver o filme: " << cont << endl;
    cout << "Quantas pessoas ainda estavam na fila: " <<  retornaCard(fila) << endl;
    cout << "Quantas pessoas realmente viram o filme: " << cont - retornaCard(fila) << endl;
}
