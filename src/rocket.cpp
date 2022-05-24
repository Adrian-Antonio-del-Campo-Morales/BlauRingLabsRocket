/*
 * rocket.cpp
 *
 *  Created on: 24 may. 2022
 *      Author: adelcampo
 */

#include "rocket.h"
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

    // Spaces to center the tip
    for (int spaces = 0; spaces < _numberOfLines - 1; spaces++)
        lineString += " ";

    // Tip of the rocket
    lineString += "|";

    _theRocket.push_back(lineString);
}
void Rocket::buildTheBody()
{
    std::string lineString = "";

    int currentLine, spaces, characters;
    for (currentLine = 1; currentLine <= _numberOfLines; currentLine++)
    {
        lineString = "";

        // Spaces to place the first character of the current line in the rigth place
        for (spaces = 0; spaces < (_numberOfLines - currentLine); spaces++)
            lineString += " ";

        // Characters for the current line
        for (characters = 0; characters < (2 * currentLine - 1); characters++)
            lineString += "X";

        _theRocket.push_back(lineString);
    }
}
void Rocket::buildTheFeet()
{
    std::string lineString = "";

    int spaces;

    // First foot
    lineString += "X";

    // Spaces to center the second foot
    for (spaces = 0; spaces < (((_numberOfLines * 2) - 3) / 2); spaces++)
        lineString += " ";

    // Second foot
    lineString += "X";

    // Spaces to put the third foot at the edge
    for (spaces = 0; spaces < (((_numberOfLines * 2) - 3) / 2); spaces++)
        lineString += " ";

    // Third foot
    lineString += "X";

    _theRocket.push_back(lineString);
}
