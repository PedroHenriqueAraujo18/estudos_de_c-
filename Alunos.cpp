#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Struct que representa um Aluno
struct Aluno {
    string nome;
    int idade;
    vector<float> notas; // Um vetor de notas para o aluno
};

// Classe que representa um sistema de gerenciamento de alunos
class SistemaAluno {
private:
    vector<Aluno> alunos; // Vetor para armazenar alunos

public:
    // Método para adicionar um novo aluno
    void adicionarAluno() {
        Aluno novoAluno;
        cout << "Digite o nome do aluno: ";
        cin.ignore();
        getline(cin, novoAluno.nome);
        cout << "Digite a idade do aluno: ";
        cin >> novoAluno.idade;

        // Capturar as notas do aluno
        int numNotas;
        cout << "Quantas notas deseja inserir? ";
        cin >> numNotas;
        for (int i = 0; i < numNotas; i++) {
            float nota;
            cout << "Digite a nota " << i + 1 << ": ";
            cin >> nota;
            novoAluno.notas.push_back(nota);
        }

        alunos.push_back(novoAluno); // Adiciona o aluno ao sistema
        cout << "Aluno adicionado com sucesso!\n";
    }

    // Método para listar todos os alunos
    void listarAlunos() {
        if (alunos.empty()) {
            cout << "Nenhum aluno cadastrado ainda.\n";
            return;
        }
        for (size_t i = 0; i < alunos.size(); i++) {
            cout << "Aluno " << i + 1 << ":\n";
            cout << "Nome: " << alunos[i].nome << "\n";
            cout << "Idade: " << alunos[i].idade << "\n";
            cout << "Notas: ";
            for (size_t j = 0; j < alunos[i].notas.size(); j++) {
                cout << alunos[i].notas[j] << " ";
            }
            cout << "\n";
        }
    }

    // Método para calcular a média das notas de um aluno
    void calcularMedia() {
        if (alunos.empty()) {
            cout << "Nenhum aluno cadastrado ainda.\n";
            return;
        }

        int alunoIndex;
        cout << "Digite o número do aluno para calcular a média (1 - " << alunos.size() << "): ";
        cin >> alunoIndex;

        if (alunoIndex < 1 || alunoIndex > alunos.size()) {
            cout << "Aluno inválido.\n";
            return;
        }

        Aluno aluno = alunos[alunoIndex - 1];
        float soma = 0;
        for (float nota : aluno.notas) {
            soma += nota;
        }
        float media = soma / aluno.notas.size();
        cout << "A média das notas do aluno " << aluno.nome << " é: " << media << "\n";
    }
};

// Função principal
int main() {
    SistemaAluno sistema;
    int escolha;

    do {
        cout << "\n--- Sistema de Gerenciamento de Alunos ---\n";
        cout << "1. Adicionar Aluno\n";
        cout << "2. Listar Alunos\n";
        cout << "3. Calcular Média de Notas\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                sistema.adicionarAluno();
                break;
            case 2:
                sistema.listarAlunos();
                break;
            case 3:
                sistema.calcularMedia();
                break;
            case 0:
                cout << "Saindo do sistema...\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }
    } while (escolha != 0);

    return 0;
}
