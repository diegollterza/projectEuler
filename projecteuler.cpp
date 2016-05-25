#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>

using namespace std;
//////Problem 1/////
int soma_primos(int n){
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
//////////////////////////////////////
//////Problem 2/////
int finabocci_even_sum(int num){
    int soma = 0;
    int anterior = 0;
    int atual = 1;
    int aux = 0;

   while(atual<num){
        aux = atual;
        atual += anterior;
        anterior = aux;
        if((atual%2 == 0)&&(atual<num)){
            soma += atual;
        }
    }
    return soma;
}

////////////////////////////////////////////////////////
//////Problem 3/////
int fator_primo(long int num){
    int maior = 0;
    int aux = 0;
    long int aux2 = num;
    int it = 2;
    while(aux2!=1){
        if(aux2%it==0){
            aux2 = aux2/it;
            maior = it;
            }else{
            it++;
        }
    }
    return maior;

}
////////////////////////////////////////////////////////
bool verifica_palindromo(int n){
    string aux, aux2;
    aux2 = "";
    ostringstream conversor;
    conversor<<n;
    aux = conversor.str();
    for(int i = aux.length()-1; i >= 0;i--){
        aux2 += aux.at(i);
    }
    if(aux2==aux){
        return true;
    }
    return false;
}
////////////////////////////////////////////////////////////
//////Problem 4/////
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
/////////////////////////////////////////////////////////////
bool verifica_div(long int aux,int indice){
    for(int i = 1; i <= indice; i++){
        if(aux%i!=0){
                return false;
        }
    }
    return true;

}
//////////////////////////////////////////////////////////
//////Problem 5/////
long int maior_divide(int indice){
    long int aux = 1;
    while(!verifica_div(aux, indice)){
        aux++;
    }
    return aux;
}
///////////////////////////////////////////////////////////////////
//////Problem 6/////
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
int diferenca_soma_quadrado(int num){
    int aux = soma_quadrado(num);
    int aux2 = soma_natural_quad(num);
    return aux2 - aux;


}
//////////////////////////////////////////////////////////
bool verifica_prime(int num){
    for(int i = 2; i < num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
////////////////////////////////////////////////////////////
int n_prime(int num){
    int cont = 0;
    int aux = 2;
    int ultimo = 0;
    while(cont<num){
        if(verifica_prime(aux)){
            ultimo = aux;
            cont++;
        }
        aux++;
    }
    return ultimo;
}
/////////////////////////////////////////////////////////////////
void vetorize(string vet, int *vetor){
    for(int i = 0; i<1000; i++){
        vetor[i] = vet.at(i) - '0';
    }


}
///////////////////////////////////////////////////////////
long int matriz_adjacente(string vet){
    int vetor[1000];
    long int aux;
    long int maior = 0;
    vetorize(vet, vetor);
    for(int i = 0; i < 987; i++){
            aux = 1;
        for(int j = i; j < i + 13; j++){
            aux = aux*vetor[j];
        }
    if(maior < aux){
        maior = aux;
    }
    }

    return maior;
}
/////////////////////////////////////////////////////////////
void pitagoras_triplet(){
    int valor = 1000;
    int aux = 0;
    int a = 1;
    int b = 1;
}

//////////////////////////////////////////////////////////////
    int quadrado_soma(){
    int c = 0;
    for(int i = 1; i < 1000; i++){
        for(int j = i; j < 1000; j++){
                c = 1000 - i - j;
                if(c*c==(i*i + j*j)){
                    return c*i*j;
                }
            }
        }
    return 0;
    }
/////////////////////////////////////////////////////////////
long int prime_sum(){
    long int soma= 0;
    int aux = 2000000;
    for(int i = 2; i < aux; i++){
        if(verifica_prime(i)){
            soma += i;
        }
    }
    return soma;
}
//////////////////////////////////////////////////////////////////
void vetorize_even(string vet, int vetor[][20]){
    int it = 0;
    int aux;
    for(int i = 0; i<20; i++){
            for(int j = 0; j < 20; j++){
                aux = vet.at(it) - '0';
                aux = aux*10;
                vetor[i][j] = vet.at(it+1) - '0';
                vetor[i][j] += aux;
                it += 2;
            }
    }


}
//////////////////////////////////////////////////////////
long int produto_grid(){
    string aux = "08022297381500400075040507785212507791084949994017811857608717409843694804566200814931735579142993714067538830034913366552709523046011426924685601325671370236912231167151676389419236542240402866331380244732609903450244753353783684203517125032988128642367102638406759547066183864706726206802621220956394396308409166499421245558056673992697177878968314883489637221362309750076442045351400613397343133957817532822753167159403800462161409535692163905429635314755588824001754243629855786560048357189070544443744602158515417581980816805944769287392138652177704895540045208839735991607975732162626793327986688366887576220720346336746551232639353690442167338253911249472180846293240627636206936417230238834629969826759857404361620733529783190017431497148868116235705540170547183515469169233486143520189196748";
    int vet[20][20];
    int aux2;
    long int maior = 0;
    vetorize_even(aux,vet);
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
                if((j<=16)&&(i<=16)){
                    aux2 = vet[i][j]*vet[i+1][j+1]*vet[i+2][j+2]*vet[i+3][j+3];
                    if(aux2>maior){
                        maior = aux2;
                    }
                }
                    if(j<=16){
                    aux2 = vet[i][j]*vet[i][j+1]*vet[i][j+2]*vet[i][j+3];
                    if(aux2>maior){
                        maior = aux2;
                    }
                    }
                    if((i<=16)){
                    aux2 = vet[i][j]*vet[i+1][j]*vet[i+2][j]*vet[i+3][j];
                    if(aux2>maior){
                        maior = aux2;
                    }
                    }
                    if((j<=16)&&(i>=3)){
                    aux2 = vet[i][j]*vet[i-1][j+1]*vet[i-2][j+2]*vet[i-3][j+3];
                    if(aux2>maior){
                        maior = aux2;
                    }
                }
        }
    }
    return maior;
}
//////////////////////////////////////////////////////////////////////
int get_divisor(int num){
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

////////////////////////////////////////////////////////
long int triangle_divisor(int num){ //calcula o menor numero triangular de num divisores
    int aux = 0;
    int num_atual = 1;
    long int num_soma = 0;
    while(aux<num){
        num_soma += num_atual;
        num_atual++;
        aux = get_divisor(num_soma);
    }
            return num_soma;
}
//////////////////////////////////////////////
void smart_vetorize(string vet, int vetor[][50], int l, int c){
    int ponteiro = 0;
    for(int i = 0; i<l; i++){
            for(int j = 0; j < c; j++){
                vetor[i][j] = vet.at(ponteiro) - '0';
                ponteiro++;
            }
    }
}
///////////////////////////////////////////////
void inicializa_sum(int *vet){
    for(int i = 0; i < 100; i++){
        vet[i] = 0;
    }
}
///////////////////////////////////////////////////////
void realiza_soma(int vet[][50], int *soma_vetor){
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 50; j++){
            soma_vetor[j+50] += vet[i][j];
            }
        }
    }
