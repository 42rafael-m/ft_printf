void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	ft_neg(long n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		return (1);
	}
	return (0);
}

size_t	ft_longlen(long n)
{
        size_t	lg;

        lg = 1;
	if (n < 0)
	{
		n = -n;
		lg++;
	}
	while (n > 9)
	{
		n = n / 10;
		lg++;
	}
	return (lg);
}

static int	ft_errors(char *base)
{
	unsigned int	i;
	unsigned int	j;
	size_t		base_len;

	i = 0;
	j = 0;
	base_len = ft_strlen(base);
	if (base_len <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_nbr_base_len(long nbr, size_t base_len)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

void	ft_putnbr_base(long nbr, char *base)
{
	size_t		base_len;
	int		nbr_len;
	unsigned char	*result;
	int	neg;

	if (!base || ft_errors(base))
		return ;
	base_len = ft_strlen(base);
	neg = ft_neg(nbr);
	nbr_len = ft_nbr_base_len(nbr, base_len) - neg;
	if (neg)
		nbr = -nbr;
	result = (unsigned char *)ft_calloc(nbr_len + 1, sizeof(char));
	if (!result)
		return ;
	if (nbr == 0)
		result[0] = base[0];
	while (nbr > 0)
	{
		result[--nbr_len] = base[nbr % base_len];
		nbr = nbr / base_len;
	}
	write(1, result, ft_strlen((char *)result));
	free (result);
}

void	ft_putptr(void *ptr)
{
	char    *hex;
	unsigned long	nbr;

	nbr = (unsigned long)ptr;
	hex = "0123456789abcdef";
	write(1, "0x", 2);
	ft_putnbr_base(nbr, hex);
	
}

void	ft_putnbr(int n)
{
	int	nbr;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	nbr = n;
	if (nbr > 9)
		ft_putnbr(n / 10);
	nbr = (n % 10) + 48;
	write (1, &nbr, 1);
}

void	ft_putuint(unsigned int n)
{
	int	nbr;

	nbr = n;
	if (nbr > 9)
		ft_putnbr(n / 10);
	nbr = (n % 10) + 48;
	write (1, &nbr, 1);
}

void	puthex_lower(int n)
{
	unsigned char   *hex;

	hex = "0123456789abcdef";
	ft_putnbr_base(nbr, hex);
}

void    puthex_upper(int n)
{
	unsigned char	*hex;

	hex = "0123456789ABCDEF";
	ft_putnbr_base(nbr, hex);
}
