/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:18:34 by awissade          #+#    #+#             */
/*   Updated: 2024/03/18 17:35:46 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h> // remove this line after debugging

typedef struct s_node
{
    int value;
    struct s_node *next;
    struct s_node *prev;
} t_node;

typedef struct s_stack
{
    t_node *top;
    int size;
} t_stack;

void	check_arguments(int ac, char **av);

#endif
