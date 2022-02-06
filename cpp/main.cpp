#include <iostream>

namespace prob_1 
{

// Returns the hand-calculated value obtained by the Gaussian sum formula:
// 3 * sum_{i=1}^{333} i + 5 * sum_{i=1}^{199} i = 3 * 333 * 167 + 5 * 199 * 100
int get_precalculated() 
{
    return 266333;
}

}


int main(int, char**) {
    std::cout << prob_1::get_precalculated();
}
