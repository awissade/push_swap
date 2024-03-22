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
        if ((av[j][i] == '-' || av[j][i] == '+') && av[j][i + 1] == '\0')
        {
            ft_putstr_fd("Error : There is no number\n", 2);
            exit (1);
        }
        if ((av[j][i] == '-' || av[j][i] == '+') && av[j][i + 1] != '\0')
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
    int     j;
    long    number;

    j = 1;
    while (j < ac)
    {
        number = ft_strtol(av[j]);
        if (number > INT_MAX || number < INT_MIN)
        {
            ft_putstr_fd("Error : Number is not an integer\n", 2);
            exit (1);
        }
        j++;
    }
}

void	check_arguments(int ac, char **av)
{
    check_is_digit(ac, av);
    check_is_int(ac, av); // Done with this function
    // now we can do other things like checking for duplicates
}
