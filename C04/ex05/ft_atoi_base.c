/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 21:37:06 by yalshoma          #+#    #+#             */
/*   Updated: 2025/07/04 21:43:34 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

int	index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	skip_whitespace_and_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	base_len;
	int	sign;
	int	index;

	if (!is_valid_base(base))
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	sign = skip_whitespace_and_sign(&str);
	result = 0;
	index = index_in_base(*str, base);
	while (index != -1)
	{
		result = result * base_len + index;
		str++;
		index = index_in_base(*str, base);
	}
	return (result * sign);
}

// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
//  	printf("%d\n", ft_atoi_base("   --+--2A", "0123456789ABCDEF"));
//  	printf("%d\n", ft_atoi_base("101010", "01"));
//      printf("%d\n", ft_atoi_base("42", "0123456789"));
//  	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
//  	printf("%d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));
//  	return (0);
// }
