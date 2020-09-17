/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:10:51 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/17 18:36:07 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int j;

	i = 1;
	j = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < power)
	{
		nb = nb * j;
		i++;
	}
	return (nb);
}

#include <stdio.h>

int main ()
{
	printf("%d", ft_iterative_power(5, 5));
}
