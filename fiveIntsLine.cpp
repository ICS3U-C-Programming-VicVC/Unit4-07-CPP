// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Victor Victor-Calixte
// Date: 11/25/26
// This program prints numbers 1000 - 2000,
// with every multiple of 5, starting a new line.

#include<iostream>

int main() {
    for (int counter = 1000; counter < 2001; counter ++) {
        // Checking if the counter is a multiple of 5. If it is,
        // then start a new line.
        // Otherwise, continue that line
        if ((counter + 1) % 5 == 0) {
            std::cout
            << counter
            << "\n";

        } else {
            std::cout
            << counter
            << " ";
        }
    }
}
