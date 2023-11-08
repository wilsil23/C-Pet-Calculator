// William Diamond
// 1224931045

#ifndef pet_hpp
#define pet_hpp
#include <string>
#include<iostream>
using namespace std;
class pet
{
public:
    pet(const std::string& name, float weight);
    virtual ~pet();
    
    virtual float CalculateFee() const = 0;
    const std::string& GetName() const;
protected:
    std::string name;
    float weight;
    float licensingRate;
};

#endif