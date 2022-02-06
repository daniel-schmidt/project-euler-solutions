#include <iostream>

namespace prob_1 
{
// Problem 1: Multiples of 3 and 5
//
// Calculate the sum of all multiples of 3 or 5 below 1000.


// Returns the hand-calculated value obtained by the Gaussian sum formula:
// 3 * sum_{i=1}^{333} i + 5 * sum_{i=1}^{199} i = 3 * 333 * 167 + 5 * 199 * 100
int get_precalculated() 
{
    return 266333;
}

// Calculate the sum with two traditional for-loops which increment in steps of 3
// and 5 respectively.
int get_by_loop()
{
    int result = 0;
    for(int i = 3; i < 1000; i+=3) {
        result += i;
    }
    for(int i = 5; i < 1000; i+=5) {
        result +=i;
    }
    return result;
}

}


int main(int, char**) {
    std::cout << prob_1::get_precalculated() << std::endl;
    std::cout << prob_1::get_by_loop() << std::endl;
}
