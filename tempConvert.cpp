// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 21th, 2023
// This program asks the user for the temperature in
// Celsius and display that temperature in Fahrenheit
#include <iostream>


void CalcTemp() {
    // Declare variables
    float tempFloat, tempFar;
    std::string tempStr;

    // get temperature from user
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> tempStr;

    // Make sure the temperature is a float
    try {
        // convert the user's guess to an float
        tempFloat = std::stof(tempStr);

        // Calculate temperature in Fahrenheit
        tempFar = (9.0 / 5) * tempFloat + 32;

        // Display temperature in Fahrenheit
        std::cout << tempStr << " ° C is " << tempFar << " ° F." << std::endl;
    } catch (std::exception) {
        // user did not enter a float
        std::cout << tempStr << " is not a number." << std::endl;
    }
}

int main() {
    CalcTemp();
}
