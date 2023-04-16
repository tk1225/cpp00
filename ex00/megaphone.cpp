/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:56:03 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 18:56:04 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
	char *s1;
    char *tmp;
    int i;

    if (argc == 1)
        return (1);
    i = 1;
    while (i < argc)
    {
        s1 = argv[i];
        tmp = s1;
        while(*s1)
        {
            *s1 = toupper(*s1);
            s1++;
        }
        cout << tmp;
        i ++;
    }
}

