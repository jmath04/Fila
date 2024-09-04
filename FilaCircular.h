#include <iostream>

using namespace std;

template<typename T, int max>
struct filaCircular{
    int card;
    int inicio;
    int fim;
    T elem[max];
};

template<typename T, int max>
void cria(filaCircular <T,max> C){
    C.card = 0;
    C.inicio = 0;
    C.fim = 0;
}

template<typename T, int max>
bool ehVazia(filaCircular<T,max> C){
    if(C.card == 0 ){
        return true;
    }
    return false;

}

template<typename T, int max>
bool verificaCheia(filaCircular<T,max> C){
    if(C.card < max){
        return false;
    }
    return true;
}

template<typename T, int max>
int numElementos(filaCircular<T,max> C){
    return C.card;
}

/* na rotina abaixo usam dois indices pois o i está relacionado com a cardinalidade, ou seja ele esta contado para
 * rodar o looping com a quantidade de elemtos que existem a fila, e o posição é efetivamente a posição do elemento no
 * vetor,
 *
 * o motivo disso é pois voce pode ter uma posiçao que é numericamente maior que a cardinalidade;
 *
 *
 */


template<typename T, int max>
bool existeElem(filaCircular<T,max> fila, T elem) {
    if (!ehVazia(fila)) {
        int i = 0;
        int pos = fila.inicio;
        while(i < fila.card){
            pos++;
            if(pos > max - 1) {
                pos = 0;
            }
            if(fila.elem[pos] == elem) {
                return true;
            }
        }
        return false;
    }
}

template<typename T, int max>
bool ehValida(filaCircular<T,max> fila, int pos) {
    if(!verificaNumeroIntervalo(fila.inicio,fila.fim,pos) and pos > 0 and pos < max) {
        return true;
    }else {
        return false;
    }

}

bool verificaNumeroIntervalo(int x, int y, int valor) {
    if(x > y) {
        if (valor > y and valor < x) {
            return true;
        }
        return false;
    }
    if(x < y) {
        if (valor < y and valor > x) {
            return true;
        }
        return false;
    }
    if (y == x and valor == x) {
        return true;
    }
    return false;
}

template<typename T, int max>
T recuperaElem(filaCircular<T,max> fila) {
    T aux = fila.elem[fila.inicio + 1];
    fila.inicio--;
    return aux;
}

template<typename T, int max>
int recuperaPos(filaCircular<T,max> fila, T elem) {
    if (!ehVazia(fila)) {
        if(fila.inicio > fila.fim) {
            for(int i = fila.inicio; i < fila.card; i++){
                if(fila.elem[i] == elem) {
                    return i;
                }
            }
            for(int i = 0; i  < fila.fim; i++) {
                if(fila.elem[i] == elem) {
                    return i;
                }
            }
        }else {
            for(int i = fila.inicio; i < fila.fim; i++) {
                if (fila.elem[i] == elem) {
                    return i;
                }
            }
        }
    }
}

template<typename T, int max>
void mostraFila(filaCircular<T,max> Fila) {
    if(!ehVazia(Fila)) {
        int i = 0;
        int pos = Fila.inicio;
        while(i < Fila.card) {
            pos++;
            if (pos > max - 1) {
                pos = 0;
            }
            cout << " [ " << Fila.elem[pos] << " ] " << endl;
        }

    }
}







