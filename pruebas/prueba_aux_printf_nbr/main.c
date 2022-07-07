#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int main ()
{
	long int	i;
	int	j;

	i = -1 * (long int)INT_MIN;
	j = INT_MAX;
	printf("INT_MIN = %d \n INT_MAX = %d\n", INT_MIN, INT_MAX);
	printf("cifras de INT_MIN (sin el '-') = %d\n", cifras(i));
	printf("cifras de INT_MAX = %d\n", cifras(j));
	printf("la potencia maxima de INT_MIN (sin el '-') = %d\n", (int)potencia(cifras(i)));
	printf("la potencia maxima de INT_MAX = %d\n", (int)potencia(cifras(j)));
	printf("primera cifra INT_MIN = %d\n", (int)(i / potencia(cifras(i))));
	printf("primera cifra INT_MAX = %d\n", (int)(j / potencia(cifras(j))));
	printf("segunda cifra INT_MIN = %d\n", (int)(i / (potencia(cifras(i)) / 10)));
	printf("primera cifra INT_MAX = %d\n", (int)(j / (potencia(cifras(j)) / 10)));
	return (0);
}
