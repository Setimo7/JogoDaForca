#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void forca(int estado){
    if(estado == 0){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 1){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 2){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|           |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 2){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|           |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 2){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|           |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 3){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|");
        printf("\n|            ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 4){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|-");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 5){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|-");
        printf("\n|          /");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if (estado == 6){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|-");
        printf("\n|          / \\");
        printf("\n|");
        printf("\n|    Perdeu o Jogo!");
        printf("\n-");
    }
}

int main(void){
    char p_sec[100];
    
    
        printf("JOGADOR 1:\n");
            printf("Informe a palavra secreta\n");
                gets(p_sec);
                    printf("A palavra secreta e: %s",p_sec);
                        printf("A palavra tem %lu caracteres", strlen(p_sec)-1);
            
                            for (int i = 0; i < 30; i++){
                                printf("\n");
                            }

        
        char p_tela[100]; //Palavra para tela
            strcpy(p_tela, p_sec);//copia de p_sec
        
                //Substitui letras por '_'
                for(int i=0;i<strlen(p_tela); i++){
                    p_tela[i]='_';
                }

    
        int erros = 0;
            while (1){
                //imprime a forca
                forca(erros);

                   //imprime os underlines '_' para cada letra da palavra
                    printf("\nAdivinhe:");
                        for(int i=0;i<strlen(p_tela); i++){
                            printf(" %c", p_tela[i]);
                        }

                //Recebe a letra
                printf("\n\nLetra");
                    char letra;
                        scanf(" %c", &letra);

            int sera_que_errou=1;
                //Verifica se a letra esta correta
                for(int i=0;i<strlen(p_tela); i++){
                    if(letra==p_sec[i]){
                        p_tela[i]=letra;
                            sera_que_errou=0;
                    }   
                }

            if (sera_que_errou==1){
                erros++;
            }
            
            //Verifica se o jogo acabou
            //Verifica se ganhou
            //Verifica se p_sec é igual a p_tela
            if(strcmp(p_tela,p_sec)==0){
                printf("\n\nEba, voce ganhou!!!:)");
                    break;
            }

            //Verifica se perdeu
            if (erros==6){
                forca(erros);
                    break;
            }
        }
    return 0;
}

//Fim
