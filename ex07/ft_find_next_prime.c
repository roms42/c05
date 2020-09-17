/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:59:33 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/17 22:34:59 by rberthau         ###   ########.fr       */
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
	int sqrtnb;

	i = 3;
	sqrtnb = ft_sqrt(nb);
	if (!(nb % 2))
		return (0);
	while (!(nb % i) || i <= nb / 2 + 1)
		i += 2;
	if (i >= sqrtnb)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int i;
	
	if (nb == 0 || nb == 1)
		return (2);
	if (nb == 2)
		return(3);
	i = nb;
	if (!(nb % 2) && ft_is_prime(nb) == 0)
	{
		while (i++)
		{
			if (ft_is_prime(i) == 1)
				return (i);
		}
	}
	return (nb);
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_find_next_prime(90));
}
