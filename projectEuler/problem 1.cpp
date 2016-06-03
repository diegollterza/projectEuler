#include <iostream>
using namespace std;

int multiples_3_and_5(int n){
    int sum = 0;
    int i = 1;
    while(n>i){
        if((i%3==0)||(i%5==0)){
            sum += i;

        }
        i++;
    }
    return sum;

}

int main(){
   cout<<multiples_3_and_5(1000);
    return 0;
}
