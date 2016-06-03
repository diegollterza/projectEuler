#include "help_functions.h"

long int number_letter_counter(int num){
        long int soma = 0;
        for(int i = 0; i <= num; i++){
            soma += soma_letras(i);
        }
        return soma;
    }

int main(){
    cout<<number_letter_counter(1000);
    return 0;
}
