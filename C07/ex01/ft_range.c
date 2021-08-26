/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:34:12 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/21 10:34:14 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*range;

	if (min >= max)
		return (0);
	range = (int *) malloc ((max - min - 1) * sizeof(int));
	if (range == NULL)
		return (0);
	i = min;
	j = 0;
	while (i < max)
	{
		range[j++] = i++;
	}
	return (range);
}
