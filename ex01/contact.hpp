/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:55:59 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 18:56:00 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

class Contact
{
    private:
    int    index;
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;
    string _proc_string_display(string s);

    public:
    Contact();
    ~Contact();
    void set_info(
    string  first_name,
    string  last_name,
    string  nickname,
    string  phone_number,
    string  darkest_secret
    );
    void display(int index);
};