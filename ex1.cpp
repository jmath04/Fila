#include  <iostream>
#include "FilaCircular.h"

using namespace std;

int main() {
    filaCircular<int,100> fila, fila2;

    cria(fila);
    cria(fila2);

    insereFila(fila,1);
    insereFila(fila,2);
    insereFila(fila,3);
    insereFila(fila,4);
    insereFila(fila2,1);
    insereFila(fila2,2);
    insereFila(fila2,2);

    if(verificaElementoFOR(fila,fila2)) {
        cout << "true";
    }else {
        cout << "false";
    }

}
