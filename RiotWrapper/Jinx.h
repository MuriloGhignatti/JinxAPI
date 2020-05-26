#ifndef JINX_H
#define JINX_H

#include <utility>
#include "EasyCurl.h"
#include "Summoner.h"

/*typedef struct  Region {
    std::string br = "br1";
    std::string eune = "eun1";
    std::string euw = "euw1";
    std::string jp = "jp1";
    std::string kr = "kr";
    std::string la1 = "la1";
    std::string la2 = "la2";
    std::string na = "na1";
    std::string oc = "oc1";
    std::string ru = "ru";
    std::string tr = "tr1";
}Region;
*/ //Work in Progess

class Jinx {
private:
    std::string apiKey;

public:
    Jinx(std::string apiKey);

    Summoner* getSummonerByName(std::string name);

    Summoner* getSummonerByAccountID(std::string accountID);

    Summoner* getSummonerByPUUID(std::string pUUID);

    Summoner* getSummonerBySummonerID(std::string id);
};

#endif