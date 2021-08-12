#include <stdio.h>
#include <stdlib.h>
// Celsius
float v2 (float x)   {


x=x*1.8+32;

 return x;


}
//Firenhit
float v1 (float b)   {


b=(b-32)/1.0;

 return b;


}

int main(void)   {

float a, b;

        printf("Quantos Graus Farenhit ta fazendo?:");
        scanf("%f", &a);

a=v1(a);

        printf("Esta fazendo %.1f Graus Celsius!", a);

        printf("\nE qauantos Farenhit faz Nos EUA?:  ");
        scanf("%f", &b);

b=v2(b);

        printf("esta fazendo %.1f Graus Farenhit nos EUA", b);




return 0;

}

