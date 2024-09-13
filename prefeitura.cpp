#include <iostream>
using namespace std;
#define v 2


struct dados{
    int idade[v];
    int filhos[v];
    float salario[v];
    char sexo[v];
};
int mediaFilho(dados *media){
    int cont =0;
    int mediaFilho =0;
    int final;
    for(int i=0;i<v;i++){
        mediaFilho += media->filhos[i];
        cont+=1;
    }
    if(cont >0){
        final = mediaFilho/cont;
    }
    return final;
}
int menorIdadeMulher(dados *idadeM){
   int menor =idadeM->idade[0]; 
    for(int i=0;i<v;i++){
        if(idadeM->sexo[i] == 'F'){
            if(idadeM->idade[i] < menor){
                menor=idadeM->idade[i];
            }
        }
    }
    return menor;
}
float mediaSalario(dados *sal){
    float mediaSalarial = 0;
    float cont =0;
    float aux;
    for(int i=0;i<v;i++){
        mediaSalarial+=sal->salario[i];
        cont+=1;
        }
        if(cont > 0){
            aux = mediaSalarial/cont;
        }
    return aux;
}
int salarioMenor(dados *salario){
    int mediaIdade = 0;
    int cont =0;
    int mediaIdade_fim=0;
    for(int i=0;i<v;i++){
        if(salario->salario[i] < 1412 && salario->sexo[i]=='F'){
             mediaIdade += salario->idade[i];
             cont +=1;
        }
        if(cont > 0){
            mediaIdade_fim = mediaIdade/cont;
        }
    }
    return mediaIdade_fim;
}


int main() {
    // Write C++ code here
    struct dados al;
   
    for(int i=0;i<v;i++){
        cout<<"idade:"<<endl;
        cin>>al.idade[i];
        cout<<"qtdFilho:"<<endl;
        cin>>al.filhos[i];
        cout<<"Sexo:"<<endl;
        cin>>al.sexo[i];
        cout<<"Salario:"<<endl;
        cin>>al.salario[i];
    }
    int a = salarioMenor(&al);
    float b = mediaSalario(&al);
    int m = menorIdadeMulher(&al);
    int f = mediaFilho(&al);
     cout<<"Media da idade:"<<a<<endl;
     cout<<"Media Salarial:"<<b<<endl;
     cout<<"Menor idade:"<<m<<endl;
     cout<<"Media Filho:"<<f<<endl;
    

    return 0;
}
