#include<stdio.h>

#define IMPAR 5
#define PAR 4
void main ()
{
int cont = PAR, cont1 = 0;
int vector [PAR] = {4, 6, 9, 10};

    for (int i = 0; i < PAR; i++)
     {
        cont--;
        if (cont == i + 1)
         {   cont1++;
            if (cont1 == 1)
             {
                printf("\n%d\t %d\n", vector[i], vector[i+1]);
             } 
         }
     }    

}