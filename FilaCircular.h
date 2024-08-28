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

template<typename T, int max>
bool existeElem(filaCircular<T,max> fila, T elem) {
    if (!ehVazia(fila)) {
        if(fila.inicio > fila.fim) {
            for(int i = fila.inicio; i < fila.card; i++){
                if(fila.elem[i] == elem) {
                    return true;
                }
            }
            for(int i = 0; i  < fila.fim; i++) {
                if(fila.elem[i] == elem) {
                    return true;
                }
            }
            return false;
        }else {
            for(int i = fila.inicio; i < fila.fim; i++) {
                if (fila.elem[i] == elem) {
                    return true;
                }
            }
            return false;

        }

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
                    return true;
                }
            }
            for(int i = 0; i  < fila.fim; i++) {
                if(fila.elem[i] == elem) {
                    return true;
                }
            }
            return false;
        }else {
            for(int i = fila.inicio; i < fila.fim; i++) {
                if (fila.elem[i] == elem) {
                    return true;
                }
            }
            return false;

        }

    }
}

template<typename T, int max>
void mostraFila(filaCircular<T,max> Fila) {
    if(!ehVazia(Fila)) {

    }
}







