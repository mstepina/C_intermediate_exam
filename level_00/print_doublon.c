/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 09:26:04 by exam              #+#    #+#             */
/*   Updated: 2019/12/17 09:41:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int ia = 0, ib = 0, space = 0;
	while (ia < na && ib < nb)
	{
		if (a[ia] == b[ib])
		{
			if (space)
				printf("%s", " ");
			printf("%d", a[ia]);
			ia++;
			ib++;
			space = 1;
		}
		else if (a[ia] < b[ib])
			ia++;
		else
			ib++;
	}
	printf ("\n");
}

