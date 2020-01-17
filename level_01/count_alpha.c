/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 09:38:20 by exam              #+#    #+#             */
/*   Updated: 2020/01/07 09:57:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *lowercase(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
	return(s);
}

int is_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

void count_alpha(char *str)
{
	int tab[26] = {0};
	int i = 0;
	char *s = lowercase(str);
	int comma = 0;

	while (s[i])
	{
		if (is_alpha(s[i]))
			tab[s[i] - 'a'] += 1;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (tab[s[i] - 'a'] > 0)
		{
			if (comma)
				printf(", ");
			printf("%d%c", tab[s[i] - 'a'], s[i]);
			tab[s[i] - 'a'] = 0;
			comma = 1;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		count_alpha(av[1]);
	printf("\n");
	return (0);
}
