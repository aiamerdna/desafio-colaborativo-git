/******************************************************************************

Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem correspondente 
“Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;
    double result1;
    double result2;

    
    printf("insira o primeiro coeficiente: ");
    scanf("%lf", &A);
    
     printf("insira o segundo elemento: ");
    scanf("%lf", &B);
    
     printf("insira o terceiro coeficiente: ");
    scanf("%lf", &C);
    
    double delta;
    delta=((B*B)-4*A*C);
    double raiz=sqrt(delta);
    result1=(-B+raiz)/(2*A);
    result2=(-B-raiz)/(2*A);
    
    if (delta<0)
    {
    printf("Impossivel Calcular");
    }
    else
    {
    printf("R1 = %.5lf\n", result1);
    printf("R2 = %.5lf", result2);
    }
    return 0;
}
