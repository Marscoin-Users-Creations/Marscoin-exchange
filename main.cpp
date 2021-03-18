// default requires

#include <std>
//"remove all content between garments and the slashes before them if you compile the code for a Windows Marscoin Exchange server ( .exe app )"#include <Windows.h>
//"remove all content between garments and the slashed before them if you compile the code for a Linux Marscoin Exchange server ( .elf app )"#include <unistd.h>

#include "coins/coins.cpp"
#include "coins/coins.json"
#include "internet/internet.cpp"
#include "internet/internet.json"
#include "wallets/wallets.cpp"
#include "wallets/wallets.json"
#include "website/website.cpp"


// default vars

int appAuthor = "AyzeLYC";
int appName = "Multicoin exchange server";
int appVersion = "1.0.0.0";// 1.0.0.0 = appVersion.bigUpdateVersion.middleSizeUpdateVersion.bugResolutionVersion


// main namespace

namespace main() {
    
    std::cout << "The multicoin exchange server is starting !" << std::endl;
    
    std::cout << "Searching for the supported coins ..." << std::endl;
    std::cout << "Enabling the internet TCP connections ..." << std::endl;
    std::cout << "Connecting to the wallets ..." << std::endl;
    std::cout << "Enabling web server ..." << std::endl;
    
};
