/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:40:52 by gamoreno          #+#    #+#             */
/*   Updated: 2022/07/07 01:25:02 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Funciones que imprimen en pantalla. */

#include "ft_printf.h"

/* imprime un caracter en pantalla y devuelve uno para servir como contador de
 * los caracteres impresos en pantalla */

int	printf_char(int c)
{
	return (write(1, &c, 1));
}

/* toma como parametro un puntero a una cadena de caracteres y devuelve su 
 * longitud mientras imprime sus caracteres en pantalla */

int	printf_str(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		printf_str("(null)");
		return (6);
	}
	else
	{
		while (s[i])
			i += (printf_char(s[i]));
	}
	return (i);
}

/* toma como parametro un entero y lo imprime en pantalla mientras cuenta sus
 * caracteres. */

int	printf_nbr(int n)
{
	long int	nbr;
	int			cont;
	int			pot;

	nbr = (long int)n;
	cont = 0;
	if (nbr < 0)
	{
		printf_char('-');
		nbr *= -1;
		cont++;
	}
	pot = (int)potencia(cifras(nbr));
	while (pot > 0)
	{
		printf_char((nbr / pot) + '0');
		nbr = (nbr - (nbr / pot) * pot);
		pot /= 10;
		cont++;
	}
	return (cont);
}

/* toma como parametro unsigned int y lo imprime en pantalla mientras cuenta sus
 * caracteres. */

int	printf_unbr(unsigned int n)
{
	long int	nbr;
	long int	pot;
	int			cont;

	nbr = (long int)n;
	cont = 0;
	pot = potencia(cifras(nbr));
	while (pot > 0)
	{
		printf_char((nbr / pot) + '0');
		nbr = (nbr - (nbr / pot) * pot);
		pot /= 10;
		cont++;
	}
	return (cont);
}
