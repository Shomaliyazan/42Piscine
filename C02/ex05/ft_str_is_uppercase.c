#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
	int uppercase;

	i = 0;
	uppercase = 1;
	while (str[i] != '\0')
	{
		uppercase = 0;
		if(str[i] >= 'A' && str[i] <= 'Z')
			uppercase = 1;
		else
			break;
		i++;
	}
	return (uppercase);
}
/*
int	main(void)
{
    printf("'HELLO' %d\n", ft_str_is_uppercase("HELLO"));
    printf("'Hello' %d\n", ft_str_is_uppercase("Hello"));
    printf("'HELLO123' %d\n", ft_str_is_uppercase("HELLO123"));
    printf("'HELLO!' %d\n", ft_str_is_uppercase("HELLO!"));
    return 0;
}
*/