///////////////////////////////////////////////////
void imprime_soma(int *soma_vetor){
    bool valor_null = true;
    for(int i = 0; i < 100; i++){
        if(soma_vetor[i]>0){
            valor_null = false;
        }
        if(!valor_null){
        cout<<soma_vetor[i];
    }
    }
    cout<<endl;
}
/////////////////////////////////////////////////
void realoca_vetor(int *vetor){
    bool checa_ultima_casa = false;
    int i = 99;
    while(!checa_ultima_casa){
            if(vetor[i]-10 < 0){
                checa_ultima_casa = true;
                break;
            }
            while(vetor[i]-10>=0){
                vetor[i] -= 10;
                vetor[i-1] += 1;
            }
            i--;
    }
}
////////////////////////////////////////////////
void soma_dez_digitos(){
   string valor_string = "37107287533902102798797998220837590246510135740250463769376774900097126481248969700780504170182605387432498619952474105947423330951305812372661730962991942213363574161572522430563301811072406154908250230675882075393461711719803104210475137780632466768926167069662363382013637841838368417873436172675728112879812849979408065481931592621691275889832738442742289174325203219235894228767964876702721893184745144573600130643909116721685684458871160315327670386486105843025439939619828917593665686757934951621764571418565606295021572231965867550793241933316490635246274190492910143244581382266334794475817892575867718337217661963751590579239728245598838407582035653253593990084026335689488301894586282278288018119938482628201427819413994056758715117009439035398664372827112653829987240784473053190104293586865155060062958648615320752733719591914205172558297169388870771546649911559348760353292171497005693854370070576826684624621495650076471787294438377604532826541087568284431911906346940378552177792951453612327252500029607107508256381565671088525835072145876576172410976447339110607218265236877223636045174237069058518606604482076212098132878607339694128114266041808683061932846081119106155694051268969251934325451728388641918047049293215058642563049483624672216484350762017279180399446930047329563406911573244438690812579451408905770622942919710792820955037687525678773091862540744969844508330393682126183363848253301546861961243487676812975343759465158038628759287849020152168555482871720121925776695478182833757993103614740356856449095527097864797581167263201004368978425535399209318374414978068609844840309812907779179908821879532736447567559084803087086987551392711854517078544161852424320693150332599594068957565367821070749269665376763262354472106979395067965269474259770973916669376304263398708541052684708299085211399427365734116182760315001271653786073615010808570091499395125570281987460043753582903531743471732693212357815498262974255273730794953759765105305946966067683156574377167401875275889028025717332296191766687138199318110487701902712526768027607800301367868099252546340106163286652636270218540497705585629946580636237993140746255962240744869082311749777923654662572469233228109171419143028819710328859780666976089293863828502533340334413065578016127815921815005561868836468420090470230530811728164304876237919698424872550366387845831148769693215490281042402013833512446218144177347063783299490636259666498587618221225225512486764533677201869716985443124195724099139590089523100588229554825530026352078153229679624948164195386821877476085327132285723110424803456124867697064507995236377742425354112916842768655389262050249103265729672370191327572567528565324825826546309220705859652229798860272258331913126375147341994889534765745501184957014548792889848568277260777137214037988797153829820378303147352772158034814451349137322665138134829543829199918180278916522431027392251122869539409579530664052326325380441000596549391598795936352974615218550237130764225512118369380358038858490341698116222072977186158236678424689157993532961922624679571944012690438771072750481023908955235974572318970677254791506150550495392297953090112996751986188088225875314529584099251203829009407770775672113067397083047244838165338735023408456470580773088295917476714036319800818712901187549131054712658197623331044818386269515456334926366572897563400500428462801835170705278318394258821455212272512503275512160354698120058176216521282765275169129689778932238195734329339946437501907836945765883352399886755061649651847751807381688378610915273579297013376217784275219262340194239963916804498399317331273132924185707147349566916674687634660915035914677504995186714302352196288948901024233251169136196266227326746080059154747183079839286853520694694454072476841822524674417161514036427982273348055556214818971426179103425986472045168939894221798260880768528778364618279934631376775430780936333301898264209010848802521674670883215120185883543223812876952786713296124747824645386369930090493103636197638780396218407357239979422340623539380833965132740801111666627891981488087797941876876144230030984490851411606618262936828367647447792391803351109890697907148578694408955299065364044742557608365997664579509666024396409905389607120198219976047599490197230297649139826800329731560371200413779037855660850892521673093931987275027546890690370753941304265231501194809377245048795150954100921645863754710598436791786391670211874924319957006419179697775990283006991536871371193661495281130587638027841075444973307840789923115535562561142322423255033685442488917353448899115014406480203690680639606723221932041495354150312888033953605329934036800697771065056663195481234880673210146739058568557934581403627822703280826165707739483275922328459417065250945123252306082291880205877731971983945018088807242966198081119777158542502016545090413245809786882778948721859617721078384350691861554356628840622574736922845095162084960398013400172393067166682355524525280460972253503534226472524250874054075591789781264330331690";
    int vetor[100][50];
    smart_vetorize(valor_string, vetor, 100, 50);
    int soma_vetor[100];
    inicializa_sum(soma_vetor);
    realiza_soma(vetor, soma_vetor);
    realoca_vetor(soma_vetor);
    imprime_soma(soma_vetor);
}
//////////////////////////////////////
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
//////Problem 14/////
void largest_collatz_sequence(long int num){
    int largest = 0;
    int atual = 0;
    int num_largest = 0;
    for(int i = 1; i <= num; i++){
            atual = num_collatz_sequence(i);
        if(largest<atual){
            largest = atual;
            num_largest = i;
        }
    }
    cout<<num_largest;
}
/////////////////////////////////////////////
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
}//////////////////////////////////////////////////////////
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
//////////////////////////////////////////////////////
//////Problem 15/////
long int lattice_path(int l, int c){
    return combinacao(l, c);

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
//////////////////////////////////////////////////////////
//////Problem 16/////
int power_digit_sum(int num){
    vector<int> resultado;
    inicializa_vetor(num, &resultado);
    calcula_potencia_vetor(num, &resultado);
    for(int i = num-1; i >= 0; i--){
        if(resultado.at(i)!=0){
         cout<<resultado.at(i)<<" ";
        }
    }
    cout<<endl;
    return soma_digitos_vetor(resultado);
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
///////////////////////////////////////////////
//////Problem 17/////
long int number_letter_counter(int num){
        long int soma = 0;
        for(int i = 0; i <= num; i++){
            soma += soma_letras(i);
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
//////Problem 18/////
int smart_maximum_path_sum(int colunas){
    vector<int> triangulo[colunas];
    inicializa_triangulo(triangulo, colunas);
    return realiza_soma_triangulo(triangulo, colunas);



}
/////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////
///////Problem 20///////////////
long int factorial_digit_sum(int num){
    vector<int> vetor;
    vetor.push_back(1);
    factorial(&vetor, num);
    return soma_digitos_vetor(vetor);

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

bool is_amicable(int num){
    int aux;
    aux = sum_divisor(num);
    if((sum_divisor(aux)==num)&&(aux!=num)){
        return true;
    }
    return false;
}
////////////////////////////////
int amicable_numbers(int limit){
    vector<int> soma;
    for(int i = 2; i < limit; i++){
        if(is_amicable(i)){
            soma.push_back(i);
        }
    }
    return soma_digitos_vetor(soma);
}

int main(){
    cout<<amicable_numbers(10000);
    return 0;
}
