#include <iostream>
#include <string>
using namespace std;

int main () {

    //Entrada - declaração das variáveis
    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media[20];
    int qtdDisciplinas;

    //Processamento
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

    return 0; 
}
