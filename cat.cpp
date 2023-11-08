// William Diamond
// 1224931045

#include <string>
#include <iostream>
#include "cat.hpp"

float cat::CalculateFee() const {
    return pet::CalculateFee();
}

const std::string& cat::GetName() const {
    return pet::GetName();
}

cat::cat(const std::string& name, float weight) : pet(name, weight) {
    licensingRate = 1.5;
}
