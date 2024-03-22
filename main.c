/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:19:24 by awissade          #+#    #+#             */
/*   Updated: 2024/03/22 02:35:11 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr_fd("Error : No arguments\n", 2);
		exit (1);
	}
	// We are working with this function
	check_arguments(ac, av);
	// This line is for debugging
	printf("All tests passed successfully\n");
	return (0);
}
