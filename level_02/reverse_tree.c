/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:39:08 by exam              #+#    #+#             */
/*   Updated: 2020/01/14 10:59:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node {
		int           value;
		struct s_node *right;
		struct s_node *left;
	};


void reverse_tree(struct s_node *root)
{
	if(!root)
		return ;
	struct s_node *temp = root->left;
	root->left = root->right;
	root->right = temp;
	reverse_tree(root->left);
	reverse_tree(root->right);
}


/*
#include <stdio.h>
void print(struct s_node *root)
{
	if (!root)
		return ;
	//while(root)
	//{
		printf("%d ", root->value);
		print(root->left);
		print(root->right);
	//}
}

int main()
{
	struct s_node g = {7, NULL, NULL};
	struct s_node f = {6, NULL, NULL};
	struct s_node e = {5, NULL, NULL};
	struct s_node d = {4, NULL, NULL};
	struct s_node c = {3, &g, &f};
	struct s_node b = {2, &e, &d};
	struct s_node a = {1, &c, &b};

	print(&a);
	reverse_tree(&a);
	printf("\n");
	print(&a);
	printf("\n");
}
*/
