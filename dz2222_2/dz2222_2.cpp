#include <iostream>
#include <fstream>
#include <string>

int longestLineLength(const std::string& filename) {
    std::ifstream inFile(filename);

    if (!inFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return -1;
    }

    std::string line;
    int maxLength = 0;
    while (std::getline(inFile, line)) {
        if (line.length() > maxLength) {
            maxLength = line.length();
        }
    }

    inFile.close();
    return maxLength;
}

int main() {
    std::string filename = "input.txt";
    int length = longestLineLength(filename);
    if (length != -1) {
        std::cout << "The length of the longest line is: " << length << std::endl;
    }
    return 0;
}
