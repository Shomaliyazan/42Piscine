/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:13:24 by shomali           #+#    #+#             */
/*   Updated: 2025/07/02 22:13:25 by shomali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int main(void)
{
    printf("1. %d\n", ft_strncmp("Hello", "Hello", 5));
    printf("2. %d\n", ft_strncmp("Hello", "Hallo", 5));
    printf("3. %d\n", ft_strncmp("Hello", "Hello World", 5));
    printf("4. %d\n", ft_strncmp("Hello", "World", 0));
    return (0);
}
*/
