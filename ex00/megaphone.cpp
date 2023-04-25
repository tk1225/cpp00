/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:56:03 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 21:27:15 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main(int argc, char *argv[])
{
	char *s1;
    char *tmp;
    int i;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (0);
    }
    i = 1;
    while (i < argc)
    {
        s1 = argv[i];
        tmp = s1;
        while(*s1)
        {
            *s1 = std::toupper(*s1);
            s1++;
        }
        std::cout << tmp;
        i ++;
    }
}

