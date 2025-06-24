#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_print_memory_line(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 8)
	{
		ft_putchar('0');
		i++;
	}
	ft_putchar(':');
	ft_putchar(' ');

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_hex(addr[i]);
		else
			write(1, "  ", 2);

		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}

	i = 0;
	while (i < 16 && i < size)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (addr);
	i = 0;
	while (i < size)
	{
		ft_print_memory_line((unsigned char *)addr + i, size - i);
		i += 16;
	}
	return (addr);
}

/*
int	main(void)
{
	char	str[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\nlol.lol\n \0";
	ft_print_memory(str, sizeof(str));
	return (0);

}
*/
