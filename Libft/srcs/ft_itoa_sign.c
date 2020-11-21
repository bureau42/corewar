/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_sign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:22:02 by gdorcas           #+#    #+#             */
/*   Updated: 2020/11/21 16:22:54 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_result_sign(char *result, int sign, int i, int n)
{
	result[i] = '\0';
	while (i >= 1)
	{
		result[i - 1] = (n % 10) * sign + '0';
		n = n / 10;
		i--;
	}
	if (sign == -1)
		result[i] = '-';
	else
		result[i] = '+';
}

char		*ft_itoa_sign(int n)
{
	char	*result;
	int		i;
	int		a;
	int		sign;

	i = 2;
	sign = 1;
	if (n < 0)
		sign = -1;
	a = n;
	while (a / 10 >= 1 || a / 10 <= -1)
	{
		i++;
		a = a / 10;
	}
	if (!(result = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_fill_result_sign(result, sign, i, n);
	return (result);
}
