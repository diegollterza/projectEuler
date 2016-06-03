#include "help_functions.h"

int soma_quadrado(int num){
    if(num!=0){
        return num*num + soma_quadrado(num-1);
    }
    return 0;
}
/////////////////////////////////////////////////////////
int soma_natural_quad(int num){
   int aux = 0;
   for(int i = 1; i <= num; i ++){
        aux += i;
   }
    return aux*aux;

}
/////////////////////////////////////////////////////////
int sum_square_difference(int num){
    int aux = soma_quadrado(num);
    int aux2 = soma_natural_quad(num);
    return aux2 - aux;


}

int main(){
    cout<<sum_square_difference(100);
    return 0;
}
