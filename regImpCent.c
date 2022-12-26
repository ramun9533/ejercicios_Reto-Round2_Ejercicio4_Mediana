#include<stdio.h>

#define IMPAR 5
#define PAR 4

void main()
{
   int  vector [IMPAR] = {4, 6, 9, 10, 15};
   int vector1 [PAR] = {4, 6, 9, 10};
   int cont = IMPAR, i, j;
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
    
}