#include "help_functions.h"

void name_scores(){
    ifstream file;
    file.open("names.txt");
    vector<string> names_str;
    string aux;
    vector<int> soma(1);
    if(file.is_open()){
        getline(file, aux, '"');
       while(getline(file, aux, '"')){
        if((aux.compare(",")!=0)){
        names_str.push_back(aux);
        }
       }
       file.close();
      str_quick_sort(&names_str, 0, names_str.size() - 1 );
      for(int i = 0; i < names_str.size(); i++){
        soma.at(0) += (i+1)*(soma_numero_letras(names_str.at(i)));
        smart_realoca_vetor(&soma);
      }
      imprime_soma(&soma);
      }else{
        cout<<"erro"<<endl;
}
}

int main(){
    name_scores();

    return 0;
}
