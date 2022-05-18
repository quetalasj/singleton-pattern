#include <iostream>
#include "Singleton.h"

using namespace std;

int main() {
    shared_ptr<Singleton> uniqueInstance = Singleton::getInstance();
    shared_ptr<Singleton> sameInstance = Singleton::getInstance();
    return 0;
}
