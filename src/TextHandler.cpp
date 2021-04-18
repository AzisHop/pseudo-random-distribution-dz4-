//
// Created by yaroslav on 03.04.2021.
//

#include <TextHandler.h>

TextHandler::TextHandler(int tick_numb)
        : ticket_numbers(tick_numb) {}

void TextHandler::distribute_tickets(std::istream& stream) {
    std::string FIO;
    int numb_tick = 0;

    while (std::getline(stream, FIO)) {
        numb_tick = number_of_ticket((hash(FIO)));
        std::cout << FIO << ": " << numb_tick << std::endl;
    }

}

int TextHandler::number_of_ticket(unsigned long seed) const {
    return seed % ticket_numbers;
}
