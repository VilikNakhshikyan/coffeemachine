#include"include/Transaction.h"
#include"include/CoffeeMachine.h"
#include<iostream>
#include<vector>
#include<string>


coffeemachine::coffeemachine():
coffee_names{"Black Coffee", "Latte", "Cappuccino", "Americano", "Espresso", "Doppio", "Cortado", "Lungo", "Macchiato", "Irish"},
coffee_price{100, 150, 150, 250, 250, 100, 200, 100, 100, 300}{}

coffeemachine::coffeemachine(std::vector<std::string> coffee_names, std::vector<unsigned int> coffee_price)
{
    this->coffee_names = coffee_names;
    this->coffee_price = coffee_price;
}

void coffeemachine::printPriceList()
{
    for (int i = 0; i < int(this->coffee_names.size()); ++i)
        std::cout << coffee_names[i] << " - " << coffee_price[i]<<std::endl;
}

void coffeemachine::add_position(std::string c_name, unsigned int price)
{
    coffee_names.push_back(c_name);
    coffee_price.push_back(price);
}

transaction coffeemachine::input_coffee_name(transaction order)
{
    for(int i = 0; i < int(coffee_names.size()); ++i)
    {
        if (order.coffee_name == coffee_names[i])
        {
            if(order.price >= coffee_price[i])
            {
                order.price -= coffee_price[i];
                return order;
            }
            else
            {
                order.coffee_name = "Not enough money";
                return order;
            }
        }
    }
    order.coffee_name = "We don't sell such item";
    return order;
}