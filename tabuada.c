/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9*/

#include <stdio.h>

int main()
{
    int num = 1;

    printf("---\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        
        if (i == 10)
        {
            i = 0;
            num++;
        }
        else if (num * i == 90)
        {
            break;
        }
    }

}