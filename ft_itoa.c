/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:08:41 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/17 14:26:41 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	size_t		j;
	size_t		k;
	size_t		temp;
	long long	i;
	char		*new;

	temp = ft_is_minus(n);
	k = ft_int_len(n) + temp;
	j = ft_int_len(n) + temp;
	i = n;
	if (!(new = (char*)malloc(sizeof(char) * ft_int_len(n) + 1 + temp)))
		return (NULL);
	if (temp)
		i = -i;
	if ((temp && k == 2) || ((!temp) && k == 1))
		new[--k] = i + '0';
	while (i > 0)
	{
		new[--k] = i % 10 + '0';
		i /= 10;
	}
	if (temp)
		new[0] = '-';
	new[j] = '\0';
	return (new);
}
