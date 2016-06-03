#include "help_functions.h"

int power_digit_sum(int num){
    vector<int> resultado;
    inicializa_vetor(num, &resultado);
    calcula_potencia_vetor(num, &resultado);
    for(int i = num-1; i >= 0; i--){
        if(resultado.at(i)!=0){
         cout<<resultado.at(i)<<" ";
        }
    }
    cout<<endl;
    return soma_digitos_vetor(resultado);
}

int main(){

    cout<<power_digit_sum(1000);
    return 0;
}
