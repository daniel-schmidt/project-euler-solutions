#include <iostream>
#include "../include/prob_2.h"

int main(int, char**) {
    int constexpr expected = 2+8+34;
    int const result = prob_2::sum_of_even_fib_below(90);
    bool const success = result == expected;
    std::cout << std::boolalpha <<  success << result << std::endl;
}