#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
    {
	    if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		    return (0);
	i++;
    }
    return (1);
}
/*
int	main(void)
{
    printf("1. %d\n", ft_str_is_alpha("Hello"));
    printf("2. %d\n", ft_str_is_alpha("H3llo"));
    printf("3. %d\n", ft_str_is_alpha(""));
    printf("4. %d\n", ft_str_is_alpha("Hello!"));
    printf("5. %d\n", ft_str_is_alpha(" "));
    return (0);
}
*/
