/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim-hon <elim-hon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:27:24 by elim-hon          #+#    #+#             */
/*   Updated: 2026/08/25 15:27:25 by elim-hon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	len;

		len = 0;
		while (argv[1][len])
			len++;
		while (--len >= 0)
			write(1, &argv[1][len], 1);
	}
	write(1, "\n", 1);
	return (0);
}
