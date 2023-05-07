/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:59:28 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/07 12:44:29 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string arg)
{
    _arg = arg;
};

void RPN::programme()
{
    int i = 0;
    std::string tmp;

    while (_arg[i])
    {
        if (_arg[i] != ' ')
            tmp += _arg[i];
        i++;
    }
    std::cout << tmp << "\n";
    i = 0;
    if (tmp[i] <= '9' && tmp[i] >= '0')
        _numbers.push(tmp[i] + 64);
    else
        std::cout << "invalid format ..\n";
    i++;
    while (tmp[i])
    {
        if (tmp[i] <= '9' && tmp[i] >= '0')
            _numbers.push(tmp[i] + 64);
        else
            std::cout << "invalid format\n";
        i++;
        if (tmp[i] == '*' || tmp[i] == '-' || tmp[i] == '+' || tmp[i] == '/')
            _opera.push(tmp[i]);
        else
            std::cout << "invalid format ...\n";
        i++;
    }
};
RPN::~RPN()
{
}