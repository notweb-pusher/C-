// Zero counter in factorial
//Due to the facr that every 2nd number is div. by 2 and only every 5th is div. by 5 the amount of twos is greater
=> As a result, it is enough to count 5.

#include <iostream>


int calculate_factorial_zeros (int factorial){

    int answer = 0;

    while (factorial > 0) {
        factorial /= 5;
        answer += factorial;
    }

    return answer;
}

int main() {

    int factorial;
    std::cin >> factorial;

    std::cout << calculate_factorial_zeros (factorial) << '\n';
    return 0;
}
