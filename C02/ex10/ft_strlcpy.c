#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
        src_len++;
		 if (size == 0)
        		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
        	dest[i] = src[i];
        	i++;
	}
	dest[i] = '\0';

	return (src_len);
}
/*
int	main(void)
{
	char	src[] = "Hello42345";
	char	dest[20] = "ousai";
	unsigned int res = ft_strlcpy(dest, src, 0);
	printf("%u", res);
	printf("\n");
	printf("%s", dest);
}
*/
