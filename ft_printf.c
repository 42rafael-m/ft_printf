/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:58 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/23 17:25:49 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	ft_printf(char const *format, ...)
{
	int		i;
	va_list	ap;
	int		len;

	len = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			len += ft_check_format(format[i + 1], ap);
			i += 2;
			continue ;
		}
		else
			ft_putchar(format[i]);
		i++;
		len++;
	}
	va_end(ap);
	return (len);
}
