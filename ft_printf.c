/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:58 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/25 16:44:13 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			len += ft_check_format(*(format + 1), ap);
			format += 2;
		}
		else
		{
			ft_putchar(*format);
			format++;
			len++;
		}
	}
	va_end(ap);
	return (len);
}
