/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:07:49 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/24 13:24:51 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <limits.h>
/*
Utilizando malloc(3), genera una string que represente el valor entero recibido
como argumento. Los números negativos tienen que gestionarse.

RETURN
La string que represente el número. NULL si falla la reserva de memoria.
*/

char	*ft_itoa(int n)
{
	char	*r;
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	r = (char *)ft_calloc(ft_longlen(nbr) + 1, sizeof(char));
	if (!r)
		return (NULL);
	if (n < 0)
		nbr = -nbr;
	while (nbr > 9)
	{
		r[i++] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	r[i] = nbr + 48;
	if (n < 0)
		r[++i] = '-';
	r[++i] = '\0';
	ft_rev_char_tab(r);
	return (r);
}
/*
int	main(void)
{
	char	*r = ft_itoa(-9);
	printf("ft = %s\n", r);
	printf("lg = %zu", ft_strlen(r));
	free (r);
}
*/
