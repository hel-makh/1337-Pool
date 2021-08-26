/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 06:34:15 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/26 06:34:16 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_addition(int a, int b);
int		ft_subtraction(int a, int b);
int		ft_division(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_modulo(int a, int b);
int		ft_do_op(int a, int b, char operator);

#endif
