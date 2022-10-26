/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:55:29 by mabahani          #+#    #+#             */
/*   Updated: 2022/10/25 17:24:05 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	long long			tot;
	int					sign;
	int					i;

	sign = 1;
	i = 0;
	tot = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] <= '9' && str[i] >= '0'))
		tot = tot * 10 + str[i++] - '0';
	if (tot > 9223372036854775807 && sign > 0)
		return (-1);
	else if (tot > 9223372036854775807 && sign < 0)
		return (0);
	return ((tot * sign));
}
