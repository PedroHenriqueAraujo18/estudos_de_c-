#include <iostream>
using namespace std;
#define v 2


struct Aluno {
    int ra[v];
    int codDisciplina[v];
    double nota1[v];
    double nota2[v];
};
void mediaFinal(Aluno *al,double medias[]){
    for(int i=0;i<v;i++){
        double nota_1 = al->nota1[i];
        double nota_2 = al->nota2[i];
        medias[i] = (nota_1 + (nota_2 * 2)) / 3;
    }
}

int main() {
    // Write C++ code here
    struct Aluno al;
    double mediaF[v];
    for(int i=0;i<v;i++){
        cout<<"RA:"<<endl;
        cin>>al.ra[i];
        cout<<"Código Disciplina:"<<endl;
        cin>>al.codDisciplina[i];
        cout<<"Nota 1:"<<endl;
        cin>>al.nota1[i];
        cout<<"Nota 2:"<<endl;
         cin>>al.nota2[i];
    }
    
     mediaFinal(&al,mediaF);
    for (int i = 0; i < v; i++) {
        cout << "Média do aluno " << al.ra[i] << ": " << mediaF[i] << endl;
    }

    return 0;
}
