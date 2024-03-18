/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:09:53 by awissade          #+#    #+#             */
/*   Updated: 2024/03/18 18:15:42 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	argument_validation(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr_fd("Error : No arguments\n", 2);
		exit(1);
	}
	is_digits();
	// check_duplicates();
	// check_integer_limit();
}
