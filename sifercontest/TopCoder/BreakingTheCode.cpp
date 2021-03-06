/*
 Sifer Aseph
 TopCoder: BreakingTheCode
 http://community.topcoder.com/stat?c=problem_statement&pm=8743
 */

#include <iostream>
#include <string>
#include <map>
#include <cctype>

class BreakingTheCode {
public:
    std::string decodingEncoding (std::string code, std::string message) {
        // Just going to test the first, I don't see any detail otherwise so I'm going to make some assumptions.
        // I really need to refactor this whole thing. Dealing with an off by one problem here. Sigh. Painful.
        if (isdigit(message[0])) {
            std::map<char, int> association;
            int result;
            std::string stringifiedResult;
            
            for (int i = 1; i <= code.size(); ++i) {
                association[code[i]] = i;
            }
            
            // Useful as hell: std::cout << typeid(result).name() << std::endl;
            
            for (int j = 0; j < message.length(); j+=2) {
                result = std::stoi(message.substr(j, 2));
                for (auto &k : association) {
                    if (result == k.second) {
                        stringifiedResult.push_back(k.first-1);
                    }
                }
            }
            
            return stringifiedResult;
        }
        
        if (code.length() == 26 && message.length() >= 1 && message.length() <= 50) {
            std::map<char, int> association;
            std::string result;
            
            for (int i = 0; i < code.size(); ++i) {
                association[code[i]] = i; // a, b, c associated with 1, 2, 3
            }
            
            for (int k = 0; k < message.size(); ++k) {
                for (auto &j : association) {
                    if (message[k] == j.first) {
                        result += std::to_string((j.second) + 1) + " "; // Key! Don't use ++ because it stores the value.
                    }
                }
            }
            
            return result;
        } else {
            exit(EXIT_FAILURE);
        }
    }
    
    /*
     The conditionals are a pain. I wonder if there is a shorter way to do the conditionals (test each letter's occurrence or that it's lower case)?
     
     Thought of two things, decided to go with using something from STL so I couldn't use this one. This is only a self-reminder for future reference:
     std::string example = "abc";
     std::cout << example[0] << " = stuff here = " << s[2];
     */
};

int main () {
    BreakingTheCode test;
    
    //std::cout << test.decodingEncoding("faxmswrpnqdbygcthuvkojizle", "02170308060416192402") << std::endl;
    //std::cout << test.decodingEncoding("qesdfvujrockgpthzymbnxawli", "mwiizkelza") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "00010203") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "04050607") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "08091011") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "12131415") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "16171819") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "20212223") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "20051920") << std::endl;
    
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "abababa") << std::endl;
    //std::cout << test.decodingEncoding("abcdefghijklmnopqrstuvwxyz", "test") << std::endl;
    //std::cout << test.decodingEncoding("qesdfvujrockgpthzymbnxawli", "mwiizkelza") << std::endl;
    
    return 0;
}
