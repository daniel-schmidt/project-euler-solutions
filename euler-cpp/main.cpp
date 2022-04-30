#include <iostream>
#include "prob_1.h"

int main(int, char**) {
    std::cout << prob_1::get_precalculated() << std::endl;
    std::cout << prob_1::get_by_loop() << std::endl;
    std::cout << prob_1::get_by_ranges() << std::endl;
}
