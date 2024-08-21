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
    if(C.card > max){
        return false;
    }
    return true;
}

template<typename T, int max>
int numElementos(filaCircular<T,max> C){
    return C.card;
}

template<typename T, int max>
bool





