/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:26:01 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/12 15:26:16 by hel-makh         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (src[j] && i < size - 1)
		{
			if (i >= dest_len)
				dest[i] = src[j++];
			i ++;
		}
		if (i >= dest_len && dest_len <= size)
			dest[i] = '\0';
	}
	if (size >= dest_len)
		return (dest_len + src_len);
	else
		return (src_len + size);
}
