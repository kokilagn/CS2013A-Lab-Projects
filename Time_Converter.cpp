
#include <iostream>

int main() {

  // Declare Variables
    int totalSeconds, hours, minutes, seconds;
    // Input
    std::cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

//Output 1 : Labeled lines
    std::cout << "Hours: " << hours << std::endl;
    std::cout << "Minutes: " << minutes << std::endl;
    std::cout << "Seconds: " << seconds << std::endl;

    //Output 2 : Compact format
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}
