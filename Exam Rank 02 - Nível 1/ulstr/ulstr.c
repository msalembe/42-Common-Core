/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:42:55 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 18:47:02 by msalembe         ###   ########.fr       */
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
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i], 1);
	}
	return (write(1, "\n", 1));
}
