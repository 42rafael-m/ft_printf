/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:01:06 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/23 14:26:56 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <limits.h>

int	ft_putptr(void *ptr)
{
	char    *hex;
	unsigned long	nbr;
	int	len;

	if (!ptr)
	{
		write(1, "(nil)", 6);
		return (5);
	}
	nbr = (unsigned long)ptr;
	hex = "0123456789abcdef";
	len = ft_nbr_base_len(nbr, ft_strlen(hex)) + 2;
	write(1, "0x", 2);
	ft_putnbr_base(nbr, hex);
	return (len);
}

int	ft_putuint(unsigned int n)
{
	int	len;

	len = ft_longlen(n);
	ft_putnbr(n);
	return (len);
}

int	ft_puthex_lower(unsigned int n)
{
	char   *hex;
	int	len;

	hex = "0123456789abcdef";
	len = ft_nbr_base_len(n, ft_strlen(hex));
	ft_putnbr_base(n, hex);
	return (len);
}

int	ft_puthex_upper(unsigned int n)
{
	char	*hex;
	int	len;

	hex = "0123456789ABCDEF";
	len = ft_nbr_base_len(n, ft_strlen(hex));
	ft_putnbr_base(n, hex);
	return (len);
}
