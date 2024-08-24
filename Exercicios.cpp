#include <iostream>
#include<cmath>
using namespace std;


void desafio_4(){
    int a,b,c;
     cout<<"Digite A:"<<endl;
       cin>>a;
       cout<<"Digite B:"<<endl;
       cin>>b;
       cout<<"Digite C:"<<endl;
       cin>>c;
    
    int delta = (b*b) - (4 * a * c);
    double x1 = (-b + sqrt(delta))/(2*a);
    double x2 = (-b - sqrt(delta))/(2*a);
    if (delta < 0) {
        cout << "Não há raízes reais." << endl;
    } else {
        // Calculando as raízes
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        
        // Mostrando os resultados
        cout << "Raízes: " << x1 << "\n" << x2 << endl;
    }
}
void desafio_3(){
    int x,y;
    cin>>x;
    if(x<1){
        y=x;
        cout<<y<<endl;
    }else if(x==1){
        y=0;
        cout<<y<<endl;
    }else{
        y=x*x;
        cout<<y<<endl;
    }
}
void desafio_2(){
    int A,B,C;
   
       cout<<"Digite A:"<<endl;
       cin>>A;
       cout<<"Digite B:"<<endl;
       cin>>B;
       cout<<"Digite C:"<<endl;
       cin>>C;
   
   if(A > B && C){
       cout<<"A é o maior"<<endl;
   }else if(B > A && C){
       cout<<"B é o maior"<<endl;
   }else{
       cout<<"C é o maior"<<endl;
   }
}
void desafio_1(){
    float N1,N2,P1,P2;
    cout<<"Digite a Nota 1 e Nota 2, peso 1 e peso 2:"<<endl;
    cin>>N1>>N2>>P1>>P2;
    float nota_final = (N1*P1) + (N2*P2);
    if(nota_final>=7){
        cout<<"Aprovado"<<endl;
    }else if(nota_final== 10){
        cout<<"Aprovado com Distinção"<<endl;
    }else{
        cout<<"Reprovado"<<endl;
    }
}
void primo(){
    int n;
    cin>>n;
    if(n==1 || n == 2){
        cout<<"Primo"<<endl;
    }else if(n%2==1 && n/1){
        cout<<"Primo"<<endl;
    }else{
        cout<<"Nao é primo"<<endl;
    }
    }
void trocaValor(){
int A = 5,B= 13,AUX;
cout<<"Valor A:"<<A<<"\nValor de B:"<<B<<"\n";
AUX = B;//guarda o 13
B   =   A;//5
A=AUX;//13
cout<<"Novo Valor de A:"<<A<<"\nNovo Valor de B:"<<B;
}
void loja(){
    float preco,desconto,novoPreco;
    cin>>preco>>desconto;
    novoPreco = preco - (preco * (desconto/100));
    cout<<"Preco do Produto: "<<preco<<"\nDesconto: "<<desconto<<"\nNovo preco: "<<novoPreco;
}
void empresa(){
    float const salario = 1500.00;
    float const comissao  = 200.00;
    float const valorVenda = 5.0;
    int qtdCarro, valorTotalVenda;
    cin>>qtdCarro>>valorTotalVenda;
    float comissaoFunc = qtdCarro * comissao;
    float porcentagemVenda = valorTotalVenda * (valorVenda/100);
    float bonus = salario + comissaoFunc + porcentagemVenda;
    cout<<"Quantidade de carro vendida : "<<qtdCarro<<endl;
    cout<<"\nValor total das vendas: "<<valorTotalVenda<<endl;
    cout<<"\nComissão do funcionário: "<<comissaoFunc<<endl;
    cout<<"\nValor recebido da porcentagem de 5%, do  valor da venda:"<<porcentagemVenda<<endl;
    cout<<"\nSalário:"<<salario<<endl;
    cout<<"\nSalário após os bônus:"<<bonus<<endl;
    
}
void parImpar(){
    int a;
    cin>>a;
    if(a%2==0){
        cout<<a<<" é par"<<endl;
    }else{
        cout<<a<<" é ímpar"<<endl;
    }
}
void quadradoRetangulo(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A==B && A == C && A == D){
        cout<<"é quadrado"<<endl;
    }else{
        cout<<"é retangulo"<<endl;
    }
}
void maiorNumero(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"A é maior que B"<<endl;
    }else{
        cout<<"B é maior que A"<<endl;
    }
}
void positivo_negativo_nulo(){
    int a;
    cin>>a;
    if(a>0){
        cout<<"Positivo"<<endl;
    }else if(a == 0 ){
        cout<<"Nulo"<<endl;
    }else{
        cout<<"Negativo"<<endl;
    }
}
void multiplo_5(){
    int a;
    cin>>a;
    if(a%5==0){
        cout<<"Multiplo de 5"<<endl;
    }else{
        cout<<"Não é multiplo de 5"<<endl;
    }
}
void somar_numero(){
    int A,B,C;
    cin>>A>>B;
    if(A==B){
        C = A + B;
        cout<<"Soma:"<<C<<endl;
    }else{
        C= A * B;
        cout<<"Multiplicação:"<<C<<endl;
    }
}

int main() {
     int escolha;
    cout << "Escolha uma função para executar:" << endl;
    cout << "1. Desafio 1" << endl;
    cout << "2. Desafio 2" << endl;
    cout << "3. Desafio 3" << endl;
    cout << "4. Desafio 4" << endl;
    cout << "5. Verificar se é Primo" << endl;
    cout << "6. Trocar Valor" << endl;
    cout << "7. Loja" << endl;
    cout << "8. Empresa" << endl;
    cout << "9. Par ou Ímpar" << endl;
    cout << "10. Quadrado ou Retângulo" << endl;
    cout << "11. Maior Número" << endl;
    cout << "12. Positivo, Negativo ou Nulo" << endl;
    cout << "13. Múltiplo de 5" << endl;
    cout << "14. Somar ou Multiplicar" << endl;

    cin >> escolha;

    switch (escolha) {
        case 1:
            desafio_1();
            break;
        case 2:
            desafio_2();
            break;
        case 3:
            desafio_3();
            break;
        case 4:
            desafio_4();
            break;
        case 5:
            primo();
            break;
        case 6:
            trocaValor();
            break;
        case 7:
            loja();
            break;
        case 8:
            empresa();
            break;
        case 9:
            parImpar();
            break;
        case 10:
            quadradoRetangulo();
            break;
        case 11:
            maiorNumero();
            break;
        case 12:
            positivo_negativo_nulo();
            break;
        case 13:
            multiplo_5();
            break;
        case 14:
            somar_numero();
            break;
        default:
            cout << "Escolha inválida" << endl;
    }

    return 0;
    
}
