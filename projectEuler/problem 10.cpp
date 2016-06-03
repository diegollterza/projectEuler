#include "help_functions.h"

long int summation_of_primes(int num){
    long int soma= 0;
    for(int i = 2; i < num; i++){
        if(verifica_prime(i)){
            soma += i;
        }
    }
    return soma;
}

int main(){
    cout<<summation_of_primes(2000000);
    return 0;
}
