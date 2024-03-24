/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:31:54 by awissade          #+#    #+#             */
/*   Updated: 2024/03/24 02:32:16 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *ft_newnode(int value)
{
    t_stack *new_node;

    new_node = (t_stack *)malloc(sizeof(t_stack));
    if (!new_node)
    {
        
    }
}