#include <iostream>
#include <vector>
#include "animal.h"
#include "cat.h"
#include "dog.h"

int main() {
    std::vector<Animal*> animals;
    animals.push_back(new Cat("Whiskers"));
    animals.push_back(new Dog("Fido"));

    for (const auto& animal : animals) {
        std::cout << animal->getName() << " says " << animal->makeSound() << std::endl;
    }

    for (auto& animal : animals) {
        delete animal;
    }

    return 0;
}
