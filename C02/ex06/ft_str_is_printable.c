/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:41:43 by yalshoma          #+#    #+#             */
/*   Updated: 2025/06/25 17:41:45 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
    printf("'Hello' %d\n", ft_str_is_printable("Hello"));
    printf("'Hello\\n'%d\n", ft_str_is_printable("Hello\n"));
    printf("'123!@#' %d\n", ft_str_is_printable("123!@#"));
    printf("'\\tTab'%d\n", ft_str_is_printable("\tTab"));
    return 0;
}
*/
