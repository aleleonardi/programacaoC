#include <stdio.h>
#include <locale.h>

/*
  Super Trunfo - Nível Novato
  - Cadastro de 2 cartas (aproveitando o código do desafio anterior)
  - Cálculo de Densidade Populacional e PIB per capita
  - Comparação entre as cartas por UM atributo escolhido no código
  - Regras: para Densidade, menor vence; para os demais, maior vence
  - Saída clara e comentada
*/

/* 
 * Função utilitária: descarta qualquer sobra na linha atual do stdin.
 * Evita que o excesso digitado (ex.: "ABCD" quando só cabem 3) contamine a próxima leitura.
 */
void limpa_linha(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main(void) {
    setlocale(LC_ALL, "C"); /* garante separador decimal com ponto '.' */

    /* ---------- Configuração simples ----------
       Para usar cartas pré-definidas (sem digitar nada),
       mudar usarEntrada para 0. Assim você segue a simplificação de teste.
    */
    int usarEntrada = 1; /* 1 = ler do usuário; 0 = cartas fixas */

    /* ---------- Escolha do atributo para comparação ----------
       1 = População (maior vence)
       2 = Área (maior vence)
       3 = PIB (maior vence)
       4 = Densidade Populacional (menor vence)
       5 = PIB per capita (maior vence)
       Altere o valor abaixo conforme o atributo que deseja comparar.
    */
    int atributoEscolhido = 1; /* <<< MUDE AQUI se quiser comparar outro atributo */

    /* ---------- Declaração dos dados das cartas ----------
       Strings com tamanho +1 para o terminador '\0'.
       - estado: 2 letras (ex.: "SP") -> char[3]
       - codigo: 3 caracteres           -> char[4]
       - cidade: até 19 chars           -> char[20] (sem espaços nesta versão simples)
    */
    char carta_1_estado[3], carta_2_estado[3];
    char carta_1_codigo[4], carta_2_codigo[4];
    char carta_1_cidade[20], carta_2_cidade[20];
    int   carta_1_populacao, carta_2_populacao;
    float carta_1_area, carta_2_area;
    float carta_1_pib,  carta_2_pib;
    int   carta_1_pturistico, carta_2_pturistico;

    /* ---------- Entrada de dados ou cartas fixas ---------- */
    if (usarEntrada) {
        /* CARTA 1 */
        printf("Insira os dados da carta 1\n");
        printf("Estado (ex.: SP): ");
        scanf("%2s", carta_1_estado); limpa_linha();

        printf("Codigo (3 chars): ");
        scanf("%3s", carta_1_codigo); limpa_linha();

        printf("Cidade (sem espaco): ");
        scanf("%19s", carta_1_cidade); limpa_linha();

        printf("Populacao: ");
        scanf("%d", &carta_1_populacao); limpa_linha();

        printf("Area (use ponto como decimal, ex.: 1234.56): ");
        scanf("%f", &carta_1_area); limpa_linha();

        printf("PIB (em unidades escolhidas, ex.: 123456.78): ");
        scanf("%f", &carta_1_pib); limpa_linha();

        printf("Pontos turisticos: ");
        scanf("%d", &carta_1_pturistico); limpa_linha();

        /* CARTA 2 */
        printf("\nInsira os dados da carta 2\n");
        printf("Estado (ex.: RJ): ");
        scanf("%2s", carta_2_estado); limpa_linha();

        printf("Codigo (3 chars): ");
        scanf("%3s", carta_2_codigo); limpa_linha();

        printf("Cidade (sem espaco): ");
        scanf("%19s", carta_2_cidade); limpa_linha();

        printf("Populacao: ");
        scanf("%d", &carta_2_populacao); limpa_linha();

        printf("Area (use ponto como decimal): ");
        scanf("%f", &carta_2_area); limpa_linha();

        printf("PIB: ");
        scanf("%f", &carta_2_pib); limpa_linha();

        printf("Pontos turisticos: ");
        scanf("%d", &carta_2_pturistico); limpa_linha();
    } else {
        /* Exemplo simples de cartas pré-definidas (sem entrada) */
        /* CARTA 1 */
        sprintf(carta_1_estado, "SP");
        sprintf(carta_1_codigo, "A01");
        sprintf(carta_1_cidade, "SaoPaulo");
        carta_1_populacao   = 12300000;
        carta_1_area        = 1521.11f;
        carta_1_pib         = 800000.00f;
        carta_1_pturistico  = 50;

        /* CARTA 2 */
        sprintf(carta_2_estado, "RJ");
        sprintf(carta_2_codigo, "B02");
        sprintf(carta_2_cidade, "RioJaneiro");
        carta_2_populacao   = 6000000;
        carta_2_area        = 1200.00f;
        carta_2_pib         = 400000.00f;
        carta_2_pturistico  = 40;
    }

    /* ---------- Cálculos derivados ---------- */
    /* Densidade Populacional = Populacao / Area (evitar divisão por zero) */
    float carta_1_densidade = (carta_1_area > 0.0f) ? (carta_1_populacao / carta_1_area) : 0.0f;
    float carta_2_densidade = (carta_2_area > 0.0f) ? (carta_2_populacao / carta_2_area) : 0.0f;

    /* PIB per capita = PIB / Populacao (evitar divisão por zero) */
    float carta_1_pibpc = (carta_1_populacao > 0) ? (carta_1_pib / carta_1_populacao) : 0.0f;
    float carta_2_pibpc = (carta_2_populacao > 0) ? (carta_2_pib / carta_2_populacao) : 0.0f;

    /* ---------- Exibição dos dados cadastrados ---------- */
    printf("\n================= CARTA 1 =================\n");
    printf("Estado: %s\n", carta_1_estado);
    printf("Codigo: %s\n", carta_1_codigo);
    printf("Cidade: %s\n", carta_1_cidade);
    printf("Populacao: %d\n", carta_1_populacao);
    printf("Area: %.2f\n", carta_1_area);
    printf("PIB: %.2f\n", carta_1_pib);
    printf("Pontos Turisticos: %d\n", carta_1_pturistico);
    printf("Densidade Populacional: %.2f\n", carta_1_densidade);
    printf("PIB per capita: %.2f\n", carta_1_pibpc);

    printf("\n================= CARTA 2 =================\n");
    printf("Estado: %s\n", carta_2_estado);
    printf("Codigo: %s\n", carta_2_codigo);
    printf("Cidade: %s\n", carta_2_cidade);
    printf("Populacao: %d\n", carta_2_populacao);
    printf("Area: %.2f\n", carta_2_area);
    printf("PIB: %.2f\n", carta_2_pib);
    printf("Pontos Turisticos: %d\n", carta_2_pturistico);
    printf("Densidade Populacional: %.2f\n", carta_2_densidade);
    printf("PIB per capita: %.2f\n", carta_2_pibpc);

    /* ---------- Comparação ---------- */
    /* Texto do atributo para impressão */
    const char* nomeAtributo = "";
    float valor1 = 0.0f, valor2 = 0.0f;
    int menor_vence = 0; /* 0 = maior vence; 1 = menor vence (caso da densidade) */

    if (atributoEscolhido == 1) {
        nomeAtributo = "Populacao";
        valor1 = (float)carta_1_populacao;
        valor2 = (float)carta_2_populacao;
        menor_vence = 0;
    } else if (atributoEscolhido == 2) {
        nomeAtributo = "Area";
        valor1 = carta_1_area;
        valor2 = carta_2_area;
        menor_vence = 0;
    } else if (atributoEscolhido == 3) {
        nomeAtributo = "PIB";
        valor1 = carta_1_pib;
        valor2 = carta_2_pib;
        menor_vence = 0;
    } else if (atributoEscolhido == 4) {
        nomeAtributo = "Densidade Populacional";
        valor1 = carta_1_densidade;
        valor2 = carta_2_densidade;
        menor_vence = 1; /* menor vence */
    } else if (atributoEscolhido == 5) {
        nomeAtributo = "PIB per capita";
        valor1 = carta_1_pibpc;
        valor2 = carta_2_pibpc;
        menor_vence = 0;
    } else {
        printf("\n[Aviso] Atributo invalido. Usando Populacao por padrao.\n");
        nomeAtributo = "Populacao";
        valor1 = (float)carta_1_populacao;
        valor2 = (float)carta_2_populacao;
        menor_vence = 0;
    }

    printf("\n=========== Comparacao (Atributo: %s) ==========\n", nomeAtributo);
    /* Mostra os valores usados na comparação com rótulo amigável */
    printf("Carta 1 - %s (%s): %.2f\n", carta_1_cidade, carta_1_estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", carta_2_cidade, carta_2_estado, valor2);

    /* Decide vencedor com if/else (requisito do nivel) */
    if (valor1 == valor2) {
        printf("Resultado: Empate!\n");
    } else {
        int cartaVencedora = 0; /* 1 ou 2 */
        if (!menor_vence) {
            /* Regra padrao: MAIOR vence */
            if (valor1 > valor2) cartaVencedora = 1; else cartaVencedora = 2;
        } else {
            /* Densidade: MENOR vence */
            if (valor1 < valor2) cartaVencedora = 1; else cartaVencedora = 2;
        }

        if (cartaVencedora == 1) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta_1_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta_2_cidade);
        }
    }

    printf("===============================================\n");
    return 0;
}
