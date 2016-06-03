#include <iostream>
using namespace std;

int even_finabocci_numbers(int num){
    int soma = 0;
    int anterior = 0;
    int atual = 1;
    int aux = 0;

   while(atual<num){
        aux = atual;
        atual += anterior;
        anterior = aux;
        if((atual%2 == 0)&&(atual<num)){
            soma += atual;
        }
    }
    return soma;
}

int main(){

    cout<<even_finabocci_numbers(4000000);
    return 0;
}
