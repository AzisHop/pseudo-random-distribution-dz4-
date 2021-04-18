//
// Created by yaroslav on 03.04.2021.
//

#include "MD5Hash.h"

#include <utility>

MD5Hash::MD5Hash(std::string par_dist) : param_distrib(std::move(par_dist)) {

}

std::string MD5Hash::generate_hash(std::string &mes) {
    std::string message = mes + param_distrib;
    byte digest[ CryptoPP::MD5::DIGESTSIZE ];
    std::string output;

    hash.CalculateDigest(digest, (byte*) message.c_str(), message.length() );
    encoder.Attach( new CryptoPP::StringSink( output ) );
    encoder.Put( digest, sizeof(digest) );
    encoder.MessageEnd();
    return output;
}

std::string MD5Hash::cut_hash(short &cut_length, std::string &hs) {
    return hs.substr(0, cut_length);
}


