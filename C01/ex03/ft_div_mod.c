/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:56:26 by yalshoma          #+#    #+#             */
/*   Updated: 2025/07/05 15:44:30 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int 	main(void)
{
	int	x = 7, y = 4, *p, *p1;
	p = &x;
	p1 = &y;
	ft_div_mod(x, y, p, p1);
	printf("division of x & y = %d\n", x);
	printf("the remainder of x & y is %d", y);
return 0;
}
*/
