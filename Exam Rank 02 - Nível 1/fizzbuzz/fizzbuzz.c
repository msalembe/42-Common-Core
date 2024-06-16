/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:58:35 by msalembe          #+#    #+#             */
/*   Updated: 2024/06/11 13:06:27 by msalembe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int number)
{
	if (number >= 10)
		ft_putnbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}
int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 5 == 0 && number % 3 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (number % 3 == 0)
			write(1, "fizz\n", 5);
		else if (number % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(number);
			write(1, "\n", 1);
		}
		number++;
	}
	return (0);
}
