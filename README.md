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

| Etapa | Tipo de Commit | Descrição da Implementação |
| :--- | :--- | :--- |
| **01** | `feat: ...` | Criação da estrutura de dados inicial e captura de nomes. |
| **02** | `feat: ...` | Implementação da matriz de notas por disciplinas e lógicas de média. |
| **03** | `feat: ...` | Construção do layout visual do relatório e validação de status. |
| **04** | `feat: ...` | Integração da biblioteca `<fstream>` para persistência de dados (`ofstream`). |
| **05** | `feat: ...` | Desenvolvimento do fluxo de leitura de ficheiros (`ifstream`) via menu inicial. |

---

## ⚙️ Tecnologias Utilizadas

* **Linguagem:** C++ (Padrão ISO)
* **Bibliotecas Nativas:** `<iostream>`, `<string>`, `<fstream>`, `<ctime>`, `<clocale>`
* **Ferramentas:** Git, GitHub, VS Code

---
