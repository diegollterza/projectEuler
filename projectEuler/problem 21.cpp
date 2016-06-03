#include "help_functions.h"

int amicable_numbers(int limit){
    vector<int> soma;
    for(int i = 2; i < limit; i++){
        if(is_amicable(i)){
            soma.push_back(i);
        }
    }
    return soma_digitos_vetor(soma);
}
/////////////////////////////////

int main(){
    cout<<amicable_numbers(10000);
    return 0;
}
