#include "help_functions.h"

int palindromo_maior(int digitos){
    int maior = 0;
    int cont= 0;
    int n = (int)(pow(10, digitos));
    int n2 = (int)(pow(10,(digitos-1)));
    for(int i = n2 ; i < n; i++){
    for(int j = n2 ; j < n; j++){

        if((verifica_palindromo(i*j))&&(maior<i*j)){
        maior = i*j;
        }
    }

}
    return maior;
}

int main(){
    cout<<palindromo_maior(3);

}
