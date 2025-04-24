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
