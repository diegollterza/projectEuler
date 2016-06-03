#include <iostream>
using namespace std;

int largest_prime_factor(long int num){
    int maior = 0;
    int aux = 0;
    long int aux2 = num;
    int it = 2;
    while(aux2!=1){
        if(aux2%it==0){
            aux2 = aux2/it;
            maior = it;
            }else{
            it++;
        }
    }
    return maior;

}

int main(){
    cout<<largest_prime_factor(600851475143);
    return 0;
}
