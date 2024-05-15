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

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
		return (NULL);
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}

// int main(void)
// {
// 	int min = 10;
// 	int max = 20;
// 	int i = 0;
// 	int *a = ft_range(min, max);

// 	while (i < max - min)
// 	{
// 		printf("%d\n", a[i]);
// 		i++;
// 	}
// }