namespace prob_1 
{
// Problem 1: Multiples of 3 and 5
//
// Calculate the sum of all multiples of 3 or 5 below 1000.


// Returns the hand-calculated value obtained by the Gaussian sum formula:
// 3 * sum_{i=1}^{333} i + 5 * sum_{i=1}^{199} i = 3 * 333 * 167 + 5 * 199 * 100
// To compensate the numbers divisible by both 3 and 5, we subtract 
// 15 * sum_{i=1}^{66} i = 15 * 33 * 67
int get_precalculated();

// Calculate the sum with two traditional for-loops which increment in steps of 3
// and 5 respectively.
int get_by_loop();

// Calculate the sum in a single loop using views to filter out all integers not
// divisible by 3 or 5.
int get_by_ranges();

}