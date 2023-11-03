#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>

class TwoSum
{
public:
    static std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
    {
        std::unordered_map<int, int> sumMap;

        for (std::size_t i = 0; i < list.size(); ++i)
        {
            auto sumMapit = sumMap.find(sum - list[i]);

            if (sumMapit != sumMap.end())
                return std::make_pair(i, sumMapit->second);

            sumMap[list[i]] = i;
        }

        return std::make_pair(-1, -1);
    }
};

#ifndef RunTests
int main()
{
    std::vector<int> list;
    list.push_back(1);
    list.push_back(3);
    list.push_back(5);
    list.push_back(7);
    list.push_back(9);

    std::pair<int, int> indices = TwoSum::findTwoSum(list, 12);
    std::cout << indices.first << '\n' << indices.second;
}
#endif


//#include <stdexcept>
//#include <iostream>
//#include <vector>
//#include <utility>
//
//class TwoSum
//{
//public:
//    static std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
//    {
//        for (int i = 0; i < list.size(); i++) {
//            for (int j = i + 1; j < list.size(); j++) {
//                if (list[i] + list[j] == sum) {
//                    return std::make_pair(i, j);
//                }
//
//            }
//
//        }
//        return std::make_pair(-1, -1);
//    }
//};
//
//#ifndef RunTests
//int main()
//{
//    std::vector<int> list;
//    list.push_back(1);
//    list.push_back(3);
//    list.push_back(5);
//    list.push_back(7);
//    list.push_back(9);
//
//    std::pair<int, int> indices = TwoSum::findTwoSum(list, 12);
//    std::cout << indices.first << '\n' << indices.second;
//}
//#endif