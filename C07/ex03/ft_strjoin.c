/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:18:02 by yalshoma          #+#    #+#             */
/*   Updated: 2025/07/09 19:06:39 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_len(char **strs, char *sep, int size)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1) + 1;
	return (total_len);
}

void	ft_copystrs(char *join, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			join[c++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				join[c++] = sep[j++];
		}
		i++;
	}
	if (i == size)
		join[c] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;

	join = NULL;
	if (size == 0)
	{
		join = malloc(1);
		join[0] = '\0';
		return (join);
	}
	join = malloc(ft_total_len(strs, sep, size));
	if (!join)
		return (NULL);
	ft_copystrs(join, strs, sep, size);
	return (join);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	char *str = ft_strjoin(ac - 1, av + 1, " ");
// 	printf("%s", str);
// }