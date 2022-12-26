#include<stdio.h>

#define IMPAR 5
#define PAR 4
void main ()
{
int cont = PAR, cont1 = 0;
float vector [PAR] = {4, 6, 9, 10};

    for (int i = 0; i < PAR; i++)
     {
        cont--;
        if (cont == i + 1)
         {   cont1++;
            if (cont1 == 1)
             {
                printf("\n%0.0f\t %0.0f\n", vector[i], vector[i+1]);
                float mediana = (vector[i] + vector[i+1]) / 2;
                printf("\nLa mediana es %.2f\n", mediana);
             } 
         }
     }    

}
