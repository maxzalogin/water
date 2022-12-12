#include <stdio.h>

int main (){
int a, b;
float c1 = 249.5, c2 = 0.05;
double c3 = 3e-23, res;

printf("\nCup: ");
scanf("%d", &a);
b = (c1 / c2) * a;
printf("Water drop: %d. Molecules: %.3e.\n\n", b, res = (c2 / c3) * b);
return 0;
}
