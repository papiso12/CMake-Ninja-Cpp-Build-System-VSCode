#include "dog.h"

Dog::Dog(const std::string& name) : Animal(name) {}

std::string Dog::makeSound() const {
    return "Woof";
}
