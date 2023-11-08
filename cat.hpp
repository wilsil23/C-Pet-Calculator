// William Diamond
// 1224931045

#ifndef cat_hpp
#define cat_hpp
#include <string>
#include <iostream>
#include "pet.hpp"
using namespace std;
class cat: public pet 
{
    public:
        cat(const std::string& name, float weight);
        float CalculateFee() const override;
        const std::string& GetName() const;
};

#endif