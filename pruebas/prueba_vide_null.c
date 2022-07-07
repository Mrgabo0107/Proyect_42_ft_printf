/* prueba al pasar el puntero NULL y una cadena vacia a printf */

#include <stdio.h>

int main ()
{
	char	*p;
	char	*p2;
	int	l;

	p = NULL;
	p2 = "";
	printf("puntero nulo pasado como string: ");
	l = printf("%s", p);
	printf("\n");
	printf("return: %d\n", l);
	printf("cadena vacia: ");
	l = printf("%s", p2);
	printf("\n");
	printf("return: %d\n", l);
	return (0);
}
