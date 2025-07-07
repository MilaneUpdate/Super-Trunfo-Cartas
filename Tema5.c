#include <stdio.h>

#define TAM_TABULEIRO 10  // Tamanho fixo do tabuleiro (10x10)
#define TAM_NAVIO 3       // Tamanho fixo de cada navio
#define AGUA 0            // Representação da água no tabuleiro
#define NAVIO 3           // Representação do navio no tabuleiro

int main() {

    // POSICIONANDO NAVIOS NO TABULEIRO (BATALHA NAVAL)
 

    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];                   // Declaração de um tabuleiro 10x10

    // 1. Inicializar todas as posições do tabuleiro com água (0)
    for (int i = 0; i < TAM_TABULEIRO; i++) {                       // Loop para cada linha do tabuleiro
        for (int j = 0; j < TAM_TABULEIRO; j++) {                   // Loop para cada coluna do tabuleiro
            tabuleiro[i][j] = AGUA;                                 // Inicialização da posição com água (0)
        }
    }

    // 2. Definir coordenadas iniciais dos navios (dentro dos limites)
    int linhaH = 2;                                                 // Linha do navio horizontal
    int colH   = 4;                                                 // Coluna inicial do navio horizontal

    int linhaV = 5;                                                 // Linha inicial do navio vertical
    int colV   = 7;                                                 // Coluna do navio vertical

    // 3. Validar limites do tabuleiro para navio horizontal
    if (colH + TAM_NAVIO <= TAM_TABULEIRO) {
        // Validar se não há sobreposição com navio vertical
        int sobreposicao = 0;                                       // Variável para verificar sobreposição
        for (int i = 0; i < TAM_NAVIO; i++) {                       // Loop para verificar sobreposição
            if (linhaH == linhaV + i && colH + i == colV) {         // Verifica se há sobreposição
                sobreposicao = 1;                                   // Se houver sobreposição, marca como verdadeiro
                break;                                              // Sai do loop, se encontrar sobreposição
            }
        }

        if (!sobreposicao) {                                        // Se não houver sobreposição
            for (int i = 0; i < TAM_NAVIO; i++) {                   // Posicionar navio horizontal      
                tabuleiro[linhaH][colH + i] = NAVIO;                // Atribui o valor do navio (3) nas posições correspondentes
            }
        } else {                                                    // se houver sobreposição
            printf("Erro: Sobreposição detectada ao posicionar navio horizontal.\n");  // Exibe mensagem de erro
            return 1;                                               // Retorna 1 para indicar erro
        }
    } else {                                                        // Se o navio horizontal ultrapassar os limites do tabuleiro
        printf("Erro: Navio horizontal fora dos limites do tabuleiro.\n"); // Exibe mensagem de erro
        return 1;                                                   // Retorna 1 para indicar erro
    }

    // 4. Validar limites do tabuleiro para navio vertical 
    if (linhaV + TAM_NAVIO <= TAM_TABULEIRO) {                       // Verificar se o navio vertical cabe no tabuleiro
        int sobreposicao = 0;                                        // Variável para verificar sobreposição
        for (int i = 0; i < TAM_NAVIO; i++) {                        // Loop para verificar sobreposição
            if (tabuleiro[linhaV + i][colV] == NAVIO) {              // Verifica se há sobreposição com navio horizontal
                sobreposicao = 1;                                    // Se houver sobreposição, marca como verdadeiro
                break;                                               // Sai do loop, se encontrar sobreposição
            }
        }

        if (!sobreposicao) {                                         // Se não houver sobreposição
            for (int i = 0; i < TAM_NAVIO; i++) {                    // Posicionar navio vertical      
                tabuleiro[linhaV + i][colV] = NAVIO;                 // Atribui o valor do navio (3) nas posições correspondentes
            }
        } else {                                                     // Se houver sobreposição
            printf("Erro: Sobreposição detectada ao posicionar navio vertical.\n");  // Exibe mensagem de erro
            return 1;                                                // Retorna 1 para indicar erro
        }
    } else {                                                         // Se o navio vertical ultrapassar os limites do tabuleiro
        printf("Erro: Navio vertical fora dos limites do tabuleiro.\n");   // Exibe mensagem de erro
        return 1;                                                    // Retorna 1 para indicar erro
    }

    // 5. Exibir o tabuleiro final
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n");                    // Exibe o título do tabuleiro
    for (int i = 0; i < TAM_TABULEIRO; i++) {                         // Loop para cada linha do tabuleiro
        for (int j = 0; j < TAM_TABULEIRO; j++) {                     // Loop para cada coluna do tabuleiro
            printf("%d ", tabuleiro[i][j]);                           // Imprime o valor da posição do tabuleiro (0 para água, 3 para navio)
        }
        printf("\n");                                                 // Pula para a próxima linha após imprimir uma linha completa do tabuleiro
    }

    return 0;                                                         // Retorno 0 para indicar que o programa terminou com sucesso
}