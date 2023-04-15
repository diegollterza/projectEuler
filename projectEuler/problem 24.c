#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void str_to_list(char *str, int *list){
    int i;
    for(i=0;i<strlen(str);i++){
        list[i] = (int) (str[i] - '0');
    }
}

void print_list(int *list, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d", list[i]);
    }
    printf("\n");
}

void exchange(int *list, int i, int j){
    int aux;
    aux = list[i];
    list[i] = list[j];
    list[j] = aux;
}

void permute_left_to_right(int *list, int size, int ind){
    int i, j, k, aux;
        for(i=ind;i < size;i++){
            for(j=i; j < size; j++){
                if (list[i]>list[j]){
                    exchange(list, i, j);
                    permute_left_to_right(list, size, i);
                    return;
                }
            }
        }
}

int ordered_permute(int *list, int size){
    int i, j, k, aux;
    for(k = size-1; k>=0; k--){
        for(i=size-1;i > k;i--){
            for(j=i-1; j >= k; j--){
                if (list[i]>list[j]){
                    exchange(list, i, j);
                    permute_left_to_right(list, size, j+1);
                    return 1;
                }
            }
        }
    }
    return 0;
}

int lex_permut_n(char* num, int pos){
    int size = strlen(num);
    int algs[size];
    str_to_list(num, algs);
    print_list(algs, size);
    while(1){
        pos--;
        if(pos<1) break;
        int status = ordered_permute(algs, size);
        if (!status) break;
    }
    print_list(algs, size);
}

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Wrong number of arguments");
        return -1;
    }
    lex_permut_n(argv[1], atoi(argv[2]));
}

