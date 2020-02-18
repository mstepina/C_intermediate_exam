/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 09:02:28 by exam              #+#    #+#             */
/*   Updated: 2020/02/18 09:13:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_pivot(int *arr, int n)
{
	int i = 0, suma = 0, sumb = 0;
	while(i < n)
	{
		suma += arr[i];
		i++;
	}
	i--;
	while(i > 0)
	{
		suma -= arr[i];
		if(suma == sumb)
			return(i);
		sumb += arr[i];
		i--;

	}
	return(-1);
}

/*
#include <stdio.h>
int main()
{
	int arr[] = {1,2};
	int n = 2;
	printf("%d\n", find_pivot(arr, n));
}
*/
