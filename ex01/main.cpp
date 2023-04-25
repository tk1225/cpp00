/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:55:56 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/17 11:06:25 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class ReadLine
{
    private:
    std::string _input;
    std::string _input_form(std::string input_content)
    {
        std::cout << ">";
        std::cout << input_content;
        std::cout << "を入力してください" << std::endl;
        if(!std::getline(std::cin, _input)) exit(0);
        if (_input == "")
        {
            std::cout << "もう一度入力してください" << std::endl;
            return _input_form(input_content);
        }
        return _input;
    }
    PhoneBook _pb;

    public:
    ReadLine(){
        while (1)
        {
            std::cout << ">";
            if(!std::getline(std::cin, _input)) break;
            if (_input == "EXIT")
                exit(0);
            else if (_input == "ADD")
            {
                Contact new_info = Contact();
                new_info.set_info(
                    _input_form("first_name"),
                    _input_form("last_name"),
                    _input_form("nickname"),
                    _input_form("phone_number"),
                    _input_form("darkest_secret")
                );
                _pb.add_lst(new_info);
            }
            else if (_input == "SEARCH")
            {
                _pb.show_all_lst();
                std::string  inputNum = _input_form("input index");
                int     index;

                try
                {
                    index = std::stoi(inputNum);
                }
                catch (const std::invalid_argument& ex)
                {
                    std::cerr << ex.what() << std::endl;
                }
                catch (const std::out_of_range& ex)
                {
                    std::cerr << ex.what() << std::endl;
                }
                _pb.search_lst(index);
            }
        }
    }
};

int main(int argc, char *argv[])
{
    std::cout << "Hello, starting phone book program" << std::endl;
    ReadLine();
	return 0;
}
