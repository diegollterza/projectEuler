#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <fstream>
#include <ctype.h>

using namespace std;

bool verifica_prime(int num){
    for(int i = 2; i < (int)(sqrt(num))+1; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
//////////////////////////////////////////////////////////////////
int get_divisor_number(int num){
    int i_aux = num;
    int i_cont = 2;
    int soma = 1;
    int i_iterator = 2;
    int i_ant = 1;
    while(i_aux>1){
        if(i_aux%i_iterator==0){
            i_aux = i_aux/i_iterator;
            if(i_ant==i_iterator){
                i_cont++;
            }else{
                i_ant = i_iterator;
                soma *= i_cont;
                i_cont=2;
            }
        }else{
            i_iterator++;
        }
    }
    return soma;
    }
//////////////////////////////////////////////
void inicializa_sum(int *vet){
    for(int i = 0; i < 100; i++){
        vet[i] = 0;
    }
}
///////////////////////////////////////////////////////
void realiza_soma(vector< vector<int> > vetor,vector<int> *soma_vetor){
    for(int i = 0; i < vetor.size(); i++){
        for(int j = 0; j < vetor.at(i).size(); j++){
            if(soma_vetor->size()== j){
                soma_vetor->push_back(vetor.at(i).at(j));
            }else{
            soma_vetor->at(j) += vetor.at(i).at(j);
            }
        }
        }
    }

     void imprime_soma(vector<int> *vetor){
    for(int i = vetor->size() - 1; i >= 0; i--){
        cout<<vetor->at(i);
    }
    cout<<endl;
}
/////////////////////////////////////////////////
int num_collatz_sequence(long int num){
    if(num == 1){
        return 1;
    }

    if(num%2==0){
        return (1 + num_collatz_sequence(num/2));
    }else{
        return (1 + num_collatz_sequence(3*num + 1));
    }


}
////////////////////////////////////////////////
long int combinacao(int l, int c){
    double resultado = 1;
    for(int i = 1; i <= (l+c); i++){
        resultado = resultado*i;
        if(i<=l){
            resultado = resultado/i;
        }
        if(i<=c){
            resultado = resultado/i;
        }
    }
    return (long int)resultado;
}
////////////////////////////////////////////////////////////
void vetorizar_string(string str, vector<int> *vetor){
    for(int i = str.length() - 1; i >= 0; i--){
        int aux = str.at(i) - '0';
        vetor->push_back(aux);
    }
}
//////////////////////////////////////////////////////////
void smart_realoca_vetor(vector<int> *vetor){
    int i = 0;
        while(i<vetor->size()){
            while(vetor->at(i)-10>=0){
                vetor->at(i) -= 10;
                if(i+1==vetor->size()){
                    vetor->push_back(1);
                }else{
                vetor->at(i+1) += 1;
                }
            }
            i++;
        }
}
//////////////////////////////////////////////////////////
long int soma_digitos_vetor(vector<int> vetor){
    long int resultado = 0;
    for(int i = 0; i < vetor.size();i++){
        resultado += vetor.at(i);
    }
    return resultado;
}
/////////////////////////////////////////////////////////
void calcula_potencia_vetor(int num, vector<int> *vetor){
    for(int i = 0; i < num-1; i++){
        for(int j = 0; j < num; j++){
            vetor->at(j) = vetor->at(j)*2;
            }
            smart_realoca_vetor(vetor);
        }
    }
//////////////////////////////////////////////////////////
void inicializa_vetor(int num, vector<int> *vetor){//change to 2 if doing calcula_potencia_vetor
    vetor->push_back(2);
    for(int i = 1; i < num; i++){
        vetor->push_back(0);
    }

}
//////////////////////////////////////////////////
int soma_letras(int num){
        long int soma = 0;
        ostringstream aux;
        string aux2;
        vector<int> vetor;
        aux<<num;
        aux2 = aux.str();
        vetorizar_string(aux2,&vetor);
        string array_decimal_1_ao_19[21] = {"","one","two","three","four","five","six","seven","eight","nine","ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        string array_decimal[9] = {"","twenty","thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
        string cem = "hundred";
        string mil = "thousand";
        /*for(int i = vetor.size() -1; i >= 0; i--){
            cout<<vetor.at(i);
        }
        cout<<" ";*/
        if(num<10){
            return array_decimal_1_ao_19[num].length();
        }
        if(num == 1000){
            return mil.length() + 3;
        }
        for(int i = vetor.size()-1; i >= 1; i--){
            if(i==2){
                soma += array_decimal_1_ao_19[vetor.at(2)].length() + cem.length();
                //cout<<array_decimal_1_ao_19[vetor.at(2)]<<" "<<cem<<" ";
                if((vetor.at(1)!=0)||(vetor.at(0)!=0)){
                    soma += 3;
                    //cout<<"and"<<" ";
                }
            }
                if(i == 1){
                    if(vetor.at(1)>=2){
                        soma += array_decimal[vetor.at(1)-1].length() + array_decimal_1_ao_19[vetor.at(0)].length();
                        //cout<<array_decimal[vetor.at(1)-1]<<" "<<array_decimal_1_ao_19[vetor.at(0)]<" ";
                    }else{
                        soma += array_decimal_1_ao_19[vetor.at(1)*10 + vetor.at(0)].length();
                        //out<< array_decimal_1_ao_19[vetor.at(1)*10 + vetor.at(0)];
                    }
                }
            }
    return soma;

}
////////////////////////////////////////////
void inicializa_triangulo(vector<int> *triangulo, int colunas){
    int vetor[][colunas] =
{{75},
{95,64},
{17,47,82},
{18,35,87,10},
{20,04,82,47,65},
{19,01,23,75,03,34},
{88,02,77,73,07,63,67},
{99,65,04,28,06,16,70,92},
{41,41,26,56,83,40,80,70,33},
{41,48,72,33,47,32,37,16,94,29},
{53,71,44,65,25,43,91,52,97,51,14},
{70,11,33,28,77,73,17,78,39,68,17,57},
{91,71,52,38,17,14,91,43,58,50,27,29,48},
{63,66,04,68,89,53,67,30,73,16,69,87,40,31},
{04,62,98,27,23,9,70,98,73,93,38,53,60,04,23}};
   /* int vetor[][colunas] =
{{3},
{7,4},
{2,4,6},
{8,5,9,3}};*/
    for(int i = 0; i < colunas; i++){
        for(int j = 0; j <= i; j++){
            triangulo[i].push_back(vetor[i][j]);
        }
    }
}
////////////////////////////////////////////////////////
int realiza_soma_triangulo(vector<int> *triangulo, int colunas){
    for(int i = colunas - 2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(triangulo[i+1].at(j)>triangulo[i+1].at(j+1)){
                triangulo[i].at(j) += triangulo[i+1].at(j);
            }else{
                triangulo[i].at(j) += triangulo[i+1].at(j+1);
            }
        }
    }
    return triangulo[0].at(0);
}
////////////////////////////////////////////////////////
bool check_leap(int year){
    if((year%100==0)&&(year%400==0)){
        return true;
    }
    if((year%100!=0)&&(year%4==0)){
        return true;
    }
    return false;

}
////////////////////////////////////////////////////////////
/////////Problem 19//////////
long int factorial(vector<int> *vetor, int num){
    for(int i = 1; i <= num; i++){
        for(int j = 0; j < vetor->size(); j++){
            vetor->at(j) *= i;
        }
        smart_realoca_vetor(vetor);
    }
}
//////////////////////////////////////////////////////////
vector<int> int_to_vector(long int i){
    string aux;
    ostringstream os;
    os<<i;
    aux = os.str();
    vector<int> vetor;
    vetorizar_string(aux, &vetor);
    return vetor;
}
///////////////////////////////////////
int sum_divisor(int num){
    set<int> aux;
    vector<int> vetor;
    if(num == 1) return 0;
    for(int i = 1; i < num; i++){
        if(num%i==0){
            aux.insert(i);
        }
    }
    for(set<int>::iterator it = aux.begin(); it != aux.end(); it++){
        vetor.push_back(*it);
    }
    return soma_digitos_vetor(vetor);
}
////////////////////////////////////////////
bool is_amicable(int num){
    int aux;
    aux = sum_divisor(num);
    if((sum_divisor(aux)==num)&&(aux!=num)){
        return true;
    }
    return false;
}
////////////////////////////////

void str_quick_sort(vector<string> *vetor, int left, int right) {
      int i = left, j = right;
      string tmp;
      string pivot = vetor->at((left + right) / 2);

      /* partition */
      while (i <= j) {
            while (vetor->at(i).compare(pivot) < 0)
                  i++;
            while (vetor->at(j).compare(pivot) > 0)
                  j--;
            if (i <= j) {
                  tmp = vetor->at(i);
                  vetor->at(i) = vetor->at(j);
                  vetor->at(j) = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (left < j)
            str_quick_sort(vetor, left, j);
      if (i < right)
            str_quick_sort(vetor, i, right);
}

int valor_char(char c){
    char valor[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i = 0;
    while(valor[i] !=  tolower(c)){
        i++;
    }
    return i+1;
}

int soma_numero_letras(string str){
    int soma = 0;
    for(int i = 0; i < str.length(); i++){
        soma += valor_char(str.at(i));
    }

    return soma;

}

