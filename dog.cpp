// William Diamond
// 1224931045

#include <string>
#include <iostream>
#include "dog.hpp"

float dog::CalculateFee() const {
    return pet::CalculateFee();
}

const std::string& dog::GetName() const {
    return pet::GetName();
}

dog::dog(const std::string& name, float weight) : pet(name, weight) {
    licensingRate = 2.0;
}
