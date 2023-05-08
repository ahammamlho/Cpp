/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.HPP                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:59:34 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/08 09:30:21 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <iostream>

class RPN
{
private:
    std::string _arg;
    std::stack<double> _numbers;

public:
    RPN();
    RPN(std::string arg);

    void parce();
    void calcul(char oper);
    void printResult();

    class ErrorException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    ~RPN();
};

#endif