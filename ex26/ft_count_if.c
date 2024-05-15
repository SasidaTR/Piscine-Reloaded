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

// int contains_a(char *str)
// {
//     while (*str)
//     {
//         if (*str == 'a')
//             return 1;
//         str++;
//     }
//     return 0;
// }

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

// int main(void)
// {
//     char *tab[] = {
//         "apple",
//         "banana",
//         "cherry",
//         "date",
//         "elderberry",
//         "fig",
//         "grape",
//         0
//     };

//     int count = ft_count_if(tab, contains_a);
//     printf("Number of strings containing 'a': %d\n", count);

//     return 0;
// }