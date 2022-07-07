/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printers2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:05:18 by gamoreno          #+#    #+#             */
/*   Updated: 2022/07/06 20:04:54 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* imprime en pantalla un unsigned int en hexadecimal donde los caracteres alpha
 * se pueden elegir entre mayusculas o minusculas dependiendo si la clave es
 * 'X' o 'x' respectivamente. */

int	printf_hexas(unsigned int n, const char cle)
{
	if (n >= 16)
	{
		printf_hexas(n / 16, cle);
		printf_hexas(n % 16, cle);
	}
	else
	{
		if (n <= 9)
			printf_char(n + '0');
		else
		{
			if (cle == 'x')
				printf_char(n + 'a' - 10);
			if (cle == 'X')
				printf_char(n + 'A' - 10);
		}
	}
	return (cifras_hex(n));
}

/* imprime un puntero en hexadecimal despues de la convencion '0x' */

int	printf_ptr(unsigned long long pointer)
{
	int	cont;

	cont = 0;
	if (pointer == 0)
		return (printf_str("(nil)"));
	else
	{
		cont += printf_str("0x");
		cont += pr_ptr(pointer);
	}
	return (cont);
}
