#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PHI (1 + pow(5, 0.5))/2
#define ROOT_5 pow(5, 0.5)

double fibonnaci_log_10_index(double index){
    if (index < 100) return log(round((pow(PHI, index) - pow(-1/PHI, index))/(ROOT_5)))/log(10);
    return index*(log(PHI)/log(10)) - log(ROOT_5)/log(10);
}

int main(int argc, char const *argv[])
{
    int index = atoi(argv[1])-1;
    int i = 0;

    while(1){
        if(fibonnaci_log_10_index(i)>index) break;
        i++;
    }
    printf("%d", i);
    return 0;
}
