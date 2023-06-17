/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:51:35 by gamoreno          #+#    #+#             */
/*   Updated: 2022/07/06 19:56:00 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*----------------------------------Librerias---------------------------------*/
# include <stdarg.h>
# include <unistd.h>

/*----------------------------------Prototipos--------------------------------*/
int			ft_printf(const char *str, ...);
int			printf_clave(va_list args, char clave);

/*-----------------------------------Printers---------------------------------*/
int			printf_char(int c);
int			printf_str(char *s);
int			printf_nbr(int n);
int			printf_unbr(unsigned int n);
int			printf_por(int c);
int			printf_hexas(unsigned int n, const char cle);
int			printf_ptr(unsigned long long pointer);

/*----------------------------------auxiliares--------------------------------*/
int			cifras(unsigned long int n);
int			cifras_hex(unsigned int n);
int			pr_ptr(unsigned long long pointer);
long int	potencia(int c);

#endif
