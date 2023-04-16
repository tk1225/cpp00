/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:56:01 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 18:56:02 by takumasaoka      ###   ########.fr       */
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
    string input_first_name,
    string input_last_name,
    string input_nickname,
    string input_phone_number,
    string input_darkest_secret
)
{
    this->first_name = input_first_name;
    this->last_name = input_last_name;
    this->nickname = input_nickname;
    this->phone_number = input_phone_number;
    this->darkest_secret = input_darkest_secret;
}

string Contact::_proc_string_display(string s)
{
    string tmp;

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
        cerr << "no data" << endl;
        return ;
    }
    cout << endl;
    cout << "|" << right << setw(10) << index << "|" << ":INDEX" << endl;
    cout << "|" << right << setw(10) << _proc_string_display(this->first_name) << "|"<< ":First Name" << endl;
    cout << "|" << right << setw(10) << _proc_string_display(this->last_name) << "|"  << ":Last Name" << endl;
    cout << "|" << right << setw(10) << _proc_string_display(this->nickname) << "|" << ":Nickname" << endl;
    cout << endl;
}
