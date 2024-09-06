#include <iostream> 
#include <time.h>
#include "FilaCircular.h"

using namespace std; 

int main (){
    filaCircular <int, 200> taxi;
    filaCircular <int,200> passageiros;
    cria(taxi);
    cria(passageiros);
    srand(time(NULL));
    float tempoM = 0;
    int contp = 0;

    for (int i = 0; i < 10 * 60; i++){
        if( i % 5 == 0){
           for(int j = 0; j < rand() % 3; j++){
                try{
                    insereFila(taxi, 1);
                }catch(const char* msg){
                    cout << msg << endl;
                }
           }
        }
        if( i % 3 ){
            for( int j = 0; j < rand() % 2; j++){
                try{
                    insereFila(passageiros, i);
                    contp++;
                }catch(const char* msg){
                    cout << msg << endl;
                }
            }
        }

        if (!ehVazia(passageiros) and !ehVazia(taxi)){
            if (retornaCard(passageiros) >= 4){
                for(int z = 0; i < 4; z++){
                    tempoM += recuperaElem(passageiros);
                }
                recuperaElem(taxi);
            }else{
                for(int z = 0; z < retornaCard(passageiros); z++){
                    tempoM += recuperaElem(passageiros);
                }
                recuperaElem(taxi);
            }
        }
    }
    cout << "numero de passageiros totais: " << contp << endl;
    cout << "tempo medio: " << tempoM /contp << endl;
}


/*Implemente um programa para simular um ponto de táxi durante 10 horas, cujas características são: a) a cada
5 minutos chega um número aleatório de táxis (entre 0 e 3 táxis); b) a cada 3 minutos chega um número
aleatório de passageiros (entre 0 e 2 passageiros); e c) a cada minuto, se houverem táxis e passageiros para
serem transportados, um passageiro toma um táxi.
*/