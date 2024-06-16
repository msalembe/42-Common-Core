/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:51:58 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 12:57:19 by msalembe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*str;
	int		delimitador;

	delimitador = 0;
	if (ac != 2)
		return (write(1, "\n", 1));
	str = av[1];
	while (str[delimitador] == ' ' || str[delimitador] == '\t')
		delimitador++;
	while (str[delimitador] != ' ' && str[delimitador])
	{
		write(1, &str[delimitador], 1);
		delimitador++;
	}
	return (write(1, "\n", 1));
}
