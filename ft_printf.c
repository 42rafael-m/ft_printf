/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:58 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/22 20:55:16 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	ft_printf(char const *format, ...)
{
	int	i;
	va_list ap;
        va_start(ap, format);
	int	n;
	void	*ptr;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, "%", 1);
				i += 2;
			}
			if (format[i + 1] == 'c')
			{
				n = va_arg(ap, int);
				ft_putchar(n);
				i += 2;
			}
			if (format[i + 1] == 'd')
			{
				n = va_arg(ap, int);
				ft_putnbr(n);
				i += 2;
			}
			if (format[i + 1] == 'p')
			{
				ptr = va_arg(ap, void *);
				ft_putptr(ptr);
				i += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			i++;
		}
	}
	va_end(ap);
	return (0);
}
