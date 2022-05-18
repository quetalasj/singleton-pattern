#include "Singleton.h"
#include "iostream"

std::shared_ptr<Singleton> Singleton::uniqueInstance = std::make_shared<Singleton>(Singleton());

std::shared_ptr<Singleton> Singleton::getInstance() {
    std::cout << "Get Instance" << std::endl;
    if (uniqueInstance == nullptr) {
        std::cout<< "Create new instance" << std::endl;
        Singleton instance = Singleton();
        uniqueInstance = std::make_shared<Singleton>(instance);
    }
    return uniqueInstance;
}
Singleton::Singleton() {}

