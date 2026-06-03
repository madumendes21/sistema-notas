# Sistema de Notas v4.1 🚀

Este é um programa desenvolvido em **C++** para o gerenciamento de notas escolares. O sistema permite registar uma lista de alunos, inserir notas para múltiplas disciplinas, calcular as médias automaticamente, exibir o status de cada estudante (Aprovado, Recuperação ou Reprovado) e salvar um relatório completo num arquivo de texto externo, além de ler históricos gerados anteriormente.

---

## Funcionalidades
- Cadastro de alunos e notas por disciplina
- Cálculo de médias por aluno
- Classificação: Aprovado, Recuperação ou Reprovado
- Relatório salvo em arquivo .txt com data e hora
- Leitura de relatório salvo
- Menu "Sobre o sistema"

---

## 💻 Estrutura de Commits do Projeto

O desenvolvimento deste software foi documentado e estruturado através das seguintes etapas de entrega (conforme os marcos do código):
1. **Commit 1**: Implementação da estrutura inicial e leitura dos nomes dos alunos.
2. **Commit 2**: Adição da matriz de notas, quantidade de disciplinas e cálculo das médias.
3. **Commit 3**: Criação do layout do relatório de notas e classificação do status dos alunos.
4. **Commit 4**: Implementação da persistência de dados utilizando a biblioteca fstream para gravação de arquivos (ofstream).
5. **Commit 5**: Criação do fluxo de leitura de arquivos (ifstream) para exibir relatórios antigos diretamente no menu inicial.