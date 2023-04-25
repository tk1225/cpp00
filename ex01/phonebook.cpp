/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:55:49 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/17 11:06:41 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include "phonebook.hpp"

int PhoneBook::index = 0;

void PhoneBook::add_lst(Contact new_info)
{
    index = index % 8;
    this->_contact_lst[index % 8] = new_info;
    this->index++;
}

void PhoneBook::show_all_lst()
{
    int i;

    i = 0;
    while (i < this->index)
    {
        std::cout << "-------------------------------" << std::endl;
        this->_contact_lst[i].display(i);
        i++;
    }
    std::cout << "-------------------------------" << std::endl;
}

void PhoneBook::search_lst(int target)
{
    if (target > 7)
    {
        std::cerr << "index out of range" << std::endl;
        return;
    }
    this->_contact_lst[target].display(target);
}
