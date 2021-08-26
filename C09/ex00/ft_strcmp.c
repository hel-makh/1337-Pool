/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:15:14 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/12 15:23:33 by hel-makh         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	s1i;
	unsigned char	s2i;

	i = 0;
	while (i < ft_strlen(s1) || i < ft_strlen(s2))
	{
		s1i = s1[i];
		s2i = s2[i];
		if (s1i != s2i)
			return (s1i - s2i);
		i ++;
	}
	return (0);
}
