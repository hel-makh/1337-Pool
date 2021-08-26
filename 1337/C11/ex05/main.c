/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:11:07 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/25 10:11:09 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(int argc, char *argv[])
{
	int		value1;
	int		value2;
	int		result;
	char	operator;

	if (argc != 4)
		return (1);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	if (ft_strlen(argv[2]) > 1)
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (1);
	}
	operator = argv[2][0];
	result = ft_do_op(value1, value2, operator);
	if (result == -1)
		return (0);
	ft_putnbr(result);
	ft_putstr("\n");
	return (0);
}
