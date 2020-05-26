#ifndef EASY_CURL_H
#define EASY_CURL_H

#define CURL_STATICLIB

#include "curl/curl.h"
#include <string>
#include <iostream>

size_t WriteCallback(char* contents, size_t size, size_t nmemb, void* userp);

std::string getBody(std::string url);

#endif