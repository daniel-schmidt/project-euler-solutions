#include "prob_2.h"

#include <cassert>
#include <cmath>

namespace prob_2
{   

int sum_of_even_fib_below(int threshold)
{
    int f_2 = 1;        // Fibonacci number n-2
    int f_1 = 2;        // Fibonacci number n-1
    int sum = 2;
    do {
        int f_curr = f_1 + f_2; // Fibonacci number n-1
        if(f_curr % 2 == 0) {
            sum += f_curr;
        }
        f_2 = f_1;
        f_1 = f_curr;
    } while(f_1 <= threshold);
    return sum;
}


// Calculate the nth fibonacci number using the formula of Moivre-Binet.
int fib_moivre_binet(int n)
{
    // the golden ratio and its inverse
    const double phi = (1.0 + std::sqrt(5.0))/2.0;
    const double psi = (1.0 - std::sqrt(5.0))/2.0;
    const double inv_sqrt_5 = 1.0 / std::sqrt(5.);
    return inv_sqrt_5 * (std::pow(phi, n) - std::pow(psi, n));    
}

int clever_sum_of_even_fib_below(int threshold)
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