/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 02:40:29 by awissade          #+#    #+#             */
/*   Updated: 2024/03/22 02:41:50 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    check_is_digit(int ac, char **av)
{
    int i;
    int j;

    j = 1;
    while (j < ac)
    {
        i = 0;
        if (av[j][i] == '-' || av[j][i] == '+')
            i++;
        while (av[j][i])
        {
            if (!ft_isdigit(av[j][i]))
            {
                ft_putstr_fd("Error : Arguments must be digits\n", 2);
                exit (1);
            }
            i++;
        }
        j++;
    }
}

void    check_is_int(int ac, char **av)
{
    (void)ac;
    (void)av;
    // This function should call ft_strtol that converts a string to a long
    // then check if this number is more than INT_MAX or less than INT_MIN
}

void	check_arguments(int ac, char **av)
{
    check_is_digit(ac, av);
    check_is_int(ac, av); // this is the function that i'm working on it
}
