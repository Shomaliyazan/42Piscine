/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:55:51 by yalshoma          #+#    #+#             */
/*   Updated: 2025/07/02 23:20:30 by yalshoma          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9')
			&& (str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			i++;
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
	}
	return (str);
}
/*
int	main(void)
{
    char test[] = "hi, how are you? 42words forty-two; fifty+and+one";
    printf("Before: %s\n", test);
    printf("After:  %s\n", ft_strcapitalize(test));
    return 0;
}*/
