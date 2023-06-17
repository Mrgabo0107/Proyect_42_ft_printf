/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:45:38 by gamoreno          #+#    #+#             */
/*   Updated: 2022/07/07 01:31:59 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parametros:	-Un string que contiene 'claves' que seran sustituidas por
 * 		 el contenido de ciertas variables.
 * 		-Las variables en el orden en el que seran sustituidas dado el
 * 		 orden de las claves en 'str'.
 *
 * Esta funcion imprime en pantalla el string 'str' sustituyendo cada variable
 * pasada en parametro de izquierda a derecha por su clave dentro del string
 * 'str' donde las claves y su contenido son el siguiente:
 * 			-%c:	imprime un solo caracter.
 * 			-%s:	imprime una cadena de caracteres.
 * 			-%p:	imprime un puntero void * en hexadecimal.
 * 			-%d:	imprime un numero en base diez.
 * 			-%i:	imprime un entero en base diez.
 * 			-%u:	imprime un numero en base diez positivo.
 * 			-%x:	imprime un numero hexadecimal (minusculas).
 * 			-%X:	imprime un numero hexadecimal (mayusculas).
 * 			-%%:	imprime un signo de porcentaje.
 *
 * Devuelve:	El numero de caracteres que fueron impresos en pantalla. */

#include "ft_printf.h"

/* Funcion principal */

int	ft_printf(const char *str, ...)
{
	int		cont;
	int		i;
	va_list	args;

	cont = 0;
	i = 0;
	va_start(args, str);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			cont += printf_clave(args, str[i + 1]);
			i++;
		}
		else
			cont += printf_char(str[i]);
		i++;
	}
	va_end(args);
	return (cont);
}

/* funcion que imprime dependiendo de la clave encontrada en 'str' y devuelve
 * la cantidad de caracteres impresos como int */

int	printf_clave(va_list args, char clave)
{
	int	len;

	len = 0;
	if (clave == 'c')
		len += printf_char(va_arg(args, int));
	else if (clave == 's')
		len += printf_str(va_arg(args, char *));
	else if (clave == 'p')
		len += printf_ptr(va_arg(args, unsigned long long));
	else if (clave == 'd' || clave == 'i')
		len += printf_nbr(va_arg(args, int));
	else if (clave == 'u')
		len += printf_unbr(va_arg(args, unsigned int));
	else if (clave == 'x' || clave == 'X')
		len += printf_hexas(va_arg(args, unsigned int), clave);
	else if (clave == '%')
		len += printf_char('%');
	return (len);
}
