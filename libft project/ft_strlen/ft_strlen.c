/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:04:08 by mouad             #+#    #+#             */
/*   Updated: 2024/10/31 13:48:45 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t  i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
int main(void)
{
    char str[20] = "Benmahmoud mouad";
    int length = ft_strlen(str);
    printf("%d\n",length);
    return 0;
}