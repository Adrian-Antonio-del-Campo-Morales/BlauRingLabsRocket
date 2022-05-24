/*
 * printableRocketPRINTF.cpp
 *
 *  Created on: 24 may. 2022
 *      Author: adelcampo
 */

#include "printableRocket.h"

namespace ROCKET
{

    /**
     * @class
     * This class uses printf to print the rocket
     */
    class PrintableRocketPRINTF : public PrintableRocket
    {
    public:
        PrintableRocketPRINTF(int numberOfLines) : PrintableRocket(numberOfLines) {}
        ~PrintableRocketPRINTF() = default;

        void printTheRocket() override
        {
            for (auto currentLine = getRocket()->begin(); currentLine != getRocket()->end(); ++currentLine)
            {
                for (char &c : *currentLine)
                    printf("%c", c);
                printf("\n");
            }
        }

        void printTheRocketUpsideDown() override
        {
            for (auto currentLine = getRocket()->rbegin(); currentLine != getRocket()->rend(); ++currentLine)
            {
                for (char &c : *currentLine)
                    printf("%c", c);
                printf("\n");
            }
        }
    };

} // namespace ROCKET