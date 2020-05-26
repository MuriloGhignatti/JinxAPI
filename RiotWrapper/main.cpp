#include "Jinx.h"

int main()
{
    Jinx jinx("RGAPI-f4677941-f1cb-441c-8422-e7453b7b5eeb");

    Summoner* summoner = jinx.getSummonerByName("RaiperK1");
   
    std::cout << '\n' << "ID: " << summoner->getID() << '\n';
    std::cout << "AccountID: " << summoner->getAccountID() << '\n';
    std::cout << "pUUID: " << summoner->getpUUID() << '\n';
    std::cout << "Name: " << summoner->getName() << '\n';
    std::cout << "ProfileIconID: " << summoner->getProfileIconId() << '\n';
    std::cout << "RevisionDate: " << summoner->getRevisionDate() << '\n';
    std::cout << "Level: " << summoner->getSummonerLevel() << '\n';
    std::cout << "Icon URL: " << summoner->getProfileImageURL() << '\n';

}
