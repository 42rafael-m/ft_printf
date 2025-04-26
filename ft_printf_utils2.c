/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:32:51 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/24 15:00:02 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "libftprintf.h"

int	ft_format_per(void)
{
	ft_putchar('%');
	return (1);
}

int	ft_format_char(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putchar(n);
	return (1);
}

int	ft_format_int(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr(n);
	return (ft_longlen(n));
}

int	ft_format_ptr(va_list ap)
{
	void	*ptr;

	ptr = va_arg(ap, void *);
	return (ft_putptr(ptr));
}

int	ft_format_str(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	if (str)
		return (ft_strlen(str));
	return (1);
}
