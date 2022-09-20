#include<stdio.h>

int main()
{


    int n=0,i=0,x=0;

    printf("Introduzca el valor del lado del hexagono: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("\nValor no valido.\n");
    }

    while(x<n)
    {
        i=x;
        while((n-i)>1)
        {
            printf(" ");     /*Dibuja los espacios laterales izdos del triángulo*/
            i++;
        }

        /*---------------------------------------Parte de arriba--------------------------------------------------------*/

        for(i=0; i<(n+x); i++)                                                  /*i==x e i==(n-1) son las diagonales.*/
        {
                                                                                /*x==0 es el lado horizontal superior*/
            if((i==x) || i==(n-1) || x==0 || x==(n-1) || i==0 || i==(n+(x-1)))  /*i==1 es el lado izquierdo*/
            {
                                                                                /*i==n+x-1 es el lado derecho.*/
                printf("* ");                                                   /*x==n-1 es la diagonal hprizontal*/
            }

            else if((i%2)==0 && i<x)      /*i<x significa que es lo anterior a la diagonal izda*/
            {
                printf("* ");             /*Además comprobamos que los lados de los hexágonos interiores están en posición par.*/
            }
            else if(i>x && i<n && x%2==0)
            {
                printf("* ");      /*rellenamos los lados superiores de los hexágonos interiores*/
            }
            else /*+++++++++++++LADOS PARES++++++++++++++++++++*/
            {
                                                             /*Para los lados que se encuentren enre la diagonal derecha y la horizontal*/
                if(i> n-1 && x%2==0 && i%2 !=0 && n%2==0 )   /*Se comprubena que en los hexágonos pares, los puntos de los lados de los hexágonos internos*/
                {
                    printf("* ");                            /*en las filas pares estan enposiciones impares y viceversa. (esto es al revés en impares.*/
                }
                else if(i>n-1 && x%2 !=0 && i%2 ==0 && n%2==0)
                {
                    printf("* ");
                }
                else  /*+++++++++++++++++++++++++++++++++LADOS IMPARES++++++++++++++++++++++++*/
                {

                    if(i>n-1 && x%2==0 && i%2 ==0 && n%2 !=0)
                    {
                        printf("* ");
                    }
                    else if(i>n-1 && x%2 !=0 && i%2 !=0 && n%2 !=0)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
        }
        printf("\n");
        x++; /*Cuanto más aumente x menor es i y por lo tanto entonces se van haciendo menos espacios por cada fila.*/
    }
    /*------------------------------------------------------------PARTE BAJA--------------------------------------------------------*/
    /*Todo lo realizado anteriormente será prácticamente igual pero en este caso cambiaremos el orden para que vaya "de mayor a menor" por así decirlo.*/

    x = (n - 1);
    while ((x > 0))
    {
        i = x;
        while (n - i > 0)
        {

            printf(" ");
            i++;
        }


        for (i = 1; i < (n + x); i++)
        {
            if (i == x || i == n || x == 0  || i == 1    || i== (n + (x - 1)))     /* i==x e i==n son las diagonales.*/
            {                                                                       /* i==1 es el lado izquierdo*/
                printf("* ");                                                     /* x==0 es el lado horizontal inferior..*/
            }                                                                      /*i==n+x-1 es el lado derecho.*/
            else if (i % 2 != 0  && i < x)
            {
                printf("* ");
            }
            else if (i > x && i < n && x % 2!= 0)
            {
                printf("* ");
            }
            else
            {

                if (i> n - 1 && x % 2 != 0 && i % 2 != 0 && n % 2 != 0)
                {
                    printf("* ");
                }
                else if (i > n - 1 && x % 2 == 0 && i % 2  == 0 && n % 2 != 0)
                {
                    printf("* ");
                }
                else
                {

                    if (i > n - 1 && x % 2 != 0 && i % 2 == 0 && n % 2 == 0)
                    {
                        printf("* ");
                    }
                    else if (i  > n - 1 && x % 2 == 0 && i % 2 != 0 && n % 2 == 0)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
        }

        printf("\n");
        x--;
    }

}


