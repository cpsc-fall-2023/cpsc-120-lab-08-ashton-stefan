// Stefan Patrascu
// spatrascu@csu.fullerton.edu
// @spatrascu
// partner: @ashtontorres465

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  
  if (argc < 2){
    std::cout << "Error: please provide an argument";
    return -1;
}
  else { 


  double x;
  for (int i = 1; i < arguments.size();i++){
    x += std::stod(arguments[i]);
}

  
  double y = x / (arguments.size() - 1);
  
  std::cout << "average = " << y << "\n";

  return 0;
}
}
