#include <numeric>
#include <ranges>
#include <vector>

namespace prob_1 
{
int get_precalculated() 
{
    return 3 * 333 * 167 + 5 * 199 * 100 - 15 * 33 * 67;
}


int get_by_loop()
{
    int result = 0;
    for(int i = 3; i < 1000; i+=3) {
        result += i;
    }
    for(int i = 5; i < 1000; i+=5) {
        if(i%3 != 0) {
            result +=i;
        }
    }
    return result;
}


int get_by_ranges()
{
    using namespace std::views;

    auto div_by_3_or_5 = [](int num) {
        return (num % 3 == 0) || (num % 5 == 0);
    };

    // Sadly, accumulate is not yet range-enabled.
    auto filtered_range = iota(1, 1000) | filter(div_by_3_or_5);
    return std::accumulate(filtered_range.begin(), filtered_range.end(), 0);
}

}