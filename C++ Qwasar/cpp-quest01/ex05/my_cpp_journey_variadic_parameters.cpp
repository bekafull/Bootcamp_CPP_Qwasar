#include <iostream>
#include <iomanip>

int main() {
  const int integer = 40;
  const char c      = '.';
  std::string s1    = "I'm ";
  std::string s2    = "years old";

  std::cout << s1 << integer << " " << s2 << c << std::endl;
  return 0;
}
