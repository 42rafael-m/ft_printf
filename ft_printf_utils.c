/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:01:06 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/22 19:57:07 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_putptr(void *ptr)
{
	char    *hex;
	unsigned long	nbr;

	nbr = (unsigned long)ptr;
	hex = "0123456789abcdef";
	write(1, "0x", 2);
	ft_putnbr_base(nbr, hex);
	
}

void	ft_putuint(unsigned int n)
{
	int	nbr;

	nbr = n;
	if (nbr > 9)
		ft_putnbr(n / 10);
	nbr = (n % 10) + 48;
	write (1, &nbr, 1);
}

void	puthex_lower(unsigned int n)
{
	char   *hex;

	hex = "0123456789abcdef";
	ft_putnbr_base(n, hex);
}

void    puthex_upper(unsigned int n)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	ft_putnbr_base(n, hex);
}
