// William Diamond
// 1224931045

#include <string>
#include <iostream>
#include "pet.hpp"

float pet::CalculateFee() const {
    return weight * licensingRate;
}
pet::pet(const std::string& name, float weight) : name(name), weight(weight) {}

const std::string& pet::GetName() const {
    return name;
}

pet::~pet() {}
