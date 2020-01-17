/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 09:04:14 by exam              #+#    #+#             */
/*   Updated: 2020/01/07 09:20:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int ia = 0, ib = 0, space = 0;
	
	while (ia < na && ib < nb)
	{
		if (a[ia] < b[ib])
			ia++;
		else if (a[ia] > b[ib])
			ib++;
		else 
		{
			if (space)
				printf(" ");
			printf("%d", a[ia]);
			ia++;
			ib++;
			space = 1;
		}
	}
	printf("\n");
}

