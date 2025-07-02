#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "World!";
	printf("%s", ft_strcat(dest, src));
}
*/
