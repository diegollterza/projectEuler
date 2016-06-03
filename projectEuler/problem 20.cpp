#include "help_functions.h"

long int factorial_digit_sum(int num){
    vector<int> vetor;
    vetor.push_back(1);
    factorial(&vetor, num);
    return soma_digitos_vetor(vetor);

}

int main(){

    cout<<factorial_digit_sum(100);
    return 0;
}
