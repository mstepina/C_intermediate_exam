/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:12:08 by exam              #+#    #+#             */
/*   Updated: 2020/02/04 09:48:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

struct s_node {
	void *content;
	struct s_node *next;
};

struct s_queue {
	struct s_node *first;
	struct s_node *last;
};

struct s_queue *init(void)
{
	struct s_queue *que = malloc(sizeof(struct s_queue *));
	que->first = NULL;
	que->last = NULL;
	return(que);
}

void enqueue(struct s_queue *queue, void *content)
{
	struct s_node *new =  malloc(sizeof(struct s_node *));
	new->content = content;
	new->next = NULL;
	if(!queue->first)
	{
		queue->first = new;
		queue->last = new;
	}
	else
	{
		queue->last->next = new;
		queue->last = new;
	}
}

void *dequeue(struct s_queue *queue)
{
	if(!queue->first)
		return(NULL);
	struct s_node *cp = malloc(sizeof(struct s_node *));
	cp->content = queue->first->content;
	cp->next = queue->first->next;
	queue->first = cp->next;
	return(cp->content);
}

void *peek(struct s_queue *queue)
{
	if(!queue->first)
		return (NULL);
	return(queue->first->content);
}

int isEmpty(struct s_queue *queue)
{
	if(queue->first)
		return(0);
	return(1);
}

/*
#include<stdio.h>
int main()
{
	struct s_queue *q =  init();
	printf("Deque %s\n", dequeue(q));
	printf("empty? %d\n", isEmpty(q));
	enqueue(q, (void *){"2"});
	printf("peek %s\n", peek(q));
	printf("empty? %d\n", isEmpty(q));
	printf("Deque %s\n", dequeue(q));
	return(0);
}
*/
