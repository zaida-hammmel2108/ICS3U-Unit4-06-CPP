// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Zaida Hammel
// Created on: Nov 2022
// This program generates all possible rgb values

#include <iostream>
#include <string>

int main() {
    // this function uses for loops to find rgb values
    int value = 0;
    int rValue = 0;
    int gValue = 0;
    int bValue = 0;

    // process and output
    for (int loopCounter1 = 0; loopCounter1 < 255; loopCounter1++) {
        for (int loopCounter2 = 0; loopCounter2 < 255; loopCounter2++) {
            for (int loopCounter3 = 0; loopCounter3 < 255; loopCounter3++) {
                std::cout << "R " << loopCounter1 << "G "
                          << loopCounter2 << " B" << loopCounter3 << std::endl;
            }
        }
    }
    std::cout << "\nDone.";
}
