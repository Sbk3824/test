/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:27:06 by skuntoji          #+#    #+#             */
/*   Updated: 2018/09/13 12:46:47 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == 'a')
			{
				write(1,"a\n",2);
				return (0);
			}
			i++;
		}
		write(1,"\n",1);
		return (0);
	}
	write (1, "a\n",2);
	return (0);
}
