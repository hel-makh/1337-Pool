/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:34:28 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/23 12:37:04 by hel-makh         ###   ########.fr       */
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

int	ft_strslen(int size, char **strs)
{
	int	strs_len;

	strs_len = 0;
	size --;
	while (size >= 0)
		strs_len += ft_strlen(strs[size--]);
	return (strs_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (i < ft_strlen(src))
	{
		dest[i + dest_len] = src[i];
		i ++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		str_len;
	int		i;

	if (size == 0)
	{
		str = malloc (1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str_len = ft_strslen(size, strs) + (ft_strlen(sep) * (size - 1));
	str = malloc (str_len * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	i = 0;
	ft_strcpy(str, strs[i++]);
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
		i ++;
	}
	return (str);
}
