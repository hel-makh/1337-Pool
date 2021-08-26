/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:36:00 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/23 12:36:24 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < n)
	{
		if (i <= src_len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i ++;
	}
	return (dest);
}

int	ft_charset_has(char c, char *charset)
{
	int	i;

	i = 0;
	while (i < ft_strlen(charset))
	{
		if (c == charset[i])
			return (1);
		i ++;
	}
	return (0);
}

int	ft_calc_size(char *str, char *charset, int pos)
{
	int	i;
	int	strs_size;
	int	str_size;

	i = 0;
	strs_size = 0;
	while (i < ft_strlen(str))
	{
		str_size = 0;
		while (!ft_charset_has(str[i + str_size], charset)
			&& str[i + str_size] != '\0')
			str_size ++;
		if (str_size > 0)
		{
			strs_size ++;
			if (pos == strs_size)
				return (str_size);
			i += str_size;
			continue ;
		}
		i ++;
	}
	return (strs_size);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		strs_size;
	int		str_size;
	char	*temp_str;
	char	**strs;

	strs_size = ft_calc_size(str, charset, 0);
	strs = (char **) malloc ((strs_size + 1) * sizeof(char *));
	temp_str = str;
	if (strs == NULL)
		return (0);
	i = 0;
	while (i < strs_size)
	{
		str_size = ft_calc_size(str, charset, i + 1);
		strs[i] = (char *) malloc ((str_size + 1) * sizeof(char));
		while (ft_charset_has(temp_str[0], charset))
			temp_str ++;
		ft_strncpy(strs[i], temp_str, str_size);
		strs[i][str_size] = '\0';
		temp_str += str_size;
		i ++;
	}
	strs[i] = 0;
	return (strs);
}
