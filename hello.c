
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int NumeroAleatorio;
    int tentativa;
    int contador=1;
    int chances;
    int dificuldade;
    int pontuacao=0;
    int jogarNovamente;

    srand(time(NULL));
    NumeroAleatorio=rand()%100 + 1;

    printf("ACERTE O NUMERO ENTRE 1 E 100\n");
    printf("------------------------------\n");
    printf("1 - FACIL\n2 - MEDIO\n3 - DIFICIL\n");
    printf("------------------------------\n");
    
    do
    {
        if (contador>1)
        {
            contador=1;
            tentativa=0;
            chances=0;
            NumeroAleatorio=rand()%100 + 1;    
        }
        
        
        printf("Escolha o NIVEL DE DIFICULDADE: ");
        scanf("%d", &dificuldade);
            while(dificuldade!=1 && dificuldade!=2 && dificuldade!=3)
        {
            printf("Opcao invalida\n----------------------------\nEscolha o NIVEL DE DIFICULDADE: ");
            scanf("%d", &dificuldade);
        }
        printf("------------------------------\n");

        switch (dificuldade)
        {
        case 1:
            printf("NIVEL FACIL\n");
            printf("VOCE TEM 10 CHANCES\n");
            printf("========================\n");
            chances=10;
            break;

        case 2:
            printf("NIVEL MEDIO\n");
            printf("VOCE TEM 7 CHANCES\n");
            printf("========================\n");
            chances=7;
            break;

        case 3:
            printf("NIVEL DIFICIL\n");
            printf("VOCE TEM 5 CHANCES\n");
            printf("========================\n");
            chances=5;
            break;   

        default:
            break;
        }

        while (contador<=chances && tentativa!=NumeroAleatorio)
        {
            printf("%do TENTATIVA:", contador);
            scanf("%d", &tentativa);

            if (NumeroAleatorio < tentativa && contador < chances)
            {
                printf ("NUMERO SORTEADO E MENOR QUE %d\n", tentativa);
                printf("-------------------------------\n");
            }
            else{
                if (NumeroAleatorio > tentativa && contador < chances)
                {
                    printf ("NUMERO SORTEADO E MAIOR QUE %d\n", tentativa);
                    printf("-------------------------------\n");
                }
            }
            if (tentativa!=NumeroAleatorio)
            {
                contador++;
            }
            
        }

        if (tentativa == NumeroAleatorio && contador == 1)
        {
            printf("---------------------------------------\n");
            printf ("PARABENS VOCE ACERTOU NA PRIMEIRA TENTATIVA\n");
            printf("***************************************\n");
        }
        else{
            if (tentativa == NumeroAleatorio && contador == chances)
            {
                printf("-------------------------------------\n");
                printf("UFA, VOCE ACERTOU NA ULTIMA TENTATIVA\n");
                printf("*************************************\n");
            }
            else{
                if (tentativa == NumeroAleatorio)
                {
                printf("-------------------------------------\n");
                printf("PARABENS VOCE ACERTOU EM %d TENTATIVAS\n", contador);
                printf("*************************************\n");
                }
            }
            
        }

        if (tentativa != NumeroAleatorio && contador>chances)
        {
            printf("----------------------------------\n");
            printf("INFELIZMENTE SUAS CHANCES ACABARAM.\n");
            printf("O NUMERO SORTEADO ERA %d\n", NumeroAleatorio);
            printf("*************************************\n");
        }

        if (tentativa == NumeroAleatorio)
        {
            pontuacao++;
        }

        printf("SUA PONTUACAO: %d", pontuacao);
        printf("\n0 - CANCELAR\n1 - JOGAR NOVAMENTE\n");
        printf("----------------------------------\n");
        scanf ("%d", &jogarNovamente);
        printf("**********************************\n");

        switch (jogarNovamente)
        {
        case 0:
            printf("\nOBRIGADO POR JOGAR!\n");
            break;

        case 1:
            jogarNovamente = 1;
            break;
        default:
            break;
        }
                    
    } while (jogarNovamente == 1);
    
        }
        
