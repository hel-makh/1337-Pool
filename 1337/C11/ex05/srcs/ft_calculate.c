/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:45:13 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/25 10:45:14 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_calculate(int a, int b, int(*f)(int, int))
{
	int	result;

	result = f(a, b);
	return (result);
}

int	ft_do_op(int a, int b, char operator)
{
	if (operator == '+')
		return (ft_calculate(a, b, &ft_addition));
	else if (operator == '-')
		return (ft_calculate(a, b, &ft_subtraction));
	else if (operator == '/')
	{
		if (b == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (-1);
		}
		return (ft_calculate(a, b, &ft_division));
	}
	else if (operator == '*')
		return (ft_calculate(a, b, &ft_multiplication));
	else if (operator == '%')
	{
		if (b == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (-1);
		}
		return (ft_calculate(a, b, &ft_modulo));
	}
	return (0);
}
