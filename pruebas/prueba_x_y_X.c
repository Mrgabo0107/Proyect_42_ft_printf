#include <stdio.h>
#include <limits.h>

int main()
{
	int	i;

	i = INT_MIN;
	printf("INT_MIN = %x  = %X, en formato 'x' y 'X' respectivamente\n", INT_MIN, INT_MIN);
	printf("INT_MAX = %x  = %X, en formato 'x' y 'X' respectivamente\n", INT_MAX, INT_MAX);
	printf("-------------------------------------------------\n");
	while (i < INT_MIN + 800000000)
	{
		printf("%d = %x  = %X, en formato 'x' y 'X' respectivamente\n", i, i, i);
		i += 100000000;
	}
	printf("-------------------------------------------------\n");
	printf("UINT_MAX = %x  = %X, en formato 'x' y 'X' respectivamente\n", UINT_MAX, UINT_MAX);
	printf("UINT_MAX - 1 = %x  = %X, en formato 'x' y 'X' respectivamente\n", UINT_MAX - 1, UINT_MAX - 1);
	return (0);
}
