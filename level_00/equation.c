/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 09:04:39 by exam              #+#    #+#             */
/*   Updated: 2019/12/24 09:19:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    equation(int n)
{
	int a = 0;
	while (a < 10)
	{
		int b = 0;
		while (b < 10)
		{
			int c = 0;
			while (c < 10)
			{
				if (10 *a + b + 10 * c + a == n)
					printf ("A = %d, B = %d, C = %d\n", a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		equation(atoi(av[1]));
	}
	return (0);
}
*/
