#ifndef JSON_H
#define JSON_H

#include <string>

std::string getStringFromValue(std::string value, std::string string);

int getIntFromValue(std::string value, std::string string);

__int64 getLongFromValue(std::string value, std::string string);

#endif