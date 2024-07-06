#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
public:
    Dog(const std::string& name);

    std::string makeSound() const override;
};

#endif // DOG_H
