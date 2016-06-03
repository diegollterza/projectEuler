#include "help_functions.h"

long int non_abundant_sums(int limit){
    vector<int> number_and_sums;
    inicializa_sum_divisor(number_and_sums, limit);
    long int soma = 1;
    bool flag = false;
    for(int i = 2; i < limit; i++){
        for(int j = 2; j < (i/2)+1; j++){
            if((j<number_and_sums.at(j))&&(i-j<number_and_sums.at(i-j))){
                flag = true;
                break;
            }
        }
        if(!flag){
            soma += i;
        }
        flag = false;
    }
    return soma;
    }

int main(){
    cout<<non_abundant_sums(28200);
    return 0;
}
