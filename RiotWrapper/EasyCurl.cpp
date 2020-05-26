#include "EasyCurl.h"

size_t WriteCallback(char* contents, size_t size, size_t nmemb, void* userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

std::string fixMyUrl(std::string url) {
    size_t pos;

    while ((pos = url.find(' ')) != std::string::npos) {
        url.replace(pos, 1, "%20");
    }

    return url;
}

std::string getBody(std::string url) {
    curl_global_init(CURL_GLOBAL_DEFAULT);

    CURL* curl = curl_easy_init();
    CURLcode res;
        
    std::string readBuffer;

    curl_easy_setopt(curl, CURLOPT_URL, fixMyUrl(url).c_str());
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);

    if (CURLE_OK != res) {
        std::cerr << "CURL error: " << res << '\n';
    }
    curl_global_cleanup();
    return readBuffer;
}