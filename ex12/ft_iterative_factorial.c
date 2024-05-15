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

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	return (a);
}

// int    main(void)
// {
//     int    nb = 0;
//     int    a = ft_iterative_factorial(nb);
//     printf("%d", a);
// }