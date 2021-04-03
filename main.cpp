#include <iostream>
#include <Server/server.h>
#include <sys/socket.h>

int main(int argc, char* argv[]) {
    net::Server server(8888, "127.0.0.1");
    server.start();
    //testing commits
    return 0;
}
