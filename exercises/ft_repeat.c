/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:29:37 by zouddach          #+#    #+#             */
/*   Updated: 2023/08/02 17:46:51 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_repeat(char c)
{
	int repeat;
	if (c <= 'z' && c >= 'a')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main (int ac, char **av)
{
	int repeat;
	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = ft_repeat( *av[1]);
			while (repeat)
			{
				write (1, av[1], 1);
				repeat -= 1;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
