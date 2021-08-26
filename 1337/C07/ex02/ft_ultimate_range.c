/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:34:21 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/21 10:34:24 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc ((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		(*range)[j++] = i++;
	}
	return (j);
}
