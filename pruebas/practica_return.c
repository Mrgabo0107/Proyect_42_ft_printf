#include <stdio.h>

int main ()
{
	int	ret;
	int	i;

	i = 1;
	while (i < 10000)
	{
		ret = printf("los %d!\n", i);
		printf("tiene el return: %d\n", ret);
		i *= 10;
	}
		printf("un retorno a la linea:\n");
		ret = printf("\n");
		printf("tiene el return: %d\n", ret);
		printf("la cadena vacia:\n");
	return(0);
}
