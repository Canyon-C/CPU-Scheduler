#include <iostream>
class Process {
    public:
        std::string processName;
        int totalTime;
        Process (std::string processName, int totalTime){
            this->processName = processName;
            this->totalTime = totalTime;
        }
        void updateRunTime(int quantumtime) {
    //write method to update totalTime after each quantum cycle.
            totalTime -= quantumtime;
        }
        void print () {
    //write print method to print the name of the process and the time left
            std::cout << "Process " << processName << " " << totalTime << " seconds" << std::endl;

        }
};