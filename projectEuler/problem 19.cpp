#include "help_functions.h"

int counting_sundays(){
    int month = 1;
    int day = 7;
    int year = 1900;
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    int cont = 0;
    while(year<2001){
            day++;
            i++;
        if((month == 2)&&(check_leap(year))){
            if(day>29){
                day = 1;
                month++;
            }
            }else{
                if(day>month_days[month-1]){
                    day = 1;
                    month++;
                }

            }
        if(month > 12){
            month = 1;
            year++;
        }
        if((i%7==0)&&(year>1900)&&(day == 1)){
            cont++;
        }
}
    return cont;
}

int main(){

    cout<<counting_sundays();
}
