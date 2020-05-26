#include "Jinx.h"

    Jinx::Jinx(std::string apiKey) :apiKey(std::move(apiKey)) {
    }
    
    Summoner* Jinx::getSummonerByName(std::string name) {
        return new Summoner(getBody("https://br1.api.riotgames.com/lol/summoner/v4/summoners/by-name/" + name + "?api_key=" + this->apiKey));
    }

    Summoner* Jinx::getSummonerByAccountID(std::string accountID) {
        return new Summoner(getBody("https://br1.api.riotgames.com/lol/summoner/v4/summoners/by-account/" + accountID + "?api_key=" + this->apiKey));
    }

    Summoner* Jinx::getSummonerByPUUID(std::string pUUID) {
        return new Summoner(getBody("https://br1.api.riotgames.com/lol/summoner/v4/summoners/by-puuid/" + pUUID + "?api_key=" + this->apiKey));
    }

    Summoner* Jinx::getSummonerBySummonerID(std::string id) {
        return new Summoner(getBody("https://br1.api.riotgames.com/lol/summoner/v4/summoners/" + id + "?api_key=" + this->apiKey));
    }