#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main ()
{
	int	ret;
	char	*s;
	int	i;
	int	j;
	int	k;

	/*-------------- test esperados---------------- */
	printf("-----------test con la funcion creada------------\n");
	/* test cadena sola */
	printf("test cadena sola:\n");	
	ret = ft_printf("Hola mundo\n");
	printf("return = %d\n\n", ret);

	/* test caracter*/
	printf("test %%c:\n");
	ret = ft_printf("Hola %cundo\n", 'm');
	printf("return = %d\n\n", ret);
	
	/* test string*/
	s = "Hola mundo";
	printf("test %%s\n");
	ret = ft_printf("%s\n", s);
	printf("return = %d\n\n", ret);

	/* test integers*/
	i = -12;
	j = 033;
	k = -042;
	printf("test %%d o %%i\n");
	printf("con d:\n");
	ret = ft_printf("%d, %d, %d, %d, max = %d, min = %d\n", 0, i, j, k, INT_MAX, INT_MIN);
	printf("return = %d\n\n", ret);
	printf("con i:\n");
	ret = ft_printf("%i, %i, %i, %i, max = %i, min = %i\n", 0, i, j, k, INT_MAX, INT_MIN);
	printf("return = %d\n\n", ret);

	/* test unsigned int */
	printf("test %%u\n");
	ret = ft_printf("%u, %u, max = %u, -1 = %u, -2 = %u, -3 = %u\n", j, 0, UINT_MAX, -1, -2, -3);
	printf("return = %d\n\n", ret);

	/* test symbol percentage */
	printf("test %%%%\n");
	ret = ft_printf("%% y %%%%\n");
	printf("return = %d\n\n", ret);

	/* test hexadecimales mayuscula y minuscula */
	printf("test %%x y %%X\n");
	ret = ft_printf("INT_MIN = %x = %X, INT_MAX = %x = %X, 0 = %x = %X, -12 = %x = %X, 8 = %x = %X\n", INT_MIN, INT_MIN, INT_MAX, INT_MAX, 0, 0, i, i, 8, 8);
	printf("return = %d\n\n", ret);

	/* test  pointer*/
	printf("test %%p\n");
	ret = ft_printf("NULL = %p, puntero a un int = %p, puntero a un char = %p\n", NULL, &i, s);
	printf("return = %d\n\n", ret);
	printf("----------------test con la original----------------\n\n");
	/* test cadena sola */
	printf("test cadena sola:\n");	
	ret = printf("Hola mundo\n");
	printf("return = %d\n\n", ret);

	/* test caracter*/
	printf("test %%c:\n");
	ret = printf("Hola %cundo\n", 'm');
	printf("return = %d\n\n", ret);
	
	/* test string*/
	s = "Hola mundo";
	printf("test %%s\n");
	ret = printf("%s\n", s);
	printf("return = %d\n\n", ret);

	/* test integers*/
	i = -12;
	j = 033;
	k = -042;
	printf("test %%d o %%i\n");
	printf("con d:\n");
	ret = printf("%d, %d, %d, %d, max = %d, min = %d\n", 0, i, j, k, INT_MAX, INT_MIN);
	printf("return = %d\n", ret);
	printf("con i:\n");
	ret = printf("%i, %i, %i, %i, max = %i, min = %i\n", 0, i, j, k, INT_MAX, INT_MIN);
	printf("return = %d\n\n", ret);

	/* test unsigned int */
	printf("test %%u\n");
	ret = printf("%u, %u, max = %u, -1 = %u, -2 = %u, -3 = %u\n", j, 0, UINT_MAX, -1, -2, -3);
	printf("return = %d\n\n", ret);

	/* test simbolo porcentaje */
	printf("test %%%%\n");
	ret = printf("%% y %%%%\n");
	printf("return = %d\n\n", ret);

	/* test hexadecimales mayuscula y minuscula */
	printf("test %%x y %%X\n");
	ret = printf("INT_MIN = %x = %X, INT_MAX = %x = %X, 0 = %x = %X, -12 = %x = %X, 8 = %x = %X\n", INT_MIN, INT_MIN, INT_MAX, INT_MAX, 0, 0, i, i, 8, 8);
	printf("return = %d\n\n", ret);

	/* test  pointer*/
	printf("test %%p\n");
	ret = printf("NULL = %p, puntero a un int = %p, puntero a un char = %p\n", NULL, &i, s);
	printf("return = %d\n\n", ret);
	/*-------------- test de errores--------------- */
	return (0);
}
