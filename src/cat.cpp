#include "cat.h"

Cat::Cat(const std::string& name) : Animal(name) {}

std::string Cat::makeSound() const {
    return "Meow";
}
