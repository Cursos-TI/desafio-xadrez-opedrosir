#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover. 

    // Variaveis constantes sao definidas com o modificador 'const'. Ou seja, const int <nome> = <valor>;
    // Exemplo: const int bishopMove = 7; (para o bispo, que pode se mover até 7 casas em diagonal) 

    const int RbishopMove = 7, queenMove = 7; // movimentações maximas de cada peça possiveis em uma rodada, levando em conta que o tabuleiro é 8x8
    int LtowerMove = 7; // essa variavel nao deve ser const, pois sera modificada durante o loop
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Utilizando for
    for (int rb = 1; rb <= RbishopMove; rb++) { // Sem muitos detalhes de uma partida, este loop vai apenas simular o máximo de casas que o bispo pode andar
        printf("Movimento do Bispo: Esquerda Cima\n", rb); // 'Esquerda Cima' para representar movimento a diagonal superior esquerda
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Utilizando while
    while (LtowerMove > 0) { // Enquanto a torre ainda puder se mover, ela vai se mover para a direita, especificado no printf
        printf("Movimento da Torre: Direita\n"); // 'Direita' para representar o movimento horizontal
        LtowerMove--; // Decrementa o número de movimentos restantes
        }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // utilizando do-while
    int qmove = 1; // variavel para execução do movimento da Rainha
    do { 
        qmove++; // incremento para efeito de movimentação de casas
        printf("Movimento da Rainha: Esquerda\n"); // Terminal imprime a movimentação apos incremento, e apos avaliação e incremento novamente
    } while (qmove <= queenMove); // Condição que avalia a quantidade de casas restantes, com base na movimentação maxima possivel

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
