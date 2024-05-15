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
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (-1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (-1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
