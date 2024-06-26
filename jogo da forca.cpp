#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int level, erros, i, forca;
    char letra, jogarN;
    
    do {
        printf("Bem-vindo Jogador(a), vamos jogar um jogo da forca?\n");
        printf("===========================================\n");
        printf("=             Dificuldade                 =\n");
        printf("=      Aperte '1' para f�cil              =\n");
        printf("=      Aperte '2' para m�dio              =\n");
        printf("=      Aperte '3' para dif�cil            =\n");
        printf("===========================================\n");
        printf("Level: ");
        scanf("%d", &level);
        system("cls");
        
        switch (level) {
            case 1: {
                char palavra1[5] = "gato", resposta1[5] = "____"; 
                erros = 0; 
                forca = 1; 
                do {
                    printf("%s\n", resposta1); 
                    printf("\nDigite uma letra: "); 
                    scanf(" %c", &letra); 
                    printf("\n"); 
                    int acertou = 0; 
                    for (i = 0; i < 4; i++) {
                        if (letra == palavra1[i]) {
                            resposta1[i] = letra; 
                            acertou = 1;
                        }
                    }
                    if (!acertou) {
                        erros++; 
                        printf("Letra errada, n�mero de tentativas restantes: %d\n\n", 4 - erros);
                    }
                    if (strcmp(resposta1, palavra1) == 0 || erros == 4) {
                        forca = 0;
                    }
                } while (forca);
                if (!forca && erros < 4) {
                    printf("Vit�ria :)\n");
                } else {
                    printf("Perdeu :(\n");
                }
                break;
            }
            case 2: {
                char palavra2[9] = "policial", resposta2[9] = "________"; 
                erros = 0; 
                forca = 1; 
                do {
                    printf("%s\n", resposta2); 
                    printf("\nDigite uma letra: "); 
                    scanf(" %c", &letra); 
                    printf("\n"); 
                    int acertou = 0; 
                    for (i = 0; i < 8; i++) {
                        if (letra == palavra2[i]) {
                            resposta2[i] = letra; 
                            acertou = 1;
                        }
                    }
                    if (!acertou) {
                        erros++; 
                        printf("Letra errada, n�mero de tentativas restantes: %d\n\n", 4 - erros);
                    }
                    if (strcmp(resposta2, palavra2) == 0 || erros == 4) {
                        forca = 0;
                    }
                } while (forca);
                if (!forca && erros < 4) {
                    printf("Vit�ria :)\n");
                } else {
                    printf("Perdeu :(\n");
                }
                break;
            }
            case 3: {
                char palavra3[13] = "quadrilateto", resposta3[13] = "____________"; 
                erros = 0; 
                forca = 1; 
                do {
                    printf("%s\n", resposta3); 
                    printf("\nDigite uma letra: "); 
                    scanf(" %c", &letra); 
                    printf("\n"); 
                    int acertou = 0; 
                    for (i = 0; i < 12; i++) {
                        if (letra == palavra3[i]) {
                            resposta3[i] = letra; 
                            acertou = 1;
                        }
                    }
                    if (!acertou) {
                        erros++; 
                        printf("Letra errada, n�mero de tentativas restantes: %d\n\n", 4 - erros);
                    }
                    if (strcmp(resposta3, palavra3) == 0 || erros == 4) {
                        forca = 0;
                    }
                } while (forca);
                if (!forca && erros < 4) {
                    printf("Vit�ria :)\n");
                } else {
                    printf("Perdeu :(\n");
                }
                break;
            }
            default:
                printf("Escolha de n�vel inv�lida.\n");
                break;
        }
        
        printf("Deseja jogar novamente? 's'/'n': ");
        scanf(" %c", &jogarN);
        system("cls");
        
    } while (jogarN == 's');
    
    return 0;
}
