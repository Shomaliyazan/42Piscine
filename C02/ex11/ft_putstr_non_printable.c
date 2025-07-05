/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalshoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:14:07 by yalshoma          #+#    #+#             */
/*   Updated: 2025/07/05 16:18:49 by yalshoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	current;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		current = str[i];
		if (current < 32 || current > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[current / 16]);
			ft_putchar(hex[current % 16]);
		}
		else
		{
			ft_putchar(current);
		}
		i++;
	}
}

int main(void)
{
	char str[] = "hello\nim yazan!";
	ft_putstr_non_printable(str);
	return (0);
}

