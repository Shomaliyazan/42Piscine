/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 09:22:21 by yalshoma          #+#    #+#             */
/*   Updated: 2025/07/08 17:05:50 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n * n <= nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>
int		main(void)
{
	printf("-10 = %d (0)\n", ft_is_prime(-10));
	printf("-1 = %d (0)\n", ft_is_prime(-1));
	
}
*/
