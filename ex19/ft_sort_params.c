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

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_params(char **argv, int argc)
{
	int	i;
	int	j;
	int	min_idx;

	i = 1;
	while (i < argc - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[min_idx]) < 0)
			{
				min_idx = j;
			}
			j++;
		}
		if (min_idx != i)
		{
			ft_swap(&argv[i], &argv[min_idx]);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc > 1)
	{
		ft_sort_params(argv, argc);
		i = 1;
		while (i < argc)
		{
			str = argv[i];
			while (*str)
			{
				ft_putchar(*str);
				str++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
