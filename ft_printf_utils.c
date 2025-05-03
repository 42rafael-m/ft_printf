/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:01:06 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/28 20:17:36 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_check_format(char c, va_list ap)
{
	if (c == '%')
		return (ft_format_per());
	if (c == 'c')
		return (ft_format_char(ap));
	if (c == 'd')
		return (ft_format_int(ap));
	if (c == 'p')
		return (ft_format_ptr(ap));
	if (c == 's')
		return (ft_format_str(ap));
	if (c == 'x')
		return (ft_format_hexlower(ap));
	if (c == 'X')
		return (ft_format_hexupper(ap));
	if (c == 'u')
		return (ft_format_uint(ap));
	if (c == 'i')
		return (ft_format_int(ap));
	else
	{
		ft_putchar(c);
		return (1);
	}
}

int	ft_putptr(void *ptr)
{
	char				*hex;
	int					len;
	unsigned long long	address;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long long)ptr;
	hex = "0123456789abcdef";
	len = ft_unbr_base_len(address, 16) + 2;
	write(1, "0x", 2);
	ft_putunbr_base(address, hex);
	return (len);
}

int	ft_putuint(unsigned int n)
{
	char	c;
	int		len;

	len = ft_longlen(n);
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + 48;
	write (1, &c, 1);
	return (len);
}

int	ft_puthex_lower(unsigned int n)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	len = ft_nbr_base_len(n, ft_strlen(hex));
	ft_putnbr_base(n, hex);
	return (len);
}

int	ft_puthex_upper(unsigned int n)
{
	char	*hex;
	int		len;

	hex = "0123456789ABCDEF";
	len = ft_nbr_base_len(n, ft_strlen(hex));
	ft_putnbr_base(n, hex);
	return (len);
}
