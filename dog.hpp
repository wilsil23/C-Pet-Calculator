// William Diamond
// 1224931045

#ifndef dog_hpp
#define dog_hpp
#include <string>
#include<iostream>
#include "pet.hpp"
using namespace std;
class dog: public pet 
{
    public:
        dog(const std::string& name, float weight);
        float CalculateFee() const override;
        const std::string& GetName() const;
};

#endif