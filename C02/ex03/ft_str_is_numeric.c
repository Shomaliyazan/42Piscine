#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	num = 1;
	i = 0;
	while (str[i] != '\0')
	{
		num = 0;
		if (str[i] >= '0' && str[i] <= '9')
			num = 1;
		else
			break ;
		i++;
	}
	return (num);
}

/*
int	main(void)
{
	int	i = ft_str_is_numeric("1231231241234@");
	printf("%d", i);
}
*/
