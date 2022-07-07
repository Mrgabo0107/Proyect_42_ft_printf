#include <stdarg.h>
#include <stdio.h>
#include <string.h>
 /* Un pequeno ensayo para saber como hacer el printf */

int	print(char *codificadores, ...)
{
	va_list	args;
	int	i;
	int	number_arg;
	int	curr_int;
	char	*curr_str;
	int	curr_char;

	i = 0;
	number_arg = strlen(codificadores);
	va_start(args, codificadores);
	curr_int = 0;
	curr_str = NULL;
	curr_char = 0;
	while (i < number_arg)
	{
		if (codificadores[i] == 'd')
		{
			curr_int = va_arg(args, int);
			printf("%d\n", curr_int);
		}
		else if (codificadores[i] == 's')
		{
			curr_str = va_arg(args, char*);
			printf("%s\n", curr_str);
		}
		else if (codificadores[i] == 'c')
		{
			curr_char = va_arg(args, int);
			printf("%c\n", curr_char);
		}
		i++;
	}
	va_end(args);
	return (strlen(codificadores));
}

int main()
{
	int	control;

	control = print("dscsd", -8, "Hola", 'e', "mundo", 1000);
	printf("return = %d\n", control);
	return(0);
}
