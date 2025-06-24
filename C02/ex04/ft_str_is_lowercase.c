#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lowercase;

	i = 0;
	lowercase = 1;
	while (str[i] != '\0')
	{	
		lowercase = 0; 
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			lowercase = 1;
		}
		else
			break;
		i++;
	}
	return (lowercase);
}
/*
int	main(void)
{	
	printf("'hello' %d\n", ft_str_is_lowercase("hello"));
	printf("'Hello' %d\n", ft_str_is_lowercase("Hello"));
	printf("'hello123' %d\n", ft_str_is_lowercase("hello123"));
	printf("'hello!' %d\n", ft_str_is_lowercase("hello!"));
	return 0;
}
*/
