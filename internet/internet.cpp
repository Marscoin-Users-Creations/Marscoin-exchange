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
        int tcpSocketBind = bind();
        std::cout << "Tcp socket created !" << std::endl;
        
    };
    function createUdpServer() {
        
        Socket udpSocket = new Socket();
        int udpSocketBind = bind();
        std::cout << "Udp socket created !" << std::endl;
        
    };
    
};
