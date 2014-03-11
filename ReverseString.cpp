#include <iostream>
#include <string>

// to compile: g++ ReverseString.cpp -o ReverseString.exe
// to run: ./ReverseString.exe

// reverses a string using recursion
void reverseString(std::string s, int size, std::string &result) {

  if (size > 0) {

    result.append(s.substr(size-1, 1));
    reverseString(s, size-1,result);
  }
}

int main(void) {

  std::string result = "";
  reverseString("hello",5,result);
  std::cout << result << std::endl;
  return 0;
}
