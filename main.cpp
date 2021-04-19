#include <iostream>
#include <iomanip>

#include <istream>
#include <ostream>
#include "TextHandler.h"
#include <cstring>



struct arguments {
    std::string filename;
    int number_ticket{};
    int par_distrib{};
}typedef arguments;


void parse_cmd(arguments& arg, int argc, char* argv[]) {
    for (size_t i = 1; i < argc; ++i) {
        if (!strcmp(argv[i], "--file") && (i + 1) <= argc) {
            if (strcmp(argv[++i], "--numbilets") != 0 && strcmp(argv[i], "--parameter") != 0) {
                arg.filename = argv[i];
                continue;
            }
        }
        if (!strcmp(argv[i], "--numbilets") && (i + 1) <= argc) {
            if (strcmp(argv[++i], "--file") != 0 && strcmp(argv[i], "--parameter") != 0) {
            arg.number_ticket = std::stoi(argv[i]);
            continue;
            }

        }
        if (!strcmp(argv[i], "--parameter") && (i + 1) <= argc) {
            if (strcmp(argv[++i], "--file") != 0 && strcmp(argv[i], "--numbilets") != 0) {
                arg.par_distrib = std::stoi(argv[i]);;
                continue;
            }
        }
    }
}


int main(int argc, char* argv[]) {
    arguments arg;
    parse_cmd(arg, argc, argv);

    TextHandler textHandler(arg.number_ticket);
    std::fstream file;
    if (!arg.filename.empty()) {
        file.open(arg.filename);
        textHandler.distribute_tickets(file);
        file.close();
    } else {
        textHandler.distribute_tickets();
    }
    return 0;
}