/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:05:51 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/15 13:06:00 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_is_base_invalid_argument(char *base)
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

int	ft_export_base(char *str, char *base)
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

int	ft_convert_base(char *str, int str_len, int sign, char *base)
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
	if (sign == 0)
		sign = 1;
	return (sign * decimal);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;

	sign = 0;
	while (*str)
	{
		if (sign == 0 && (*str >= 9 && *str <= 32))
		{
			str ++;
			continue ;
		}
		if (sign == 0)
			sign = 1;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign *= -1;
			str ++;
			continue ;
		}
		break ;
	}
	if (ft_is_base_invalid_argument(base))
		return (0);
	return (ft_convert_base(str, ft_export_base(str, base), sign, base));
}
