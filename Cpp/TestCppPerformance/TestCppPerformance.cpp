
#include <chrono>
#include <format>
#include <iostream>
#include <thread>

int main()
{
    const int64_t kLoopCount = 10000000000; // meaningful count: 10000000000
    int64_t total = 0;
    auto startTime = std::chrono::steady_clock::now();
    for (int64_t i = 0; i < kLoopCount; i++)
    {
        total += i;
    }
    auto endTime = std::chrono::steady_clock::now();
    auto diff = endTime - startTime;
    auto d = std::chrono::duration_cast<std::chrono::milliseconds>(diff);
#ifdef _DEBUG
    std::string configuration = "DEBUG";
#else
    std::string configuration = "RELEASE";
#endif
    std::cout << std::format("C++  {} loop count:{},total:{},duration:{}ms", configuration, kLoopCount, total, d.count()) << std::endl;
}
