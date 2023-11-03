#include <stdexcept>
#include <iostream>
#include <deque>


class TrainComposition
{
private:
    std::deque<int>wagons;
public:
    void attachWagonFromLeft(int wagonId)

    {
        wagons.push_front(wagonId);
        //throw std::logic_error("Waiting to be implemented");
    }

    void attachWagonFromRight(int wagonId)
    {
        wagons.push_back(wagonId);

    }

    int detachWagonFromLeft()
    {
        if (wagons.empty()) {
            throw std::logic_error("No wagons to detach");
        }
        int detachedWagon = wagons.front();
        wagons.pop_front();
        return detachedWagon;

    }

    int detachWagonFromRight()
    {
        if (wagons.empty()) {
            throw std::logic_error("No wagons to detach");
        }
        int detachedWagon = wagons.back();
        wagons.pop_back();
        return detachedWagon;
    }
};

#ifndef RunTests
int main()
{
    TrainComposition tree;
    tree.attachWagonFromLeft(7);
    tree.attachWagonFromLeft(13);
    std::cout << tree.detachWagonFromRight() << "\n"; // 7 
    std::cout << tree.detachWagonFromLeft(); // 13
}
#endif