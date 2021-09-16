#include <stdio.h>

/*autor: Beatriz Lima
  ano: 2021
  discipl�na: AlgProg2*/

/*Fa�a um programa que leia um valor e apresente o
n�mero de Fibonacci correspondente a este valor lido.
Lembre que os 2 primeiros elementos da s�rie de Fibonacci s�o 0 e 1 e
cada pr�ximo termo � a soma dos 2 anteriores a ele.
Todos os valores de Fibonacci calculados neste problema devem caber em um
inteiro de 64 bits sem sinal.
*/
int main()
{
    int t, n, i;
    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i <=60; i++)
        fib[i] = fib[i-1] + fib[i-2];

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }

    return 0;
}

