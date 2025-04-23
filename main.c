#include "libftprintf.h"
#include <stdio.h>


int     main(void)
{
        char    c = 'a';
	unsigned int	u = 123;
	char	*str = "HOLA";

	ft_printf("prueba %%c = %c; prueba %%d = %d; prueba %%p = %p, prueba %%s = %s, prueba %%x =  %x, prueba %%X =  %X, prueba %%u = %u", c, c, &c, str, u, u, u);
	printf("prueba %%c = %c; prueba %%d = %d; prueba %%p = %p, prueba %%s = %s, prueba %%x =  %x, prueba %%X =  %X, prueba %%u = %u", c, c, &c, str, u, u, u);
  	write(1, "\n", 1);
}
