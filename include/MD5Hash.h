//
// Created by yaroslav on 03.04.2021.
//

#include "Hash.h"
#include <cryptopp/md5.h>

#ifndef DZ4_MD5_H
#define DZ4_MD5_H

class MD5Hash : public Hash {
public:
    explicit MD5Hash(std::string par_dist);

    std::string generate_hash(std::string &message) override;

    std::string cut_hash(short &cut_length, std::string &hash) override;

private:
    CryptoPP::MD5 hash;
    CryptoPP::HexEncoder encoder;
    std::string param_distrib;
};

#endif //DZ4_MD5_H
