/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:22:59 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/23 18:19:45 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte el principio de la cadena apuntada por str en un entero de tipo
 * int. str está en una base específica pasada como segundo argumento de la
 * función. Si un parámetro contiene un error, la función devuelve 0. Un error
 * puede ser:
	◦ la base está vacía o su tamaño es 1;
	◦ la base contiene dos veces el mismo carácter;
	◦ la base contiene los caracteres + o - o espacios; */

static int	ft_pos_in_base(char pos, char *base)
{
	int	lg;
	int	i;

	i = 0;
	lg = 0;
	while (base[i])
	{
		if (pos == base[i])
			return (lg);
		lg++;
		i++;
	}
	return (-1);
}

static int	ft_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base)
		return (0);
	if (ft_strlen(base) == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;
	int	size_base;
	int	len;
	int	sign;

	sign = 1;
	r = 0;
	if (!base || ft_errors(base) || !str)
		return (0);
	size_base = ft_strlen(base);
	len = ft_strlen(str) - 1;
	if (*str == '-')
	{
		str++;
		len--;
		sign = -1;
	}
	while (*str && len >= 0)
	{
		r = r + (ft_pos_in_base(*str, base)) * (ft_power(size_base, len));
		str++;
		len--;
	}
	return (r * sign);
}
