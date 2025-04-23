/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:58 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/23 14:18:19 by rafael-m         ###   ########.fr       */
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
	unsigned	u;
	void	*ptr;
	char	*str;
	int	len;

	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, "%", 1);
				i += 2;
				len ++;
			}
			if (format[i + 1] == 'c')
			{
				n = va_arg(ap, int);
				ft_putchar(n);
				i += 2;
				len ++;
			}
			if (format[i + 1] == 'd')
			{
				n = va_arg(ap, int);
				len += ft_longlen(n);
				ft_putnbr(n);
				i += 2;
			}
			if (format[i + 1] == 'p')
			{
				ptr = va_arg(ap, void *);
				len += ft_putptr(ptr);
				i += 2;
			}
			if (format[i + 1] == 's')
			{
				str = va_arg(ap, char *);
				len += ft_strlen(str);
				ft_putstr_fd(str, 1);
				i += 2;
			}
			if (format[i + 1] == 'x')
			{
				n = va_arg(ap, int);
				len += ft_puthex_lower(n);
				i += 2;
			}
			if (format[i + 1] == 'X')
			{
				n = va_arg(ap, int);
				len += ft_puthex_upper(n);
				i += 2;
			}
			if (format[i + 1] == 'u')
			{
				u = va_arg(ap, unsigned int);
				len += ft_putuint(u);
				i += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			len++;
			i++;
		}
	}
	va_end(ap);
	return (len);
}
