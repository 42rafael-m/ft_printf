/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:46:21 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/22 20:59:56 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
void	ft_putptr(void *ptr);
void	ft_putnbr(int n);
void	ft_putuint(unsigned int n);
void	puthex_lower(unsigned int n);
void    puthex_upper(unsigned int n);

# endif
