/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trischma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:09:12 by trischma          #+#    #+#             */
/*   Updated: 2024/05/13 14:09:16 by trischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// void	ft_putnbr(int n)
// {
// 	if (n == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return;
// 	}
// 	if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		n = -n;
// 	}
// 	if (n >= 10)
// 	{
// 		ft_putnbr(n / 10);
// 	}
// 	char c = (n % 10) + '0';
// 	write(1, &c, 1);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	int length = 5;

// 	ft_foreach(tab, length, &ft_putnbr);
// 	write(1, "\n", 1);

// 	return 0;
// }
