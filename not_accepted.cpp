#include <iostream>
#include <charconv>
#include <vector>

int main(){

    std::vector<char> vect = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    for (auto element:vect){
        std::cout << '\t' << element;
    }
    std::cout << '\n';

    for (int row = 2; row < 8; ++row){
        std::cout << (row) << '\t';
        for (int column = 0; column < 16; ++column){
            int index = (row*16 + column);

            if (index >= 97 && index <= 122){
                std::cout << (char)(index - 32) << '\t';
            }
            else{
                std::cout << (char)(index) << '\t';
            }
        }
        std::cout << '\n';
    }
    return 0;
}
