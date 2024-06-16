/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:52:35 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 17:42:42 by msalembe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*str;
	int		num_repeat;

	if (ac != 2)
		return (write(1, "\n", 1));
	str = av[1];
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			num_repeat = (*str - 'a') + 1;
		else if (*str >= 'A' && *str <= 'Z')
			num_repeat = (*str - 'A') + 1;
		else
			write(1, str, 1);
		while (num_repeat > 0)
		{
			write(1, str, 1);
			num_repeat--;
		}
		str++;
	}
	return (write(1, "\n", 1));
}
