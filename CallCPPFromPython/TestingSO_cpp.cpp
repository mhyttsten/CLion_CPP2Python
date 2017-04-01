//
// Created by Magnus Hyttsten on 2/27/17.
//
#include <dlfcn.h>
#include <iostream>
#include "library.h"

int main() {
    std::cout << "Here I am" << std::endl;
    void * a = dlopen("libCLionProjects.so", RTLD_NOW);
    std::cout << "...opened the library" << std::endl;
    hello();
    std::cout << "Done, exiting" << std::endl;
    return 0;
}
