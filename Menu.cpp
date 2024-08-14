#include <iostream>
#include <string>

using namespace std;


void mostraMenu (){
	cout<<" 1 - Adicionar"<<endl;
	cout<<"2 - Excluir"<<endl;
	cout<<"3 - Atualizar"<<endl;
	cout<<"4 - Pesquisar"<<endl;
	cout<<"5 - Sair"<<endl;

}

//menu de interações
enum Menu
{
	ADICIONAR = 1,
	ATUALIZAR = 2,
	EXCLUIR = 3,
	PESQUISAR= 4,
	SAIR = 5
};

string toString(Menu escolha){
	switch(escolha){
		case ADICIONAR : return "ADICIONAR";
		case ATUALIZAR : return "ATUALIZAR";
		case EXCLUIR : return "EXCLUIR";
		case PESQUISAR : return "PESQUISAR";
		case SAIR : return "SAIR";
		default : return "ERRO, OPÇÃO INVÁLIDA";
	}
}


int main(void){
	
	mostraMenu();
	int op;
	cout<<"Digite uma opção:"<< endl;
	cin>>op;
	for(int i =0;i<=1;i++){
	if(op < ADICIONAR || op > SAIR){
		cout<<"opção errada."<<endl;
	}else{
		Menu escolha = static_cast<Menu>(op);
		 cout << "Você escolheu: " << toString(escolha) << endl;

	}
	}
	
}