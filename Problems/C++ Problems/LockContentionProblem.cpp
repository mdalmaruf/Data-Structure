#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex mtx;  // Mutex for synchronization

void writeToSharedResource(int threadId) {
    std::lock_guard<std::mutex> lock(mtx);  // Acquiring the lock
    std::cout << "Thread " << threadId << " is writing to the shared resource." << std::endl;
    // mtx is automatically released when lock goes out of scope
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < 5; ++i) {
        threads.emplace_back(writeToSharedResource, i);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}
