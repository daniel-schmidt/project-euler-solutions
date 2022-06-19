#include <iostream>
#include "prob_1.h"
#include "prob_2.h"

int main(int, char**) {
    std::cout << prob_1::get_precalculated() << std::endl;
    std::cout << prob_1::get_by_loop() << std::endl;
    std::cout << prob_1::get_by_ranges() << std::endl;

    std::cout << prob_2::sum_of_even_fib_below(4e6) << std::endl;
}
