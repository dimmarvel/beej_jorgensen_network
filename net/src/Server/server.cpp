//
// Created by user on 28.03.21.
//

#include "Server/server.h"

net::Server::Server(int32_t port, std::string address)
{
    _port = port;
    _address = address;
}
net::Server::~Server() {}

void net::Server::start()
{
    std::cout << "Server start: " + _address + ":" + std::to_string(_port) << std::endl;

    int status;
    struct addrinfo hints;
    struct addrinfo *servinfo;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    if(status = getaddrinfo(NULL, "3490", &hints, &servinfo))
    {
        std::cout << "getaddrinfo error:" << gai_strerror(status) << std::endl;
        exit(1);
    }else
    {
        std::cout << "Success" << std::endl;
    }
    freeaddrinfo(servinfo);
}