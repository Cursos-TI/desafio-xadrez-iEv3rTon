#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/*
    Loop de impressao
    Argumentos: 
    - numero: quantidade de repetiçoes
    - direcao: nome da direçao do movimento
*/
void moverTorres(int numero, char* direcao) { 
    if (numero > 0) {
        printf("%s \n", direcao);
        moverTorres(numero -1, direcao);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Bispo: 5 casas na diagonal superior direita
    // Torre: 5 casas para a direita
    // Rainha: 8 casas para a esquerda

    printf("\nBispo se moveu para: \n");
    moverTorres(5, "Cima direita."); // executao loop de impressao recussivo

    printf("\nTorre se moveu para: \n");
    moverTorres(5, "Direita."); // executao loop de impressao recussivo

    printf("\nRainha se moveu para: \n");
    moverTorres(8, "Esquerda."); // executao loop de impressao recussivo

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n-------------------------");
    printf("\nCavalo se moveu para: \n");
    int cavaloMovimento01 = 0;
    while (cavaloMovimento01 < 1) { // apenas uma execuçao
        
        int cavaloMovimento02 = 0;
        for (int cavaloMovimento02 = 0; cavaloMovimento02 < 2; cavaloMovimento02++) // duas execuçoes
        {
            printf("Cima, ");
        };

        printf("Direita.\n");
        cavaloMovimento01++;
    };
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
