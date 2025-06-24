#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
/*
int	main()
{
	char src[] = "Hello 42 C02";
	char dest[11];
	unsigned int n = 5;
	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}
*/
