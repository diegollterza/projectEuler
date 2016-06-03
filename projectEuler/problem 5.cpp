#include "help_functions.h"

bool verifica_div(long int aux,int indice){
    for(int i = 1; i <= indice; i++){
        if(aux%i!=0){
                return false;
        }
    }
    return true;

}

long int smallest_multiple(int indice){
    long int aux = 1;
    while(!verifica_div(aux, indice)){
        aux++;
    }
    return aux;
}

int main(){

    cout<<smallest_multiple(20);
    return 0;
}
