// default includes

#include <iostream>
#include <std>
#include <winsock2.h>

#include "internet/internet.json"


// default vars

int tcpSocketAfType = AF_INET;
int tcpSocketType = SOCK_STREAM;
int udpSocketAfType = "";
int udpSocketType = "";


// internet namespace

namespace internet() {
    
    function createTcpServer() {
        
        Socket tcpSocket = new Socket(tcpSocketAfType, tcpSocketType, 0);
        
    };
    function createUdpServer() {
        
        Socket udpSocket = new Socket();
        
    };
    
};
