/*
 Sifer Aseph
 SimpleCalculator
 
 http://community.topcoder.com/stat?c=problem_statement&pm=2272
 */

#include <iostream>
#include <string>

class SimpleCalculator {
public:
    int calculate (std::string input) {
        int result = 0;
        
        if (input.length() >= 3 && input.length() <= 50) {
            /*
             char plus = '+';
             char minus = '-';
             char multiply = '*';
             char divide = '/';
             */
            
            if (input.find('+')) {
                std::string firstNumber = input.substr(0, input.find('+'));
                std::string secondNumber = input.substr((input.find('+')+1), input.length());
                int convertedFirst = std::atoi(firstNumber.c_str());
                int convertedSecond = std::atoi(secondNumber.c_str());
                result = convertedFirst + convertedSecond;
                return result;
            } else if (input.find('-')) {
                std::string firstNumber = input.substr(0, input.find('-'));
                std::string secondNumber = input.substr(input.find('-')+1, input.length());
                std::cout << firstNumber << std::endl;
                std::cout << secondNumber << std::endl;
                int convertedFirst = std::atoi(firstNumber.c_str());
                int convertedSecond = std::atoi(secondNumber.c_str());
                result = convertedFirst - convertedSecond;
                return result;
            } else if (input.find('*')) {
                std::string firstNumber = input.substr(0, input.find('*'));
                std::string secondNumber = input.substr(input.find('*')+1, input.length());
                int convertedFirst = std::atoi(firstNumber.c_str());
                int convertedSecond = std::atoi(secondNumber.c_str());
                result = convertedFirst * convertedSecond;
                return result;
            } else if (input.find('/')) {
                std::string firstNumber = input.substr(0, input.find('/'));
                std::string secondNumber = input.substr(input.find('/')+1, input.length());
                int convertedFirst = std::atoi(firstNumber.c_str());
                int convertedSecond = std::atoi(secondNumber.c_str());
                result = convertedFirst % convertedSecond;
                return result;
            }
            
            /*
             I wish I had done this instead:
             int left, right;
             char operator;
             
             std::stringstream streamed(input);
             input >> left >> operator >> right;
             
             switch(operator) {
                case: '+':
                    // stuff
                    break;
                default:
                    // stuff
             }
             
             :( :( :(
             */
        }
        
        return result;
    }
};

int main() {
    SimpleCalculator test;
    
    std::cout << test.calculate("5-3") << std::endl;
    //std::cout << test.calculate("15*3") << std::endl;
    //std::cout << test.calculate("1-100") << std::endl;
    //std::cout << test.calculate("5+3") << std::endl;
    
    return 0;
}
