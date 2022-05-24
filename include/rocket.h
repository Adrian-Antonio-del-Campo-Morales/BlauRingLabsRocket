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

namespace ROCKET
{

    /**
     * @brief
     * Characters used for the different rocket parts.
     */
    static const char EMPTY_CHAR = ' ';
    static const char TIP_CHAR = '|';
    static const char BODY_CHAR = 'X';
    static const char FEET_CHAR = 'X';

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

        std::vector<std::string> *getRocket();

    private:
        int _numberOfLines;

        /**
         * @brief
         * This member function orderly builds the rocket using the other member functions.
         *
         * @param[in] N/A
         * @param[out] N/A
         * @return N/A
         * @exception None
         */
        void buildTheRocket();

        void buildTheTip();
        void buildTheBody();
        void buildTheFeet();

        /*
         * @brief
         * This variable stores the lines of the rocket
         */
        std::vector<std::string> _theRocket{};
    };

} // namespace ROCKET

#endif // _ROCKET