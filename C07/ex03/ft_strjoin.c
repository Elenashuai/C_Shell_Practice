/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:48:27 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/24 20:04:07 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	if (size == 0)
	{
		strs = NULL;
		return (strs);
	}
