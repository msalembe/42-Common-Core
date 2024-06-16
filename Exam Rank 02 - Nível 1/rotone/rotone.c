/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:24:00 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 18:34:13 by msalembe         ###   ########.fr       */
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
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A'
				&& str[i] <= 'Y'))
			str[i] += 1;
		else if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		write(1, &str[i], 1);
	}
	return (write(1, "\n", 1));
}
