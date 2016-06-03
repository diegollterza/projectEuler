#include "help_functions.h"

int smart_maximum_path_sum(int colunas){
    vector<int> triangulo[colunas];
    inicializa_triangulo(triangulo, colunas);
    return realiza_soma_triangulo(triangulo, colunas);



}

int main(){

    cout<<smart_maximum_path_sum(15);
    return 0;
}
