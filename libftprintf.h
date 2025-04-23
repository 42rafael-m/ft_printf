/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:46:21 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/23 12:56:00 by rafael-m         ###   ########.fr       */
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
void	ft_puthex_lower(unsigned int n);
void    ft_puthex_upper(unsigned int n);

# endif
