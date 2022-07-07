/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:28:52 by gamoreno          #+#    #+#             */
/*   Updated: 2022/07/06 20:03:40 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* funciones auxiliares que sirven a los printers */

#include "ft_printf.h"

/* calcula el numero de cifras del unsigned int pasado por parametro. */

int	cifras(unsigned long int n)
{
	unsigned long int	poten;
	unsigned long int	cpy;
	int					cont;

	cpy = n;
	poten = 1;
	cont = 1;
	while (cpy / (10 * poten) > 0)
	{
		cont++;
		poten *= 10;
	}
	return (cont);
}

/* eleva 10 a la potencia c - 1 para calcular la mayor potencia de 10 en la que
 * se puede dividir un numero en la funcion ft_pritnf_nbr sin que de cero.*/

long int	potencia(int c)
{
	long int	pot;
	int			i;

	pot = 1;
	i = 0;
	while (i < c)
	{
		pot *= 10;
		i++;
	}
	return (pot / 10);
}

/* cuenta las cifras que saldran en pantalla al transformar un unsigned int 
 * a hexadecimal. */

int	cifras_hex(unsigned int n)
{
	int				len;
	unsigned int	cpy;

	cpy = n;
	len = 0;
	if (n == 0)
		return (1);
	while (cpy != 0)
	{
		len++;
		cpy /= 16;
	}
	return (len);
}

/* cuenta las cifras que saldran en pantalla al tansformar un unsigned long 
 * long a hexadecimal. */

int	cifras_ptr(unsigned long long pointer)
{
	int					len;
	unsigned long long	cpy;

	cpy = pointer;
	len = 0;
	while (cpy != 0)
	{
		len++;
		cpy /= 16;
	}
	return (len);
}

/* imprime en pantalla la parte de la direccion de un puntero en hexadecimal
 * que esta despues de la convencion "0x". */

int	pr_ptr(unsigned long long pointer)
{
	if (pointer >= 16)
	{
		pr_ptr(pointer / 16);
		pr_ptr(pointer % 16);
	}
	else
	{
		if (pointer <= 9)
			printf_char(pointer + '0');
		else
			printf_char(pointer + 'a' - 10);
	}
	return (cifras_ptr(pointer));
}
