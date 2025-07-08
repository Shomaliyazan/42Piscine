/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:40:00 by yalshoma          #+#    #+#             */
/*   Updated: 2025/07/08 19:41:03 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp(char *arr1, char *arr2)
{
	int	i;

	i = 0;
	while (arr1[i] && arr2[i] && arr1[i] == arr2[i])
	{
		i++;
	}
	return (arr1[i] - arr2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	cmp2(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (argc > x)
	{
		y = x + 1;
		while (argc > y)
		{
			if (cmp(argv[x], argv[y]) > 0)
				ft_swap(&argv[x], &argv[y]);
			++y;
		}
		++x;
	}
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	cmp2(argc, argv);
	while (argv[++x])
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			write(1, &argv[x][y], 1);
			++y;
		}
		write(1, "\n", 1);
	}
	return (0);
}
