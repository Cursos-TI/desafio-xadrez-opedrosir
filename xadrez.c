#include <stdio.h>

// Definindo as funções para os movimentos das peças de xadrez

// Movimento da torre
void towerMove (int mtower) {
    for (;mtower > 0; mtower--) { // Enquanto o movimento da torre for maior que 0, continue. for nao necessariamente necessita da variavel de controle, mas é uma boa prática.
        printf("Direita\n");
    }
}

// Movimento do bispo
void bishopMove (int mbishop) {
    for (;mbishop > 0; mbishop--) {
        printf("Esquerda Cima\n");
    }
}

// Movimento da rainha
void queenMove (int mqueen) {
    for (;mqueen > 0; mqueen--) {
        printf("Esquerda\n");
    }
}

// Movimento do Cavalo
void horseMove (int mhorse) {
    for (int m_horse = 0; m_horse < 1; m_horse++) {
        int temp = 2;
        while (temp--) { // No caso do cavalo, o movimento é 2 casas em uma direção e 1 em outra, então usarei um loop while para controlar isso.
            printf("Baixo, ");
        }
        printf("Esquerda\n");
    }
}

// Função principal
int main() {
     
    int bishop = 5, queen = 4, tower = 7, horse = 1; // Variáveis de controle para os movimentos das peças

    // Estando na casa inicial, a Torre se move até 5 casas para a direita
    printf("Movimento da Torre:\n");
    towerMove(tower);

    // Estando na casa inicial, o bispo se move até 5 casas na diagonal esquerda
    printf("Movimento do Bispo:\n");
    bishopMove(bishop);

    // Estando na casa inicial, a Rainha se move até 4 casas à esquerda
    printf("Movimento da Rainha:\n");
    queenMove(queen);

    // Cavalo move 2 casas em uma direcao, depois 1 em direcao perpendicular
    printf("Movimento do Cavalo:\n");
    horseMove(horse);

    return 0;
}

// O codigo muda quase que 100% ao utilizar a recursividade, mas o mesmo conceito de movimento se mantém.
// O codigo com recursividade ficou mais limpo e mais fácil de entender.