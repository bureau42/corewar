/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:36:28 by gdorcas           #+#    #+#             */
/*   Updated: 2020/11/21 16:48:47 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

extern t_struct	g_pfstr;

int	ft_strlen_pf(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	if (g_pfstr.n_value == 1)
		i++;
	return (i);
}
