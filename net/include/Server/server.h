//
// Created by user on 28.03.21.
//

#ifndef NETWORKING_SERVER_H
#define NETWORKING_SERVER_H
#include <iostream>
#include <thread>
#include <poi
#include <memory>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>

/**
 * @namespace net
 * @brief Client/Server network namespace
 */
namespace net
{
    /**
     * @class Server
     * @brief My server realisation
     */
    class Server
    {
    public:
        Server(int32_t port, std::string address);
        ~Server();
        void start();
    private:
        int32_t _port;
        int16_t _backlog; ///< max inbound connections in the queue
        int sockfd; ///< listen
        int new_fd; ///< new connect
        struct addrinfo hints;
        std::unique_ptr<addrinfo> server;
        struct sockaddr_storage their_addr; ///< connected address info
        socklen_t  sin_size;
        struct sigaction sa;
        int yes = 1;
        char s[INET6_ADDRSTRLEN];
        int rv;
        std::string _address;
    };
};
#endif //NETWORKING_SERVER_H
