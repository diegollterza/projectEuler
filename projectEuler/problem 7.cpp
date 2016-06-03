#include "help_functions.h"

int n_prime(int num){
    int cont = 0;
    int aux = 2;
    int ultimo = 0;
    while(cont<num){
        if(verifica_prime(aux)){
            ultimo = aux;
            cont++;
        }
        aux++;
    }
    return ultimo;
}

int main(){
    cout<<n_prime(10001);
    return 0;
}
