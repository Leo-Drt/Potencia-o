#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a, b, resultado;

    printf("Opera��o de potencia��o\n");
    printf("Digite o n�mero da base\n");
    scanf("%d",&a);

    printf("Digite agora o n�mero do expoente\n");
    scanf("%d",&b);

    resultado = pow(a,b);

    printf("O resultado da potencia��o � : %d",resultado);
}
