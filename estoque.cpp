/*
Elabore um programa que crie uma estrutura com as
seguintes informações de um produto:
• Código do produto – inteiro de 3 dígitos
• Quantidade em estoque - inteiro
• Valor de compra - real
• Valor de Venda - real
O programa deverá ler a informação de 10 produtos e determinar
• O código do produto com maior quantidade de estoque
• O quantidade de estoque do produto que proporciona o maior
lucro
*/
#include <iostream>
#define vec 2
using namespace std;


struct Produto{
    int codProd[vec];
    int qtdEstoque[vec];
    float compra[vec];
    float venda[vec];
};
int maiorLucro(Produto *produto){
    int maiorLucro = 0;
    int lucro = 0;
    int estoque = 0;
    for(int i=0;i<vec;i++){
    lucro = (produto->venda[i]) - (produto->compra[i]);
    if(lucro >maiorLucro){
        maiorLucro = lucro;
        estoque = produto->qtdEstoque[i];
       }    
    }
    return estoque;
}
int maiorEstoque(Produto *produto){
    int maior = 0;
    int codigo = 0;
    for(int i=0;i<vec;i++){
        if(produto->qtdEstoque[i] > maior){
            maior = produto->qtdEstoque[i];
            codigo = produto->codProd[i];
        }
    }
    return codigo;
}



int main() {
    Produto e;
    for(int i=0;i<vec;i++){
        cout<<"Cod:"<<endl;
        cin>>e.codProd[i];
        cout<<"qtdEstoque:"<<endl;
        cin>>e.qtdEstoque[i];
        cout<<"Compra:"<<endl;
        cin>>e.compra[i];
        cout<<"Venda:"<<endl;
        cin>>e.venda[i];
        
    }
    int a = maiorEstoque(&e);
    cout<<"Codigo do maior estoque:"<<a<<endl;
    int b = maiorLucro(&e);
    cout<<"Estoque com o maior lucro:"<<b<<endl;

    return 0;
}
