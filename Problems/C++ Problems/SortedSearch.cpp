#include <vector>
#include <stdexcept>
#include <iostream>

class SortedSearch
{
public:
    static int countNumbers(const std::vector<int>& sortedVector, int lessThan)
    {
        //auto result = std::lower_bound(std::begin(sortedVector), std::end(sortedVector), lessThan);
        //return std::distance(std::begin(sortedVector), result);
        int low = 0, high = sortedVector.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (sortedVector[mid] < lessThan) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }


};

#ifndef RunTests
int main()
{
    std::vector<int> v{ 1, 3, 5, 7 };
    std::cout << SortedSearch::countNumbers(v, 4);
}
#endif