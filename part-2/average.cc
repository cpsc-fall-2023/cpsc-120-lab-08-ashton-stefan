// Ashton Torres
// ashtontorres465@csu.fullerton.edu
// @ashtontorres465
// Partners: @spatrascu

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (argc < 2) {
    std::cout << "Error: please provide an argument";
    return 1;
  } else {
    double total{0};
    bool first{true};
    for (std::string& argument : arguments) {
      if (first) {
        first = false;
        continue;
      }
      double number{std::stod(argument)};
      total += number;
    }

    double yyy = total / static_cast<double>(arguments.size() - 1);

    std::cout << "average = " << yyy << "\n";
    return 0;
  }
}
