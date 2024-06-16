/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:36:40 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 18:40:32 by msalembe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*str;
	char	*search;
	char	*replace;

	i = -1;
	if (ac != 4 || av[2][1] || av[3][1])
		return (write(1, "\n", 1));
	str = av[1];
	search = av[2];
	replace = av[3];
	while (str[++i])
	{
		if (str[i] == search[0])
			str[i] = replace[0];
		write(1, &str[i], 1);
	}
	return (write(1, "\n", 1));
}
