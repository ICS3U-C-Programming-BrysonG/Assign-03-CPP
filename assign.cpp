// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 11,09,2026
// This program gets a pizza order from the user,
// and tells them there price before and after tax,
// as well as how much the tax costs

#include <iostream>
#include <string>

int main() {
    std::string pizzaSize;
    std::string drinks;
    std::string pizzaToppings;
    int pizzaSizeInt;
    int pizzaToppingsInt;
    int drinksInt;
    const int SMALL = 1;
    const int MEDIUM = 2;
    const int LARGE = 3;
    const float SMALL_COST = 9.99;
    const float MEDIUM_COST = 12.39;
    const float LARGE_COST = 16.09;
    const float TOPPINGS_SMALL = 2.20;
    const float TOPPINGS_MEDIUM = 2.55;
    const float TOPPINGS_LARGE = 2.95;
    const float DRINKS_COST = 2.00;
    const float HST = 0.13;
    double toppingsPriceSmall;
    double toppingsPriceMedium;
    double toppingsPriceLarge;
    double pizzaSmallSubtotal;
    double pizzaMediumSubtotal;
    double pizzaLargeSubtotal;
    double pizzaSmallTaxCost;
    double pizzaMediumTaxCost;
    double pizzaLargeTaxCost;
    double pizzaSmallTotalCost;
    double pizzaMediumTotalCost;
    double pizzaLargeTotalCost;
    int drinksPrice;
    // Get size from the user
    std::cout << "Hello, welcome to Brysons pizza shop! ";
    std::cout << "Enter the size of pizza (1 = Small 2 = Medium 3 = Large): ";
    std::cin >> pizzaSize;
    try {
        pizzaSizeInt = std::stoi(pizzaSize);
    } catch (std::invalid_argument) {
        (std::cout << pizzaSize << "is not a valid size");
        return 0;
    }
    if (pizzaSizeInt <= 0) {
        std::cout << "Please enter a positive integer \n";
        return 0;
    } else {
        // Get amount of toppings from the user
        std::cout
        << "How many toppings do you want on your pizza (Max 4): ";
    std::cin >> pizzaToppings;
    }
    try {
        pizzaToppingsInt = std::stoi(pizzaToppings);
    } catch (std::invalid_argument) {
        (std::cout << "The amount you have entered is not an integer");
        return 0;
    }
    if (pizzaToppingsInt < 0) {
        std::cout << "Please enter a positive integer";
        return 0;
    } else {
        // Get amount od drinks from the user
        std::cout << "How many drinks do you want with your pizza: ";
        std::cin >> drinks;
    }
    try {
        drinksInt = std::stoi(drinks);
    } catch (std::invalid_argument) {
        (std::cout << drinksInt << "is not a valid number");
        return 0;
    }
    if (drinksInt < 0) {
        std::cout << "Please enter a positive integer";
        return 0;
    } else {
        // Calculations for small pizza
        if (pizzaSizeInt == SMALL) {
            if (pizzaToppingsInt >= 0 && pizzaToppingsInt <= 4) {
                drinksPrice = drinksInt * DRINKS_COST;
                toppingsPriceSmall = pizzaToppingsInt * TOPPINGS_SMALL;
                // Calculate subtotal of the pizza
                pizzaSmallSubtotal = SMALL_COST + toppingsPriceSmall;
                // Calculate tax total
                pizzaSmallTaxCost = (pizzaSmallSubtotal + drinksPrice) * HST;
                // Calculate total cost of small pizza
                pizzaSmallTotalCost =
                    (pizzaSmallSubtotal + pizzaSmallTaxCost + drinksPrice);
                // Display subtotal, tax and total cost of pizza to user
                std::cout << "The subtotal of your pizza is $"
                << pizzaSmallSubtotal << "\n";
                std::cout << "The subtotal of your drinks is $"
                << drinksPrice << "\n";
                std::cout << "The total cost of tax is $"
                << pizzaSmallTaxCost << "\n";
                std::cout << "The total cost of your pizza and drinks is $"
                << pizzaSmallTotalCost << "\n";
            } else {
                std::cout << "Please enter a number from 0 - 4\n";
            }
        }
        // Calculations for medium pizza
        if (pizzaSizeInt == MEDIUM) {
            if (pizzaToppingsInt >= 0 && pizzaToppingsInt <= 4) {
                drinksPrice = drinksInt * DRINKS_COST;
                toppingsPriceMedium = pizzaToppingsInt * TOPPINGS_MEDIUM;
                // Calculate subtotal of the pizza
                pizzaMediumSubtotal = MEDIUM_COST + toppingsPriceMedium;
                // Calculate tax total
                pizzaMediumTaxCost = (pizzaMediumSubtotal + drinksPrice) * HST;
                // Calculate total cost of medium pizza
                pizzaMediumTotalCost =
                    (pizzaMediumSubtotal + pizzaMediumTaxCost + drinksPrice);
                // Display subtotal, tax and total cost of pizza to user
                std::cout << "The subtotal of your pizza is $"
                << pizzaMediumSubtotal << "\n";
                std::cout << "The subtotal of your drinks is $"
                << drinksPrice << "\n";
                std::cout << "The total cost of tax is $"
                << pizzaMediumTaxCost << "\n";
                std::cout << "The total cost of your pizza and drinks is $"
                << pizzaMediumTotalCost << "\n";
            } else {
                std::cout << "Please enter a number from 0 - 4\n";
            }
        }
        // Calculations for large pizza
        if (pizzaSizeInt == LARGE) {
            if (pizzaToppingsInt >= 0 && pizzaToppingsInt <= 4) {
                drinksPrice = drinksInt * DRINKS_COST;
                toppingsPriceLarge = pizzaToppingsInt * TOPPINGS_LARGE;
                // Calculate subtotal of the pizza
                pizzaLargeSubtotal = LARGE_COST + toppingsPriceLarge;
                // Calculate tax total
                pizzaLargeTaxCost = (pizzaLargeSubtotal + drinksPrice) * HST;
                // Calculate total cost of large pizza
                pizzaLargeTotalCost =
                    (pizzaLargeSubtotal + pizzaLargeTaxCost + drinksPrice);
                // Display subtotal, tax and total cost of pizza to user
                std::cout << "The subtotal of your pizza is $"
                << pizzaLargeSubtotal << "\n";
                std::cout << "The subtotal of your drinks is $"
                << drinksPrice << "\n";
                std::cout << "The total cost of tax is $"
                << pizzaLargeTaxCost << "\n";
                std::cout << "The total cost of your pizza and drinks is $"
                << pizzaLargeTotalCost << "\n";
            } else {
                std::cout << "Please enter a number from 0 - 4\n";
            }
        }
    }
}
