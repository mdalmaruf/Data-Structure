#include <iostream>
#include <vector>
#include <set>
#include <string>

class MergeNames
{
public:
    static std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
    {
        std::set<std::string>uniqueSet; //use set

        for (auto& name : names1) {
            uniqueSet.insert(name);
        }
        for (auto& name : names2) {
            uniqueSet.insert(name);
        }

        std::vector<std::string> uniqueNames(uniqueSet.begin(), uniqueSet.end());

        return uniqueNames;

    }
};

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = { "Ava", "Emma", "Olivia" };
    std::vector<std::string> names2 = { "Olivia", "Sophia", "Emma" };

    std::vector<std::string> result = MergeNames::unique_names(names1, names2);
    for (auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif