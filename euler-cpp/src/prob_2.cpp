#include "prob_2.h"

#include <cassert>
#include <cmath>

namespace prob_2
{   

// Calculate the nth fibonacci number using the formula of Moivre-Binet.
int fib_moivre_binet(int n)
{
    // the golden ratio and its inverse
    const double phi = (1.0 + std::sqrt(5.0))/2.0;
    const double psi = (1.0 - std::sqrt(5.0))/2.0;
    const double inv_sqrt_5 = 1.0 / std::sqrt(5.);
    return inv_sqrt_5 * (std::pow(phi, n) - std::pow(psi, n));    
}

int sum_of_even_fib_below(int threshold)
{
    int sum = 0;
    int idx = 3;
    int cur_fib = 0;

    do{
        cur_fib = fib_moivre_binet(idx);
        assert(cur_fib % 2 == 0);
        
        sum += cur_fib;
        idx += 3;
    } while (cur_fib < threshold);

    return sum;
}

}