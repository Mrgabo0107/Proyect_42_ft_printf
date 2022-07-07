#include <stdio.h>

int main ()
{
	void	*p;
	char	*c;
	int	*i;

	p = NULL;
	c = NULL;
	i = NULL;
	printf("punteros void, char e int respectivamente todos apuntando a null: %p, %p, %p.\n", p, c, i);
	printf("los mismos punteros pero impresos con %%lld: %lld, %lld, %lld.\n", (unsigned long long)p, (unsigned long long)c, (unsigned long long)i);
	return (0);
}
