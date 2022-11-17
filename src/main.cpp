#include"include/Transaction.h"
#include"include/CoffeeMachine.h"
#include<iostream>
#include<vector>
#include<string>

int main()
{
    coffeemachine number1;
    transaction output;
    number1.add_position("Mocha",200);
    number1.printPriceList();
    std::cout << std::endl;
    transaction order[5]{{"Black Coffee", 300}, {"Latte", 100}, {"Tea", 150}, {"Mocha", 500}, {"abc", 0}};
    for (transaction i : order)
    {
        output = number1.input_coffee_name(i);
        std::cout << output.coffee_name << " " << output.price << std::endl;
    }
}