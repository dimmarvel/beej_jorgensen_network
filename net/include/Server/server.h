//
// Created by user on 28.03.21.
//

#ifndef NETWORKING_SERVER_H
#define NETWORKING_SERVER_H
#include <cassert>
#include <iostream>
#include <thread>
#include <unordered_map>
#include <vector>
#include <sys/socket.h>


/**
 * @namespace net
 * @brief Client/Server network namespace
 */
namespace net
{
    class Server
    {
    private:
        int32_t _port;
        std::string _address;
    public:
        Server(int32_t port, std::string address);
        void start();
    };
}
};
#endif //NETWORKING_SERVER_H
