#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <clocale>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");

    //Entrada - declaração das variáveis
    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media[20];
    int qtdDisciplinas;
    int opcaoInicial;

    // Colocamos o do-while aqui para o menu sempre voltar
    do {
        // Processamento
        // LEITURA DE ALUNOS (commit 1)
        cout << "\n=== SISTEMA DE NOTAS V4.1 ===" << endl; // Atualizado para v4.1
        cout << "1 - Novo relatório" << endl;
        cout << "2 - Ver relatório salvo" << endl;
        cout << "3 - Sobre o sistema" << endl; // ADICIONADO: Nova opção
        cout << "0 - Sair do programa" << endl; // ADICIONADO: Opção para fechar
        cout << "Escolha uma opção: ";
        cin >> opcaoInicial;

        if (opcaoInicial == 1) {
            // Se escolher 1, executa todo o fluxo de cadastro que você já tinha criado
            do {
                cout << "Quantidade de alunos (1 a 20): ";
                cin >> qtdAlunos;
            } while (qtdAlunos < 1 || qtdAlunos > 20); 

            cin.ignore(); 

            for (int i = 0; i < qtdAlunos; i++) {
                cout << "Nome do aluno " << i + 1 << ": "; 
                getline(cin, nomes[i]);
            }

            //NOTAS E MÉDIAS (commit 2)
            do {
                cout << "\nQuantidade de disciplinas (1 a 5): ";
                cin >> qtdDisciplinas;
            } while (qtdDisciplinas < 1 || qtdDisciplinas > 5);

            for (int i = 0; i < qtdAlunos; i++) {
                cout << "\nNotas de " << nomes[i] << ":" << endl;
                float soma = 0;
                for (int j = 0; j < qtdDisciplinas; j++){
                    do{
                        cout << "Nota da disciplina " << j + 1 << " (0 a 10): ";
                        cin >> notas[i][j];
                    } while (notas[i][j] < 0 || notas[i][j] > 10); 
                    soma += notas[i][j];
                }
                media[i] = soma / qtdDisciplinas;
            }

            //Saída 
            //CLASSIFICAÇÃO E RELATÓRIO (commit 3)
            cout << "\n=====================================" << endl;
            cout << "        RELATÓRIO DE NOTAS" << endl;
            cout << "=====================================" << endl;
            for (int i = 0; i < qtdAlunos; i++) {
                cout << "Aluno " << i + 1 << ": " << nomes[i] << endl;
                for (int j = 0; j < qtdDisciplinas; j++) {
                    cout << "  - Disc. " << j + 1 << ": " << notas[i][j] << endl;
                }
                cout << "  > Média: " << media[i] << endl;
                cout << "-------------------------------------" << endl;
            }

            int aprovados = 0, recuperacao = 0, reprovados = 0;

            cout << "\n=== STATUS DOS ALUNOS ===" << endl;
            for (int i = 0; i < qtdAlunos; i++) {
                cout << nomes[i] << " - Média: " << media[i] << " - ";
                
                if (media[i] >= 7.0) {
                    cout << "Aprovado" << endl;
                    aprovados++;
                } else if (media[i] >= 5.0) {
                    cout << "Recuperação" << endl;
                    recuperacao++;
                } else {
                    cout << "Reprovado" << endl;
                    reprovados++;
                }
            }

            cout << "\n=== RESUMO GERAL ===" << endl;
            cout << "Aprovados: " << aprovados << endl;
            cout << "Recuperação: " << recuperacao << endl;
            cout << "Reprovados: " << reprovados << endl;

            //SALVAR EM ARQUIVO (commit 4)
            ofstream arquivo("relatorio.txt");

            if (arquivo.is_open()) {
                arquivo << "=== RELÁTORIO ===" << endl;
                for (int i = 0; i < qtdAlunos; i++) {
                    arquivo << nomes[i] << " - Média:" << media[i] << " - ";
                    if (media[i] >= 7) {
                        arquivo << "Aprovado" << endl;
                    } else if (media[i] >= 5) {
                        arquivo << "Recuperação" << endl;
                    } else { 
                        arquivo << "Reprovado" << endl;
                    }
                }
                arquivo << "\nResumo: " << aprovados << " aprovados, " << recuperacao << " em recuperação, " << reprovados << " reprovados, " << endl;
                arquivo.close();
                cout << "\nRelatório salvo em relatorio.txt" << endl;
            } else {
                cout << "Erro ao criar arquivo." << endl;
            }

        } else if (opcaoInicial == 2) {
            // LEITURA DE ARQUIVO (commit 5)
            ifstream leitura("relatorio.txt");
            if (leitura.is_open()) {
                string linha;
                cout << "\n";
                while (getline(leitura, linha)) {
                    cout << linha << endl;
                }
                leitura.close();
            } else {
                cout << "Nenhum relatório encontrado." << endl;
            }
            
        } else if (opcaoInicial == 3) {
            // TAREFA 1 — Menu "Sobre o Sistema"
            cout << "\n=== SOBRE ===" << endl;
            cout << "Sistema de Notas v4.1" << endl;
            cout << "Desenvolvido por: Seu Nome" << endl; // <-- Troque pelo seu nome!
            cout << "Turma: LOPAL 2026 - SENAI-SP" << endl;
            
        } else if (opcaoInicial == 0) {
            cout << "\nSaindo do sistema..." << endl;
        } else {
            cout << "\nOpção inválida!" << endl;
        }

    } while (opcaoInicial != 0); // Repete o menu enquanto o usuário não digitar 0

    return 0; 
}

