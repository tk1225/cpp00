/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:56:01 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 21:30:48 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_info(
    std::string input_first_name,
    std::string input_last_name,
    std::string input_nickname,
    std::string input_phone_number,
    std::string input_darkest_secret
)
{
    this->first_name = input_first_name;
    this->last_name = input_last_name;
    this->nickname = input_nickname;
    this->phone_number = input_phone_number;
    this->darkest_secret = input_darkest_secret;
}

std::string Contact::_proc_string_display(std::string s)
{
    std::string tmp;

    if (s.size() <= 10)
        return s;
    s[9] = '.';
    s.resize(10);
    return s;
}

void Contact::display(int index)
{
    if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty())
    {
        std::cerr << "no data" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "|" << std::right << std::setw(10) << index << "|" << ":INDEX" << std::endl;
    std::cout << "|" << std::right << std::setw(10) << _proc_string_display(this->first_name) << "|"<< ":First Name" << std::endl;
    std::cout << "|" << std::right << std::setw(10) << _proc_string_display(this->last_name) << "|"  << ":Last Name" << std::endl;
    std::cout << "|" << std::right << std::setw(10) << _proc_string_display(this->nickname) << "|" << ":Nickname" << std::endl;
    std::cout << std::endl;
}
