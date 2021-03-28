#include <iostream>
#include "include/network.h"

int main(int argc, char* argv[]) {
    net::Server server(8888, "127.0.0.1");
    server.start();
    return 0;
}
