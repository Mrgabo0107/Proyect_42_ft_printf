/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:28:52 by gamoreno          #+#    #+#             */
/*   Updated: 2022/07/05 02:23:02 by gamoreno         ###   ########.fr       */
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
