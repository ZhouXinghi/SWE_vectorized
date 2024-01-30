#include <chrono> 

class CTimer {
public:
    void start() {
        start_time = std::chrono::high_resolution_clock::now();
    }

    void stop() {
        end_time = std::chrono::high_resolution_clock::now();
    }

    long long elapsed_time() {
        auto result = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
        return result;
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time;
};

