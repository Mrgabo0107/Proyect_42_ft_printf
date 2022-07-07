/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:51:35 by gamoreno          #+#    #+#             */
/*   Updated: 2022/07/05 02:11:56 by gamoreno         ###   ########.fr       */
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

/*----------------------------------auxiliares--------------------------------*/
int			cifras(unsigned long int n);
long int	potencia(int c);

#endif
