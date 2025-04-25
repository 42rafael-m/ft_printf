/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:46:21 by rafael-m          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/04/25 13:06:10 by rafael-m         ###   ########.fr       */
=======
/*   Updated: 2025/04/24 16:22:22 by rafael-m         ###   ########.fr       */
>>>>>>> bdd26049de91265e73c30f6b399da466aa54ba40
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
int	ft_putformat_per(void);
int	ft_putformat_char(va_list ap);
int	ft_putformat_int(va_list ap);
int	ft_putformat_ptr(va_list ap);
int	ft_putformat_str(va_list ap);
int	ft_putformat_hexlower(va_list ap);
int	ft_putformat_hexupper(va_list ap);
int	ft_putformat_uint(va_list ap);

#endif
