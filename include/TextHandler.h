//
// Created by yaroslav on 03.04.2021.
//

#include <iostream>
#include <fstream>
#include "Hash.h"

#ifndef DZ4_TEXTHANDLER_H
#define DZ4_TEXTHANDLER_H

class TextHandler {
public:
    TextHandler(int tick_numb);
    void distribute_tickets(std::istream& stream = std::cin) ;


private:
    std::hash<std::string> hash;
    int ticket_numbers;

    int number_of_ticket(unsigned long seed) const;



};

#endif //DZ4_TEXTHANDLER_H
