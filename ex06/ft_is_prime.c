/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:16:46 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/18 12:15:06 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	if (!(i % 2))
		i++;
	if (!(nb % 2))
		return (0);
	while (i < nb / i)
	{
			if (nb % i == 0)
				return(0);
			i++;
	}
	return (1);
}

#include <stdio.h>

int main ()
{
	int nb = 2147483647;
	if (ft_is_prime(nb) == 1)
		printf("%d is prime \n", nb);
	else
		printf("%d is NOT prime \n", nb);
}
