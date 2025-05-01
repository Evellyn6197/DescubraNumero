#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int NumeroAleatorio;
int tentativa;
int contador=1;

srand(time(NULL));
NumeroAleatorio = rand() % 100 + 1; 

printf("ACERTE O NUMERO ENTRE 0 E 100\n");
printf("==============================\n");
printf("%d", NumeroAleatorio);

do{
    printf("%do TENTATIVA:", contador);
    scanf("%d", &tentativa);
    printf("\n==============================\n");

    if (NumeroAleatorio > tentativa)
    {
        printf("O NUMERO SORTEADO E MAIOR QUE %d\n", tentativa); 
    }
    else
    {
        if (NumeroAleatorio < tentativa)
        {
            printf("O NUMERO SORTEADO E MENOR QUE %d\n", tentativa);
        }
    }
    if (tentativa != NumeroAleatorio)
    { 
         contador++;
    }
}while(tentativa != NumeroAleatorio);

if (tentativa == NumeroAleatorio && contador == 1)
{
    printf ("PARABENS, VOCE ACERTOU NA %do TENTATIVA!\n", contador);
}
else
{
    printf ("PARABENS, VOCE ACERTOU EM %d TENTATIVAS!\n", contador);
}
 
}
