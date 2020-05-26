#include "Json.h"


std::string getStringFromValue(std::string value,std::string string) {

	int fix{ 0 };
	size_t id{ string.find(value) }; //position of "id":
	size_t commaNextValue{ string.find(':', id + 1) };
	size_t startString{};
	size_t endString{};


	if (string[commaNextValue + 1] == '"') {
		startString = commaNextValue + 2;
	}

	else { 
		startString = commaNextValue + 1;
	}
	if (string.find('"', startString + 1) != std::string::npos) {
		endString = string.find('"', startString + 1);
		fix = 1;
	}

	if (string.find('"', startString + 1) != std::string::npos && string[commaNextValue + 1] != '"') {
		endString = string.find('"', startString + 1);
		fix = 1;
	}

	else 
	{
		if (string.find(',', startString + 1) != std::string::npos) {
			endString = string.find(',', startString + 1);
		}
		else {
			endString = string.find('}', startString + 1);
		}
	}
	return string.substr(startString,(endString - startString) - fix);

}

int getIntFromValue(std::string value, std::string string) {
	return std::stoi(getStringFromValue(value, string));
}
__int64 getLongFromValue(std::string value, std::string string) {
	return std::stoll(getStringFromValue(value, string),nullptr,10);
}