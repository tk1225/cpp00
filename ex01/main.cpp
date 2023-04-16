/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:55:56 by takumasaoka       #+#    #+#             */
/*   Updated: 2023/04/16 18:55:57 by takumasaoka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class ReadLine
{
    private:
    string _input;
    string _input_form(string input_content)
    {
        cout << ">";
        cout << input_content;
        cout << "を入力してください" << endl;
        if(!getline(cin, _input)) exit(0);
        if (_input == "")
        {
            cout << "もう一度入力してください" << endl;
            return _input_form(input_content);
        }
        return _input;
    }
    PhoneBook _pb;

    public:
    ReadLine(){
        while (1)
        {
            cout << ">";
            if(!getline(cin, _input)) break;
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
                string  inputNum = _input_form("input index");
                int     index;

                try
                {
                    index = stoi(inputNum);
                }
                catch (const invalid_argument& ex)
                {
                    cerr << ex.what() << endl;
                }
                catch (const out_of_range& ex)
                {
                    cerr << ex.what() << endl;
                }
                _pb.search_lst(index);
            }
        }
    }
};

int main(int argc, char *argv[])
{
    cout << "Hello, starting phone book program" << endl;
    ReadLine();
	return 0;
}
