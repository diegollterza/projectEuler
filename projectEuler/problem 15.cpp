#include "help_functions.h"

long int recursive_lattice_path(int l, int c){
    if((c==0)&&(l==0)){
        return 1;
    }
    if((c>0)&&(l==0)){
        return recursive_lattice_path(l,c-1);
    }
    if((c==0)&&(l>0)){
       return recursive_lattice_path(l-1,c);
    }

    return recursive_lattice_path(l,c-1) + recursive_lattice_path(l-1,c);
}

long int lattice_path(int l, int c){
    return combinacao(l, c);

}

int main(){
    cout<<lattice_path(20,20);
    return 0;
}
