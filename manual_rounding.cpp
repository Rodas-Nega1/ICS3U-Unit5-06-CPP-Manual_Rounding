// Copyright (c) 2021 Rodas Nega All rights reserved.
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user for a decimal and how many places
//  they want to round it off by, and prints the rounded decimal


#include <iostream>
#include <cmath>


void RoundingMethod(float &roundNumber, int decimalPlaceInt) {
    // process
    roundNumber = (roundNumber * pow(10, decimalPlaceInt)) + 0.5;
    roundNumber = static_cast<int>(roundNumber);
    roundNumber = static_cast<float>(roundNumber);
    roundNumber = roundNumber / pow(10, decimalPlaceInt);
}

main() {
    // this function calls the precedent function

    float roundNumber;
    std::string userPrompt;
    float userPromptFloat;
    std::string decimalPlace;
    int decimalPlaceInt;

    // input & output
    std::cout << "Enter the number to round: ";
    std::cin >> userPrompt;

    std::cout << "Enter how many places you want to round by: ";
    std::cin >> decimalPlace;

    try {
        userPromptFloat = std::stof(userPrompt);
        decimalPlaceInt = std::stoi(decimalPlace);

        std::cout << "" << std::endl;
        RoundingMethod(userPromptFloat, decimalPlaceInt);

        std::cout << "Your rounded number is " << userPromptFloat << ".";
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "That is an invalid number.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
