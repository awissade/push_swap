/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:45:26 by awissade          #+#    #+#             */
/*   Updated: 2024/03/22 17:46:12 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

long	ft_strtol(const char *str)
{
	int		i;
	int		sign;
	long	result;

	sign = 1;
	i = ft_isspace(str);
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] == '-' || str[i + 1] == '+'))
	{
		ft_putstr_fd("Error : Invalid number\n", 2);
		exit (1);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
