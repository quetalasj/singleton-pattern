#pragma once
#include "memory"


class Singleton {
private:
    static std::shared_ptr<Singleton> uniqueInstance;
    Singleton();
public:
    static std::shared_ptr<Singleton> getInstance();
};
