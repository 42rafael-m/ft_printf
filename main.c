#include "libftprintf.h"
#include <stdio.h>

int	main()
{
	char	*s = "Hola";
	int	len;

	len = ft_printf("s = %s\n", s);
	ft_printf("len s = %i\n");
	len = printf("s = %s\n", s);
        ft_printf("len s = %i\n");

	len = ft_printf("p = %p\n", &s);
        ft_printf("len p = %i\n");
	len = printf("s = %s\n", s);
        ft_printf("len s = %i\n");

	len = printf("d = %d\n", &s);
        ft_printf("len s = %i\n");
	len = printf("d = %d\n", &s);
        ft_printf("len s = %i\n");

	len = ft_printf("i = %i\n", -123.34);
        ft_printf("len i = %i\n");
	len = printf("i = %i\n", -123.34);
        ft_printf("len i = %i\n");

	len = ft_printf("x = %x\n", &s);
        ft_printf("len x = %i\n");
	len = printf("i = %i\n", -123.34);
        ft_printf("len i = %i\n");

	len = ft_printf("X = %X\n", &s);
        ft_printf("len X = %i\n");
	len = ft_printf("X = %X\n", &s);
        ft_printf("len X = %i\n");

	len = ft_printf("u = %u\n", -123.43);
        ft_printf("len s = %i\n");
	len = printf("u = %u\n", -123.43);
        ft_printf("len s = %i\n");
}
