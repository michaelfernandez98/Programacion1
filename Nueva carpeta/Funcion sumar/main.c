#include <stdio.h>
#include <stdlib.h>
int sumar(int,int);

int main()
{
    int rta;
    int x=5;
    int y=7;

    rta=sumar(5,7);

    printf("La suma es %d\n\n",rta);
    return 0;
}

int sumar(int a,int b){
int resultado;
resultado=a+b;

return resultado;

}

