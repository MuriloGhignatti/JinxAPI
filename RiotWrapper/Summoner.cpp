#include "Summoner.h"
#include "Json.h"

Summoner::Summoner(std::string apiRequestBody) :id(getStringFromValue("id", apiRequestBody)),accountId(getStringFromValue("accountId", apiRequestBody))
	, puuId(getStringFromValue("puuid", apiRequestBody)),name(getStringFromValue("name", apiRequestBody)), profileIconId(getIntFromValue("profileIconId", apiRequestBody)), revisionDate(getLongFromValue("revisionDate", apiRequestBody))
	,summonerLevel(getIntFromValue("summonerLevel", apiRequestBody)){

}

std::string Summoner::getID() {
	return this->id;
}

std::string Summoner::getAccountID() {
	return this->accountId;
}

std::string Summoner::getpUUID() {
	return this->puuId;
}

std::string Summoner::getName() {
	return this->name;
}

int Summoner::getProfileIconId() {
	return this->profileIconId;
}

__int64 Summoner::getRevisionDate() {
	return this->revisionDate;
}

int Summoner::getSummonerLevel() {
	return this->summonerLevel;
}

std::string Summoner::getProfileImageURL() {
	return "https://raw.communitydragon.org/latest/plugins/rcp-be-lol-game-data/global/default/v1/profile-icons/" + std::to_string(this->profileIconId) + ".jpg";
}