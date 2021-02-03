#include <iostream>
#include <fstream>
#include <sstream> 

int main(int argc, char *argv[]) {
    std::ifstream file (argv[1]);
    std::string program;
    getline(file, program, (char) file.eof());
    int value = 0;
    std::string tok;
    std::istringstream iterate (program, std::istringstream::in);
    while(iterate >> tok) {
        if(tok == "why") { // value + 1
            value++;
        } else if(tok == "no") { // value + 10
            value += 10;
        } else if(tok == "work") { // value - 1
            value--;
        } else if(tok == "not") { // value - 10
            value -= 10;
        } else if(tok == ":(") { // value * 2
            value *= 2;
        } else if(tok == ":)") { // value / 2
            value /= 2;
        } else if(tok == "!") { // output value as a character
            std::cout << (char) value;
        } else if(tok == "?") { // output value as an integer
            std::cout << value;
        } else if(tok == "help") { // reset value
            value = 0;
        } else if(tok == "pls") { // square value
            value *= value;
        }
    }
    return 0;
}
