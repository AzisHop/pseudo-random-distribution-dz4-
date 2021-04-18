//
// Created by yaroslav on 03.04.2021.
//
#include <cryptopp/filters.h>
#include <cryptopp/hex.h>

#ifndef DZ4_HASH_H
#define DZ4_HASH_H
class Hash {
public:
    virtual std::string generate_hash(std::string &message) = 0;
    virtual std::string cut_hash(short &cut_length, std::string &hash) = 0;
};

#endif //DZ4_HASH_H
