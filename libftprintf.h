/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:12:11 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/25 13:12:17 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putptr(void *ptr);
int	ft_putuint(unsigned int n);
int	ft_puthex_lower(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_check_format(char c, va_list ap);
int	ft_format_per(void);
int	ft_format_char(va_list ap);
int	ft_format_int(va_list ap);
int	ft_format_ptr(va_list ap);
int	ft_format_str(va_list ap);
int	ft_format_hexlower(va_list ap);
int	ft_format_hexupper(va_list ap);
int	ft_format_uint(va_list ap);
int	ft_ptr_errors(void *ptr);

#endif
