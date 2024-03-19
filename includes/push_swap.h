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
#include <stdio.h> // remove this line after debugging

typedef struct s_stack
{
    int value;
    struct s_stack *next;
} t_stack;

#endif
