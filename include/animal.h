#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal(const std::string& name);
    virtual ~Animal() = default;

    virtual std::string makeSound() const = 0;
    std::string getName() const;

private:
    std::string name;
};

#endif // ANIMAL_H
