#include "libftprintf.h"
#include <stdio.h>


int     main(void)
{
        char    c = 'a';
	int	u = 1231;
	char	str[5] = {'H', 113, 98, '\0', 'c'};
	int	len;

	len = ft_printf("prueba %%c = %c; prueba %%d = %d; prueba %%p = %p, prueba %%s = %s, prueba %%x =  %x, prueba %%X =  %X, prueba %%u = %u", c, c, &c, str, u, u, u);
	write(1, "\n", 1);
	ft_printf("len = %d", len);
	write(1, "\n", 1);
	len = printf("prueba %%c = %c; prueba %%d = %d; prueba %%p = %p, prueba %%s = %s, prueba %%x =  %x, prueba %%X =  %X, prueba %%u = %u", c, c, &c, str, u, u, u);
	write(1, "\n", 1);
	ft_printf("len = %d", len);
  	write(1, "\n", 1);
}
