#include "libftprintf.h"
#include <stdio.h>


int     main(void)
{
        char    c = 'a';
	ft_printf("prueba %%c = %c; prueba %%d = %d;/* prueba %%p = %p", c, c, &c);
  	write(1, "\n", 1);
        printf("&c = %p\n", &c);
}
