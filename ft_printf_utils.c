/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:01:06 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/23 13:37:49 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <limits.h>

void	ft_putptr(void *ptr)
{
	char    *hex;
	unsigned long	nbr;

	if (!ptr)
	{
		write(1, "(nil)", 6);
		return ;
	}
	nbr = (unsigned long)ptr;
	hex = "0123456789abcdef";
	write(1, "0x", 2);
	ft_putnbr_base(nbr, hex);	
}

void	ft_putuint(unsigned int n)
{
	char	c;

	if (n > 9)
		ft_putuint(n / 10);
	c = (n % 10) + 48;
	write (1, &c, 1);
}

void	ft_puthex_lower(unsigned int n)
{
	char   *hex;

	hex = "0123456789abcdef";
	ft_putnbr_base(n, hex);
}

void    ft_puthex_upper(unsigned int n)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	ft_putnbr_base(n, hex);
}
