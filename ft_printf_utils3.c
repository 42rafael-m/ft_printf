/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:31:37 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/24 15:02:02 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <limits.h>

int	ft_format_hexlower(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	return (ft_puthex_lower(n));
}

int	ft_format_hexupper(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	return (ft_puthex_upper(n));
}

int	ft_format_uint(va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	return (ft_putuint(u));
}

int	ft_ptr_errors(void *ptr)
{
	if ((long long)ptr == -LONG_MAX)
	{
		write(1, "0x8000000000000001", 19);
		return (18);
	}
	if ((unsigned long)ptr == ULONG_MAX)
	{
		write(1, "0xffffffffffffffff", 19);
		return (18);
	}
	if ((long)ptr == LONG_MIN)
	{
		write(1, "0x8000000000000000", 19);
		return (18);
	}
	if ((unsigned long)ptr == LONG_MAX)
	{
		write(1, "0x7fffffffffffffff", 19);
		return (18);
	}
	return (0);
}
