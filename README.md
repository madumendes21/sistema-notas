# 🚀 Sistema de Notas v4.1

> **Status do Projeto:** Concluído Nível Avançado (Nota Máxima) 🥇

Este é um programa robusto desenvolvido em **C++** para o gerenciamento inteligente de notas escolares. O sistema automatiza todo o fluxo de trabalho de uma secretaria escolar: desde o registo inicial até à exportação e leitura de históricos em ficheiros de texto externos.

---

## 🛠️ Funcionalidades Integradas

O sistema conta com as seguintes capacidades integradas e validadas:

* **📝 Cadastro Dinâmico**: Registo de alunos e notas costumizáveis por disciplina.
* **📊 Processamento Automatizado**: Cálculo imediato de médias por estudante.
* **🎯 Classificação Inteligente**: Divisão automática de status entre *Aprovado*, *Recuperação* ou *Reprovado*.
* **💾 Persistência de Dados**: Relatórios salvos diretamente em arquivo `.txt` contendo carimbo de data e hora em tempo real.
* **📖 Leitura de Histórico**: Fluxo de entrada que permite visualizar relatórios antigos diretamente na consola.
* **ℹ️ Menu Informático**: Secção dedicada com as informações e créditos do desenvolvedor.

---

## 💻 Estrutura de Commits & Linha do Tempo

O desenvolvimento do software seguiu rigorosamente as boas práticas de versionamento, estruturado através dos seguintes marcos de entrega:

| Sequência | Tipo de Commit | Descrição da Implementação |
| :---: | :--- | :--- |
| **01** | `feat: primeiro commit` | Estrutura inicial do arquivo principal do sistema. |
| **02** | `feat: adiciona notas e cálculo de média` | Matriz de notas, quantidade de disciplinas e médias. |
| **03** | `feat: adiciona salvamento em arquivo` | Criação do arquivo de texto para exportação do relatório. |
| **04** | `feat: adiciona leitura de arquivo` | Fluxo para ler e exibir relatórios antigos no console. |
| **05** | `feat: adiciona menu sobre o sistema` | **(Tarefa 1)** Adição da opção 3 com dados do desenvolvedor. |
| **06** | `feat: adiciona data e hora no relatorio` | **(Tarefa 2)** Uso da biblioteca `<ctime>` no cabeçalho do arquivo. |
| **07** | `docs: atualiza README com novas funcionalidades` | **(Tarefa 3)** Documentação oficial do repositório. |
| **08** | `feat: adiciona validacao de nome em branco` | **(Bônus A)** Trava para evitar nomes vazios no cadastro. |
| **09** | `feat: adiciona destaque maior e menor media` | **(Bônus B)** Algoritmo que encontra as notas extremas da turma. |
| **10** | `feat: adiciona relatorio de reprovados` | **(Bônus C)** Opção 4 para gerar o arquivo `reprovados.txt`. |
| **11** | `fix: corrige bug de compilacao na leitura de arquivo` | Ajuste de sintaxe e limpeza no fluxo de repetição do menu. |

---

## ⚙️ Tecnologias Utilizadas

* **Linguagem:** C++ (Padrão ISO)
* **Bibliotecas Nativas:** `<iostream>`, `<string>`, `<fstream>`, `<ctime>`, `<clocale>`
* **Ferramentas:** Git, GitHub, VS Code

---
