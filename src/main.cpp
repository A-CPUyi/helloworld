#include <iostream>
#include "HelloMessage.hpp"

int main() {
    //release as function terminates
    HelloMessage message = HelloMessage();
    std::cout<<message.getMessage();
}