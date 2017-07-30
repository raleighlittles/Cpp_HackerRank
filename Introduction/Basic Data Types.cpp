#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>


int main() {
    std::string input;
    // Read input from cin, stop at end of line, store in string 'input'
    std::getline(std::cin, input);
    
    // Create a stringstream object for our 'input' string
    std::istringstream buffer(input);
    
    // Create an iterator of type istream to iterate through our istringstream object
    std::istream_iterator <std::string> beginning(buffer), end;
    
    // Vector stores our string separated by commas
    std::vector<std::string> tokens(beginning, end);
    
    std:: cout << tokens[0] << std::endl;
    
    std:: cout << tokens[1] << std::endl;
    std:: cout << tokens[2] << std::endl;
    float f = std::stof(tokens[3]);
    printf("%.3f\n", f);
    double d = std::stod(tokens[4]);
    printf("%.9lf\n", d);


}
