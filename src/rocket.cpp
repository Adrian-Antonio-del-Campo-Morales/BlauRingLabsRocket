/*
 * rocket.cpp
 *
 *  Created on: 24 may. 2022
 *      Author: adelcampo
 */

#include "rocket.h"

namespace ROCKET
{

    Rocket::Rocket(int numberOfLines)
    {
        _numberOfLines = numberOfLines;
        buildTheRocket();
    }

    std::vector<std::string> *Rocket::getRocket()
    {
        return &_theRocket;
    }

    void Rocket::buildTheRocket()
    {
        buildTheTip();
        buildTheBody();
        buildTheFeet();
    }

    void Rocket::buildTheTip()
    {
        std::string lineString = "";

        // Edge case caused by the existance of the feet making the rocket taller
        if (_numberOfLines == 1)
        {
            lineString += EMPTY_CHAR;
            lineString += TIP_CHAR;
            _theRocket.push_back(lineString);
        }
        else
        {
            // Spaces to center the tip
            for (int spaces = 0; spaces < _numberOfLines - 1; spaces++)
                lineString += EMPTY_CHAR;

            // Tip of the rocjet
            lineString += TIP_CHAR;

            _theRocket.push_back(lineString);
        }
    }

    void Rocket::buildTheBody()
    {
        std::string lineString = "";

        // Edge case caused by the existance of the feet making the rocket taller
        if (_numberOfLines == 1)
        {
            lineString += EMPTY_CHAR;
            lineString += BODY_CHAR;
            _theRocket.push_back(lineString);
        }
        else
        {
            int currentLine, spaces, characters;
            for (currentLine = 1; currentLine <= _numberOfLines; currentLine++)
            {
                lineString = "";

                // Spaces to place the first character of the current line in the rigth place 
                for (spaces = 0; spaces < (_numberOfLines - currentLine); spaces++)
                    lineString += EMPTY_CHAR;

                // Characters for the current line
                for (characters = 0; characters < (2 * currentLine - 1); characters++)
                    lineString += BODY_CHAR;

                _theRocket.push_back(lineString);
            }
        }
    }

    void Rocket::buildTheFeet()
    {
        std::string lineString = "";

        int spaces;

        // First foot
        lineString += FEET_CHAR;

        // Spaces to center the second foot
        for (spaces = 0; spaces < (((_numberOfLines * 2) - 3) / 2); spaces++)
            lineString += EMPTY_CHAR;

        // Second foot
        lineString += FEET_CHAR;

        // Spaces to put the third foot at the edge
        for (spaces = 0; spaces < (((_numberOfLines * 2) - 3) / 2); spaces++)
            lineString += EMPTY_CHAR;

        // Third foot
        lineString += FEET_CHAR;

        _theRocket.push_back(lineString);
    }

} // namespace ROCKET