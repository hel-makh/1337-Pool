/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:52:13 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/12 17:52:18 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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