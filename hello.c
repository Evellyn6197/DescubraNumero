#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int NumeroAleatorio;
    int tentativa;
    int contador=1;

    srand(time(NULL));
    NumeroAleatorio=rand()%100 + 1;

    printf("ACERTE O NUMERO ENTRE 1 E 100\n");
    printf("OBS: voce so tem SETE CHANCES para acertar\n");
    printf("------------------------------\n");


    while (contador<=7 && tentativa!=NumeroAleatorio)
    {
        printf("%do TENTATIVA:", contador);
        scanf("%d", &tentativa);
        printf("------------------------------\n");

        if (NumeroAleatorio < tentativa && contador < 7)
        {
            printf ("\nNUMERO SORTEADO E MENOR QUE %d\n", tentativa);
        }
        else{
            if (NumeroAleatorio > tentativa && contador < 7)
            {
                printf ("\nNUMERO SORTEADO E MAIOR QUE %d\n", tentativa);
            }
        }
        if (tentativa!=NumeroAleatorio)
        {
            contador++;
        }
        
    }
    
    if (tentativa == NumeroAleatorio && contador == 1)
    {
        printf ("\nPARABENS VOCE ACERTOU NA PRIMEIRA TENTATIVA");
    }
    else{
        if (tentativa == NumeroAleatorio && contador == 7)
        {
            printf("UFA, VOCE ACERTOU NA ULTIMA TENTATIVA");
        }
        else{
            if (tentativa == NumeroAleatorio)
            {
            printf("\nPARABENS VOCE ACERTOU EM %d TENTATIVAS", contador);
            }
        }
        
    }
    
    if (tentativa != NumeroAleatorio && contador>7)
    {
        printf("\nINFELIZMENTE SUAS CHANCES ACABARAM.\n");
        printf("O NUMERO SORTEADO ERA %d", NumeroAleatorio);
    }
            
        }
        
