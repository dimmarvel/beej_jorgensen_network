#include <iostream>
#include <Server/server.h>

int main(int argc, char* argv[]) {
    net::Server server(80, "127.0.0.1");
    server.start();
    return 0;
}
