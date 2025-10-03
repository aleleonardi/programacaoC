# Super Trunfo em C - Nível Novato

Este projeto foi desenvolvido como parte do desafio da disciplina de **Programação em C**.  
O objetivo é implementar a lógica do jogo **Super Trunfo** comparando duas cartas.

---

##  Funcionalidades

- Cadastro de **duas cartas** contendo:
  - Estado (string, ex.: `SP`)
  - Código da carta (string, ex.: `A01`)
  - Nome da cidade (string, sem espaços nesta versão)
  - População (int)
  - Área (float)
  - PIB (float)
  - Número de pontos turísticos (int)
- Cálculo automático de:
  - **Densidade populacional** (População ÷ Área)
  - **PIB per capita** (PIB ÷ População)
- Comparação entre as duas cartas com base em **um único atributo**, definido diretamente no código:
  - População
  - Área
  - PIB
  - Densidade populacional (menor vence)
  - PIB per capita
- Exibição clara do vencedor.

---

##  Como compilar e executar

No terminal, dentro da pasta do projeto:

bash
gcc -Wall -Wextra -o super_trunfo super_trunfo.c
./super_trunfo

=========== Comparacao (Atributo: Populacao) ==========
Carta 1 - SaoPaulo (SP): 12300000.00
Carta 2 - RioJaneiro (RJ): 6000000.00
Resultado: Carta 1 (SaoPaulo) venceu!
