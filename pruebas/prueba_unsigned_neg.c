#include <stdio.h>
#include <limits.h>

int main()
{
	int	i;

	i = -52;
	printf("dado que UINT_MAX = %u\n__________________________________", UINT_MAX);
	while (i < 100)
	{
	printf("unsigned de %d = %u\n", -i, -i);
	i++;
	}
}
