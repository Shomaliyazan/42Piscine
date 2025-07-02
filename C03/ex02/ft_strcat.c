/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:13:41 by shomali           #+#    #+#             */
/*   Updated: 2025/07/02 22:13:42 by shomali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "World!";
	printf("%s", ft_strcat(dest, src));
}
*/
