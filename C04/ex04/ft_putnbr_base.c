/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:57:32 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/15 12:57:38 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_nbr_base_convert(long nbr, char *base)
{
	char	base_chars[1024];
	long	quotient;
	long	remainder;
	int		i;
	int		j;

	j = 0;
	quotient = nbr;
	while (quotient != 0)
	{
		remainder = quotient % ft_strlen(base);
		base_chars[j++] = base[remainder];
		quotient /= ft_strlen(base);
	}
	i = j - 1;
	while (i >= 0)
		write(1, &base_chars[i--], 1);
}

int	ft_is_base_invalid_argument(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (i < ft_strlen(base))
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[j] == base[i])
				return (1);
			j ++;
		}
		i ++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	Lnbr;

	if (ft_is_base_invalid_argument(base))
		return ;
	Lnbr = nbr;
	if (Lnbr == 0)
	{
		write(1, &base[Lnbr], 1);
		return ;
	}
	if (Lnbr < 0)
	{
		write(1, "-", 1);
		Lnbr *= -1;
	}
	ft_nbr_base_convert(Lnbr, base);
}
