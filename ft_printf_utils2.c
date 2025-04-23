/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:32:51 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/23 16:49:40 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "libftprintf.h"

int	ft_putformat_per(void)
{
	ft_putchar('%');
	return (1);
}

int	ft_putformat_char(va_list ap)
{
	int	n;

	n  = va_arg(ap, int);
	ft_putchar(n);
	return (1);
}

int	ft_putformat_int(va_list ap)
{
	int	n;

	n  = va_arg(ap, int);
	ft_putnbr(n);
	return (ft_longlen(n));
}

int	ft_putformat_ptr(va_list ap)
{
	void	*ptr;

	ptr = va_arg(ap, void *);
	return (ft_putptr(ptr));
}

int	ft_putformat_str(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_putformat_hexlower(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	return (ft_puthex_lower(n));
}

int	ft_putformat_hexupper(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	return (ft_puthex_upper(n));
}

int	ft_putformat_uint(va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	return (ft_putuint(u));
}
