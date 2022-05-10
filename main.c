#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a, b, resultado;

    printf("Operação de potenciação\n");
    printf("Digite o número da base\n");
    scanf("%d",&a);

    printf("Digite agora o número do expoente\n");
    scanf("%d",&b);

    resultado = pow(a,b);

    printf("O resultado da potenciação é : %d",resultado);
}
