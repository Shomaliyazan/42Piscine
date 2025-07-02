/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:37:32 by yalshoma          #+#    #+#             */
/*   Updated: 2025/06/25 17:38:21 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
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
