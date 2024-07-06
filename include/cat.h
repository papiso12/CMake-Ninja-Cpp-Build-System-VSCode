#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal {
public:
    Cat(const std::string& name);

    std::string makeSound() const override;
};

#endif // CAT_H
