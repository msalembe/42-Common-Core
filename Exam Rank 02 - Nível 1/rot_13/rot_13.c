/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:58:49 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 18:21:11 by msalembe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*str;
	int		i;

	i = -1;
	if (ac != 2)
		return (write(1, "\n", 1));
	str = av[1];
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
		{
			if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
				str[i] -= 13;
			else
				str[i] += 13;
		}
		write(1, &str[i], 1);
	}
	return (write(1, "\n", 1));
}
