/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:34:38 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/23 12:36:40 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_charswap(char *a, char *b);
void	ft_strrev(char *tab, int size);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);

int	ft_is_base_invalid(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (i < ft_strlen(base))
	{
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9 && base[i] <= 32))
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

int	ft_base_end(char *str, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < ft_strlen(str))
	{
		j = 0;
		while (j < ft_strlen(base))
		{
			if (str[i] == base[j])
				j = ft_strlen(base);
			if (j == ft_strlen(base) - 1)
				return (i);
			j ++;
		}
		i ++;
	}
	return (ft_strlen(str));
}

int	ft_base_to_dec(char *str, int str_len, char *base)
{
	int		i;
	int		j;
	int		k;
	long	decimal;

	i = str_len - 1;
	j = 1;
	decimal = 0;
	while (i >= 0)
	{
		k = 0;
		while (k < ft_strlen(base))
		{
			if (base[k] == str[i])
			{
				decimal += k * j;
				j *= ft_strlen(base);
			}
			k ++;
		}
		i--;
	}
	return (decimal);
}

char	*ft_dec_to_base(long nbr, char *base, int sign)
{
	char	base_chars[1024];
	char	*converted_base;
	long	quotient;
	long	remainder;
	int		i;

	i = 0;
	quotient = nbr;
	while (quotient != 0)
	{
		remainder = quotient % ft_strlen(base);
		base_chars[i++] = base[remainder];
		quotient /= ft_strlen(base);
	}
	if (nbr == 0)
		base_chars[i++] = base[0];
	if (sign == -1 && base_chars[i - 1] != base[0])
		base_chars[i++] = '-';
	base_chars[i] = '\0';
	ft_strrev(base_chars, i);
	converted_base = (char *) malloc (ft_strlen(base_chars) + 1);
	if (converted_base == NULL)
		return (0);
	ft_strcpy(converted_base, base_chars);
	return (converted_base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	sign;

	sign = 0;
	while (*nbr)
	{
		if (sign == 0 && (*nbr >= 9 && *nbr <= 32))
		{
			nbr ++;
			continue ;
		}
		if (sign == 0)
			sign = 1;
		if (*nbr == '+' || *nbr == '-')
		{
			if (*nbr == '-')
				sign *= -1;
			nbr ++;
			continue ;
		}
		break ;
	}
	if (ft_is_base_invalid(base_from) || ft_is_base_invalid(base_to))
		return (0);
	return (ft_dec_to_base(ft_base_to_dec(nbr,
				ft_base_end(nbr, base_from), base_from), base_to, sign));
}
