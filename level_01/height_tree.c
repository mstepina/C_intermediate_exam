/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <mstepina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:13:18 by exam              #+#    #+#             */
/*   Updated: 2020/03/10 10:25:17 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node {
		int           value;
		struct s_node **nodes;
	};

int height_tree(struct s_node *root)
{
	if(!root)
		return(-1);
	int max = 0, curr = 0;
	struct s_node **nodes = root->nodes;
	while(*nodes)
	{
		curr = 1 + height_tree(*nodes);
		if(curr > max)
			max = curr;
		nodes++;
	}
	return(max);
}

/*
#include <stdio.h>
int main()
{
	struct s_node g = {13, (struct s_node*[]){NULL}};
	struct s_node f = {11, (struct s_node*[]){&g}};
	struct s_node e = {99, (struct s_node*[]){NULL}};
	struct s_node d = {1, (struct s_node*[]){NULL}};
	struct s_node c = {52, (struct s_node*[]){&f}};
	struct s_node b = {34, (struct s_node*[]){&d, &e}};
	struct s_node a = {94, (struct s_node*[]){&b, &c}};

	printf("%d\n", height_tree(&a));
 	printf("%d\n", height_tree(&f));
	printf("%d\n", height_tree(&c));
  printf("%d\n", height_tree(&d));
 	printf("%d\n", height_tree(NULL));  
}
*/
