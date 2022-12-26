#include <stdio.h>

#define IMPAR 5
#define PAR 4

void main()
{
   int  vector [IMPAR] = {4, 6, 9, 10, 15};
   float vector1 [PAR] = {4, 6, 9, 10};
//  Depende lo quwe escojamos es lo que se hacen los contadores
//    int cont = PAR, cont1 = 0;
//    int cont = IMPAR, i, j;
    int selection,i , j;
    
    printf("El vector 1 consta de \n");
    for (int i = 0; i < IMPAR; i++)
    printf("\t %d\t",vector [i]);
    printf("\n");
    printf("El vector 2 consta de \n");
    for (int i = 0; i < PAR; i++)
    printf("\t %0.0f\t",vector1 [i]);
    printf("\n");
printf("Si desea calcular la median del vector #1, presione 1\nSi desea calcular la median del vector #2, presione 2\n");
scanf("%d", &selection);
switch (selection)
{
case 1/* constant-expression */:
    /* code */
    int cont = IMPAR, cont1;
    for (i = 0; i < IMPAR; i++)
    {
        cont--;
        int cont1 = 0;
            if (cont == i) 
                cont1++;
                        if (cont1 == 1)
                        {
                          printf("\n %d\n", vector [i]);
                        }
    }
    break;
case 2/* constant-expression */:
    /* code */
    cont = PAR, cont1 = 0;
    for (i = 0; i < PAR; i++)
     {
       cont--;
        if (cont == i + 1)
         {   cont1++;
            if (cont1 == 1)
             {
                printf("\n%0.0f\t %0.0f\n", vector1[i], vector1[i+1]);
                float mediana = (vector1[i] + vector1[i+1]) / 2;
                printf("\nLa mediana es %.2f\n", mediana);
             } 
         }
     }    
default:
    break;
}

}   