// Copyright (c) 2019 St Mother Teresa High School All rights reserved
//
// Created by DJ Watson
// Created on November 2019
// This program prints a mailing address in proper format

#include <iostream>
#include <string>


int mailAddress(std::string firstName,  std::string middleName,
                std::string lastName, std::string number, std::string street,
                std::string city, std::string province, std::string postal) {
    if (middleName == "_") {
        std::cout << firstName << " " << lastName << std::endl;
    } else {
        std::cout << firstName << " " << middleName << " " << lastName <<
        std::endl;
    }
    std::cout << " " << number << " " << street << std::endl;
    std::cout << " " << city << " " << province << " " << postal;
}


int main() {
    std::string firstNameInput;
    std::string middleNameInput;
    std::string lastNameInput;
    std::string numberInput;
    std::string streetInput;
    std::string cityInput;
    std::string provinceInput;
    std::string postalInput;
    std::string mail;

    std::cout << "enter you first name: " << std::endl;
    std::cin >> firstNameInput;
    std::cout << "enter you middle name (underscore if none): " << std::endl;
    std::cin >> middleNameInput;
    std::cout << "enter you last name: " << std::endl;
    std::cin >> lastNameInput;
    std::cout << "enter street number: " << std::endl;
    std::cin >> numberInput;
    std::cout << "enter street name: " << std::endl;
    std::cin >> streetInput;
    std::cout << "enter city name: " << std::endl;
    std::cin >> cityInput;
    std::cout << "enter province name: " << std::endl;
    std::cin >> provinceInput;
    std::cout << "enter postal code: " << std::endl;
    std::cin >> postalInput;
    std::cout << "" << std::endl;

    mail = mailAddress(firstNameInput, middleNameInput, lastNameInput,
                       numberInput, streetInput, cityInput, provinceInput,
                       postalInput);
}
