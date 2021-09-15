#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int suma(int n1, int n2);
int restas(int n1, int n2);
int factorial(int n1, int n2, int fact, int i, int x);
int division(int n1, int n2, int x);
int multi(int n1, int n2, int i, int x);
int potencia(int n1, int n2, int i, int j);

int main()
{
srand(time(NULL));
int n1 = rand() % 10 + 1, n2 = rand() % 10 +1, opcion = 0, x = 0, i = 0, fact = 1, j = 1;
printf("Sus numeros son %d y %d\n", n1, n2);
printf("Que desea hacer con los numeros?\n");
printf(" 1 = suma\n 2 = resta\n 3 = factorial\n 4 = division\n 5 = multiplicacion\n 6 = potencia\n");
scanf("%d", &opcion);
do
{
    switch (opcion)
    {
        case 1:
        suma(n1, n2);
        break;
        case 2:
        restas(n1, n2);
        break;
        case 3:
        factorial(n1, n2, fact, i, x);
        break;
        case 4:
        division(n1, n2, x);
        break;
        case 5:
        multi(n1, n2, i, x);
        break;
        case 6:
        potencia(n1, n2, i, j);
        break;
    }
    system("pause");
    system("cls");
    printf("Quiere realizar otra operacion?\n");
    printf(" 1 = suma\n 2 = resta\n 3 = factorial\n 4 = division\n 5 = multiplicacion\n 6 = potencia\n Cualquier otro numero para salir\n");
    scanf("%d", &opcion);
}
while(opcion>=1&&opcion<=6);
system("pause");
return 0;
}
int suma(int n1, int n2)
{
    printf("La suma es %d\n", n1 + n2);
    return(n1 + n2);
}
int restas(int n1, int n2)
{
    printf("La resta es %d\n", n1 - n2);
    return(n1 - n2);
}
int factorial(int n1, int n2, int fact, int i, int x)
{
    for (i = 1; i <= n1; i++)
    {
        fact = fact*i;
    }
    printf("El factorial es %d\n", fact);
    return(fact);
}
int division(int n1, int n2, int x)
{
    while (n1 > 0 && n1 >= n2)
    {
        n1 = n1 - n2;
        x = x + 1;
    }
printf("La division es %d\n", x);
return(x);
}
int multi(int n1, int n2, int i, int x)
{
    for (i = 0; i < n2; i++)
    {
        x = x + n1;
    }
    printf("El producto es %d\n", x);
    return(x);
}
int potencia(int n1, int n2, int i, int j)
{
    for (i = 0;i < n2;i ++)
    {
        j = j * n1;
    }
    printf("La potencia es %d\n", j);
    return 0;
}
