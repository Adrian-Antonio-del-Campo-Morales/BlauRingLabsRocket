/*
 * rocket.h
 *
 *  Created on: 24 may. 2022
 *      Author: adelcampo
 */

#ifndef _ROCKET
#define _ROCKET

#include <vector>
#include <string>

    /**
     * @class
     * This class creates and stores the rocket.
     * The number of lines of the rocket is only set during construction
     */
    class Rocket
    {
    public:
        Rocket(int numberOfLines);
        ~Rocket() = default;

    private:
        int _numberOfLines;

        /**
         * @brief
         * This member function orderly builds the rocket using the other member functions.
         */
        void buildTheRocket();

        void buildTheTip();
        void buildTheBody();
        void buildTheFeet();

        /**
         * @brief
         * This variable stores the lines of the rocket
         */
        std::vector<std::string> _theRocket{};
    };

#endif // _ROCKET
