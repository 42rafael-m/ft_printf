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
#include "ft_printf.h"
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

int	ft_unbr_base_len(unsigned long long nbr, size_t base_len)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

void	ft_putunbr_base(unsigned long long nbr, char *base)
{
	size_t	base_len;

	if (!base)
		return ;
	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_putunbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
}
