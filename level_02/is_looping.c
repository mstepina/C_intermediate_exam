/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_looping.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 09:36:00 by exam              #+#    #+#             */
/*   Updated: 2020/02/18 09:41:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node {
	int value;
	struct s_node *next;
};

int	is_looping(struct s_node *node)
{
	struct s_node *fast, *slow;
	fast = slow = node;
	while(fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return(1);
	}
	return(0);
}

/*
#include<stdio.h>

int main()
{
	struct s_node d = {4, NULL};
	struct s_node c = {3, &d};
	struct s_node b = {2, &c};
	struct s_node a = {1, &b};
	printf("%d\n", is_looping(&a));
	d.next = &b;
	printf("%d\n", is_looping(&a));
}
*/
