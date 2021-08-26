/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:10:02 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/12 15:25:45 by hel-makh         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	fc;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) <= 0)
		return (str);
	while (i < ft_strlen(str))
	{
		if (str[i] == to_find[j])
		{
			if (j == 0)
				fc = i;
			i ++;
			j ++;
			if (j > 0 && j == ft_strlen(to_find))
				return (&str[fc]);
			continue ;
		}
		if (j < ft_strlen(to_find))
			j = 0;
		i ++;
	}
	return (0);
}
