//
// Created by user on 28.03.21.
//

#include "Server/server.h"

net::Server::Server(int32_t port, std::string address)
{
    _port = port;
    _address = address;
}

void net::Server::start()
{
    std::cout << "Server start: " + _address + ":" + std::to_string(_port) << std::endl;
}