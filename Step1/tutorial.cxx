// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

// Include TutorialConfig.h
#include "TutorialConfig.h"

int main(int argc, char* argv[])
{
  if (argc < 2) {
    // Create a print statement using Tutorial_VERSION_MAJOR
    // and Tutorial_VERSION_MINOR
    std::cout << "Version: "
        << Tutorial_VERSION_MAJOR << "."
        << Tutorial_VERSION_MINOR << "."
        << Tutorial_VERSION_PATCH << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  // Replace atof(argv[1]) with std::stod(argv[1])
  double const inputValue = std::stod(argv[1]);

  // calculate square root
  double const outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
