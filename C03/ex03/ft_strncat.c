#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int main(){
	char dest[] = "wasup";
	char src[]= "folks of 42";
	unsigned int nb = 15;
	printf("%s\n", ft_strncat(dest, src, nb));
	return 0;
}
*/

