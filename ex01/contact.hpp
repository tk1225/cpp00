/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:55:59 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 21:28:47 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include <iomanip>

class Contact
{
    private:
    int    index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    std::string _proc_string_display(std::string s);

    public:
    Contact();
    ~Contact();
    void set_info(
    std::string  first_name,
    std::string  last_name,
    std::string  nickname,
    std::string  phone_number,
    std::string  darkest_secret
    );
    void display(int index);
};