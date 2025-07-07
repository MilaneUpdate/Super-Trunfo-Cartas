#include <stdio.h>    // Biblioteca padrão para entrada e saída
#include <string.h>   // Biblioteca para manipulação de strings (usada para comparar atributos)

int main() {

    // COMPARANDO CARTAS DO SUPER TRUNFO

    // ==== DADOS DA CARTA 1 ====
    // Informações da primeira cidade/carta
    char estado1[] = "AL";                   // Estado da cidade
    char codigo1[] = "A01";                  // Código identificador da carta
    char cidade1[] = "Maceió";               // Nome da cidade
    int populacao1 = 1387920;                // População total
    float area1 = 510.655;                   // Área total em km²
    float pib1 = 27.5;                       // Produto Interno Bruto em bilhões
    int pontosTuristicos1 = 23;             // Número de pontos turísticos

    float densidade1 = populacao1 / area1;   // Cálculo da densidade populacional
    float pibPerCapita1 = pib1 / populacao1; // Cálculo do PIB per capita

    // ==== DADOS DA CARTA 2 ====
    // Informações da segunda cidade/carta
    char estado2[] = "CE";                   // Estado da cidade
    char codigo2[] = "C02";                  // Código identificador da carta
    char cidade2[] = "Fortaleza";            // Nome da cidade
    int populacao2 = 4284450;                // População total
    float area2 = 312.353;                   // Área total em km²
    float pib2 = 65.16;                      // Produto Interno Bruto em bilhões
    int pontosTuristicos2 = 23;             // Número de pontos turísticos

    float densidade2 = populacao2 / area2;   // Cálculo da densidade populacional
    float pibPerCapita2 = pib2 / populacao2; // Cálculo do PIB per capita

    // ==== IMPRESSÃO DAS CARTAS ====
    // Exibe as informações da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões/hab\n\n", pibPerCapita1);

    // Exibe as informações da Carta 2
    printf("=== Carta 2 ===\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões/hab\n\n", pibPerCapita2);

    // ==== ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO ====
    // Aqui o usuário pode alterar o atributo a ser comparado
    char atributoComparado[] = "densidade";  // Pode ser "populacao", "area", "pib", "densidade" ou "pibPerCapita"

    printf("=== Comparação de Cartas (Atributo: %s) ===\n", atributoComparado);

    // Variáveis auxiliares para armazenar os valores que serão comparados
    float valor1 = 0, valor2 = 0;

    // ==== SELEÇÃO DO ATRIBUTO ====
    // Atribui o valor correspondente ao atributo desejado
    if (strcmp(atributoComparado, "populacao") == 0) {
        valor1 = populacao1;
        valor2 = populacao2;
        printf("Carta 1 - %s (%s): %.0f habitantes\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.0f habitantes\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "area") == 0) {
        valor1 = area1;
        valor2 = area2;
        printf("Carta 1 - %s (%s): %.3f km²\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.3f km²\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "pib") == 0) {
        valor1 = pib1;
        valor2 = pib2;
        printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "densidade") == 0) {
        valor1 = densidade1;
        valor2 = densidade2;
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "pibPerCapita") == 0) {
        valor1 = pibPerCapita1;
        valor2 = pibPerCapita2;
        printf("Carta 1 - %s (%s): %.6f bilhões/hab\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.6f bilhões/hab\n", cidade2, estado2, valor2);
    } else {
        // Caso o atributo informado não seja reconhecido
        printf("Atributo de comparação inválido.\n");
        return 1;  // Encerra o programa com erro
    }

    // ==== COMPARAÇÃO E RESULTADO ====
    // Define a regra de comparação dependendo do atributo
    if (strcmp(atributoComparado, "densidade") == 0) {
        // Para densidade: menor valor vence
        if (valor1 < valor2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (valor2 < valor1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    } else {
        // Para os demais atributos: maior valor vence
        if (valor1 > valor2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (valor2 > valor1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }

    // ========== FIM ==========
    printf("\n=== Fim do Programa ===\n");

    return 0;  // Finaliza o programa com sucesso
}