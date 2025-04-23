#include "libftprintf.h"
#include <stdio.h>


int     main(void)
{
        char    c = 1241233;
	char	*u = 123121;
	char	str[5] = {'H', -12123123123, 98, '\0', 'c'};

	ft_printf("prueba %%c = %c; prueba %%d = %d; prueba %%p = %p, prueba %%s = %s, prueba %%x =  %x, prueba %%X =  %X, prueba %%u = %u", c, c, u, str, u, u, u);
	printf("prueba %%c = %c; prueba %%d = %d; prueba %%p = %p, prueba %%s = %s, prueba %%x =  %x, prueba %%X =  %X, prueba %%u = %u", c, c, u, str, u, u, u);
  	write(1, "\n", 1);
}
