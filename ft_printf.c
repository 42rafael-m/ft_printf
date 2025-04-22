/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:58 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/22 20:04:33 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int	ft_printf(char const *format, ...)
{
	int	i;
	va_list ap;
        va_start(ap, format);
//	char	c;
	int	n;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, "%", 1);
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			n = va_arg(ap, int);
			ft_putchar(n);
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'd')
		{
			n = va_arg(ap, int);
			ft_putnbr(n);
			i += 2;
		}
		write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (0);
}

int	main(void)
{
	char	c = 'a';
	ft_printf("prueba %%c = %c", c);
	write(1, "\n", 1);
	ft_printf("prueba %%d = %d", c);
	write(1, "\n", 1);
}
