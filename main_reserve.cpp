#include <iostream>
#include <iomanip>

#include "cryptopp/modes.h"
#include "cryptopp/aes.h"
#include "cryptopp/filters.h"
#include "cryptopp/sha.h"
#include "cryptopp/files.h"

#include "cryptopp/hex.h"
#include "cryptopp/des.h"
#include "cryptopp/md5.h"
#include "cryptopp/base64.h"

#include "MD5Hash.h"
#include <istream>
#include <ostream>
#include "TextHandler.h"


#define ENTER '\n'




int main(int argc, char* argv[]) {
//    CryptoPP::MD5 hash;
//    byte digest[ CryptoPP::MD5::DIGESTSIZE ];
//    std::string message = "Яцек Галовиц1";
//    long i =  	907996469009;
//    //srand(2);
//    srand48(907996469009);
//    std::cout << lrand48() % 100 << std::endl;
//
//
//
//    hash.CalculateDigest( digest, (byte*) message.c_str(), message.length() );
//
//    CryptoPP::HexEncoder encoder;
//    std::string output;
//    encoder.Attach( new CryptoPP::StringSink( output ) );
//    encoder.Put( digest, sizeof(digest) );
//    encoder.MessageEnd();
//
//    std::cout << output << std::endl;
//
//    std::string str = "0D368CE9711FFC44";
//    long hex = 0;
//    std::cout << strtol(str.c_str(), nullptr, 16) << std::endl;
//
//    std:: cout << (long)0xF;
//    std::string message = "Яцек Галовиц1";
//    MD5Hash md5Hash;
//    std::cout << md5Hash.generate_hash(message) << ENTER;
//    short len = 5;
//    std::string a = (md5Hash.generate_hash(message));
//    std::cout << md5Hash.cut_hash(len, a) << ENTER;
//    std::string a = "BAR";
//    std::cout << a.size() << " " << a + "" << " " << a.size();
    std::string param = "1";

    TextHandler textHandler(std::make_shared<MD5Hash>(param), 20);
    std::string filename = "./in.txt";
    textHandler.distribute_tickets(filename);
    return 0;
}