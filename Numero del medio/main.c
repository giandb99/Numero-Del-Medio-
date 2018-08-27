#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;
    int numeroDelMedio;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    maximo=numeroUno;
    minimo=numeroUno;

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    if(numeroDos<minimo)
    {
        minimo=numeroDos;
    }
    else if(numeroDos>maximo)
        {
             maximo=numeroDos;
        }

    printf("Ingrese el tercer numero: ");
    scanf("%d", &numeroTres);

    if(numeroTres<minimo)
    {
        minimo=numeroTres;
    }
    else if(numeroTres>maximo)
        {
             maximo=numeroTres;
        }

    if (numeroUno>numeroDos &&numeroUno<numeroTres)
    {
        numeroDelMedio=numeroUno;
        printf("el numero medio es %d", numeroDelMedio);
    }
    else if(numeroDos>numeroUno && numeroDos<numeroTres)
        {
            numeroDelMedio=numeroDos;
            printf("el numero medio es %d", numeroDelMedio);
        }
        else if(numeroTres>numeroUno&&numeroTres<numeroDos)
            {
                numeroDelMedio=numeroTres;
                printf("el numero medio es %d", numeroDelMedio);
            }

   /* else
    {
        printf("%d es el numero medio",numero);
    }*/
    return 0;
}
