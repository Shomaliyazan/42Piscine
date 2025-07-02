#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(dest);
	k = ft_strlen(src);
	if (j >= size)
		return (k + size);
	while (src[i] != '\0' && j + i < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (j + k < size)
		dest[j + i] = '\0';
	return (j + k);
}
/*
int main()
{
	char dest[] = "Hello people";
	char src[] = "and fellaw programmers";
	unsigned int size = 25;
	printf("%d\n",ft_strlcat(dest, src, size));
	return 0;
}
*/
