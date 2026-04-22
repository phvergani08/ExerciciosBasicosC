/*programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor;
    printf("Digite um valor em metros: ");
    scanf("%lf", &valor);

    // Decimetro = 0,1 metro
    // Centimetro = 0,01 metro
    // Milimetro = 0,001 metro

    double deci = valor * 10;
    double centi = valor * 100;
    double mili = valor * 1000;

    printf("Decimetro\t Centimetro\t Milimetro\n");
    printf("%.0lf\t\t %.0lf\t\t %.0lf\n", deci, centi, mili);

}