/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:44:53 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 17:53:00 by msalembe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	char	*str;
	int		len;

	if (ac != 2)
		return (write(1, "\n", 1));
	str = av[1];
	len = ft_strlen(str);
	len--;
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	return (write(1, "\n", 1));
}
