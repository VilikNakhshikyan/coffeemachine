
#ifndef _CoffeeMachine_H_
#define _CoffeeMachine_H_

#include<vector>
#include<string>
#include<iostream>
#include"Transaction.h"

class coffeemachine
{
    public:
    coffeemachine();
    coffeemachine(std::vector<std::string>, std::vector<unsigned int>);
    transaction input_coffee_name(transaction);
    void add_position(std::string, unsigned int);
    void printPriceList();

    private:
    std::vector<std::string> coffee_names;
    std::vector<unsigned int> coffee_price; 
};

#endif//_CoffeeMachine_H_