/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:59:33 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/18 12:15:03 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int i;
	int sqrt;

	sqrt = ft_sqrt(nb);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	i = sqrt;
	if (!(i % 2))
		i++;
	if (!(nb % 2))
		return (0);
	while ((nb % i) && i <= nb)
		i += 2;
	if (i == nb)
		return (1);
	return (0);
}


int	ft_find_next_prime(int nb)
{
	int i;
	
	if (nb == 0 || nb == 1)
		return (2);
	if (nb == 2)
		return(2);
	i = nb;
	if (ft_is_prime(nb) == 0)
	{
		if (nb % 2)
			i++;
		while (i)
		{
			if (ft_is_prime(i) == 1)
				return (i);
			i += 2;
		}
	}
	return (nb);
}

#include <stdio.h>

int main ()
{
	int i = 0;
	int nb = 100000;

	while (i <= nb)
	{
		printf("ft_find_next_prime(i) == 1)
			printf("%d is prime \n
		i++;
	}
}
