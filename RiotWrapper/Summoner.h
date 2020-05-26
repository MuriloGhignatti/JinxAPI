#ifndef SUMMONER_H
#define SUMMONER_H

#include <string>

class Summoner {

private:
    std::string id;
    std::string accountId;
    std::string puuId;
    std::string name;
    int profileIconId;
    __int64 revisionDate;
    int summonerLevel;

public:

    Summoner(std::string apiRequestBody);

    std::string getID();

    std::string getAccountID();

    std::string getpUUID();

    std::string getName();

    std::string getProfileImageURL();

    int getProfileIconId();

    __int64 getRevisionDate();

    int getSummonerLevel();
};

#endif