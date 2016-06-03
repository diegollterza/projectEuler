#include "help_functions.h"

void longest_collatz_sequence(long int num){
    int largest = 0;
    int atual = 0;
    int num_largest = 0;
    for(int i = 1; i <= num; i++){
            atual = num_collatz_sequence(i);
        if(largest<atual){
            largest = atual;
            num_largest = i;
        }
    }
    cout<<num_largest;
}

int main(){
    longest_collatz_sequence(1000000);
    return 0;
}
