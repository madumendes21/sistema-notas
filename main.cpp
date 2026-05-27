#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

int main () {

    //Entrada - declaração das variáveis
    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media[20];
    int qtdDisciplinas;

    //Processamento

    //LEITURA DE ALUNOS (commit 1)
    cout << "=== SISTEMA DE NOTAS V4.0 ===" << endl;
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
        } else
         { arquivo << "Reprovado" << endl;
        }
    }
    arquivo << "\nResumo: " << aprovados << " aprovados, " << recuperacao << " em recuperação, " << reprovados << " reprovados, " << endl;

    arquivo.close();
    cout << "\nRelatório salvo em relatorio.txt" << endl;
} else {
    cout << "Erro ao criar arquivo." << endl;
}

    return 0; 
}
