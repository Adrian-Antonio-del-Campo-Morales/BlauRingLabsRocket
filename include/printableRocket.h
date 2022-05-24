/*
 * printableRocket.h
 *
 *  Created on: 24 may. 2022
 *      Author: adelcampo
 */

#ifndef _PRINTABLEROCKET
#define _PRINTABLEROCKET

#include "rocket.h"

    /**
     * @class
     * This class adds the two print functions to the base Rocket
     */
  class PrintableRocket : public Rocket
  {
  public:
    PrintableRocket(int numberOfLines) : Rocket(numberOfLines){};
    ~PrintableRocket() = default;

    virtual void printTheRocket() = 0;
    virtual void printTheRocketUpsideDown() = 0;
  };

#endif // _PRINTABLEROCKET
