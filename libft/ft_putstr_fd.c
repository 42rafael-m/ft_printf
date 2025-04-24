/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:51:25 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/24 14:26:54 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, s, ft_strlen(s));
	else
		write (fd, "\0", ft_strlen(s));
}
/*
int	main(void)
{
	int	fd = 1;

	ft_putstr_fd("", fd);
	write (1, "\n", 1);
}*/
