/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:55:47 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 21:43:45 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
    static int index;

    private:
    Contact _contact_lst[8];

    public:
    void add_lst(Contact new_info);
    void search_lst(int target);
    void show_all_lst();
};
