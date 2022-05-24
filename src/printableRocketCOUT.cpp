/*
 * printableRocketCOUT.cpp
 *
 *  Created on: 24 may. 2022
 *      Author: adelcampo
 */

#include "printableRocket.h"
#include <iostream>

namespace ROCKET
{

    /**
     * @class
     * This class uses std::cout to print the rocket
     */
  class PrintableRocketCOUT : public PrintableRocket
  {
  public:
    PrintableRocketCOUT(int numberOfLines) : PrintableRocket(numberOfLines) {}
    ~PrintableRocketCOUT() = default;

    void printTheRocket() override
    {
      for (auto currentLine = getRocket()->begin(); currentLine != getRocket()->end(); ++currentLine)
        std::cout << *currentLine << std::endl;
    }

    void printTheRocketUpsideDown() override
    {
      for (auto currentLine = getRocket()->rbegin(); currentLine != getRocket()->rend(); ++currentLine)
        std::cout << *currentLine << std::endl;
    }
  };

} // namespace ROCKET