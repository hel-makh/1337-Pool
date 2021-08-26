/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 06:16:42 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/10 06:16:46 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (*str)
	{
		str ++;
		strlen ++;
	}
	return (strlen);
}

void	ft_charlowcase(char *c)
{
	if (*c >= 65 && *c <= 90)
		*c = *c + 32;
}

void	ft_char_to_hex(char *c)
{
	char	hexadecimal[1024];
	long	quotient;
	long	remainder;
	int		i;
	int		j;

	i = 0;
	j = 0;
	quotient = *c;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimal[j++] = remainder + 48;
		else
			hexadecimal[j++] = remainder + 55;
		quotient /= 16;
	}
	while (i < j)
	{
		if (j == 1 && i == 0)
			ft_putchar('0');
		ft_charlowcase(&hexadecimal[i]);
		ft_putchar(hexadecimal[i++]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_char_to_hex(&str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
