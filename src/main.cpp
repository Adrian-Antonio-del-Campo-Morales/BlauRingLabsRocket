#include <iostream>

#include "printableRocketCOUT.cpp"
#include "printableRocketPRINTF.cpp"

void printUsage()
{
  std::cerr << "Usage: rocket -l (1...100) [-i]" << std::endl;
}

int main(int argc, char *argv[])
{
  int retval = 0;

  if (argc == 3 &&
      std::string(argv[1]) == "-l" &&
      strtol(argv[2], nullptr, 0) > 0 &&
      strtol(argv[2], nullptr, 0) < 101)
  {
    ROCKET::PrintableRocketCOUT aPRCOUT(strtol(argv[2], nullptr, 0));
    aPRCOUT.printTheRocket();
  }
  else if (argc == 4 &&
           std::string(argv[1]) == "-l" &&
           strtol(argv[2], nullptr, 0) > 0 &&
           std::string(argv[3]) == "-i")
  {
    ROCKET::PrintableRocketPRINTF aPRPRINTF(strtol(argv[2], nullptr, 0));
    aPRPRINTF.printTheRocketUpsideDown();
  }
  else
  {
    retval = 1;
    printUsage();
  }

  return retval;
}