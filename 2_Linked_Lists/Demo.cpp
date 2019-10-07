#include<iostream>

int main() {
    if (__cplusplus == 20703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 19971L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
}