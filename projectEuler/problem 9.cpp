#include "help_functions.h"

    int special_pythagorean_triplet(int num){
    int c = 0;
    for(int i = 1; i < num; i++){
        for(int j = i; j < num; j++){
                c = num - i - j;
                if(c*c==(i*i + j*j)){
                    return c*i*j;
                }
            }
        }
    return 0;
    }

    int main(){
        cout<<special_pythagorean_triplet(1000);
        return 0;
    }
