#include "help_functions.h"

long int highly_divisible_triangular_number(int num){
    int aux = 0;
    int num_atual = 1;
    long int num_soma = 0;
    while(aux<num){
        num_soma += num_atual;
        num_atual++;
        aux = get_divisor_number(num_soma);
    }
            return num_soma;
}

int main(){
    cout<<highly_divisible_triangular_number(500);

    return 0;
}
