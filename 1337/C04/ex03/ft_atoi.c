/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:53:44 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/15 12:54:07 by hel-makh         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = -1;
	sign = 0;
	nbr = 0;
	while (++i < ft_strlen(str))
	{
		if (sign == 0 && (str[i] >= 9 && str[i] <= 32))
			continue ;
		if (sign == 0)
			sign = 1;
		if (nbr == 0 && (str[i] == '+' || str[i] == '-'))
		{
			if (str[i] == '-')
				sign *= -1;
			continue ;
		}
		if (str[i] < '0' || str[i] > '9')
			break ;
		nbr = (nbr * 10) + (str[i] - '0');
	}
	return (sign * nbr);
}
